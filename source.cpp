#include "vole.h"
#include <msclr\marshal_cppstd.h>0
Regester reg;
Memory mm;
CPU cc;
std::string mama;
int point;

std::string convert(std::stringstream& ss) {
    return ss.str();
}

System::String^ c_system(const std::string& stdString) {
    return msclr::interop::marshal_as<System::String^>(stdString);
}

std::string someFunction(System::String^ managedString) {
    std::string stdString = msclr::interop::marshal_as<std::string>(managedString);
    std::stringstream ss;
    ss << stdString;
    return convert(ss);
}

void add(int x, const std::string& code, Memory& memory) {
    std::string upperCode = code;
    for (char& c : upperCode) {
        c = std::toupper(c);
    }

    memory.set_cell(x++, upperCode.substr(0, 2));
    memory.set_cell(x++, upperCode.substr(2, 2));
}
double hextofloat(const std::string& hex) {
    int hexValue = std::stoi(hex, nullptr, 16);

    bool sign = hexValue & 0x80;
    int exponent = ((hexValue >> 4) & 0x07) - 4;
    int mantissa = hexValue & 0x0F;

    double decodedValue = (mantissa / 16.0) * std::pow(2, exponent);
    return sign ? -decodedValue : decodedValue;
}

std::string floattohex(double value) {
    int result = 0;
    if (value == 0) return "00";

    if (value < 0) {
        result |= 0x80;
        value = -value;
    }

    int exponent = static_cast<int>(std::log2(value)) + 4;
    if (exponent < 0 || exponent > 7) throw std::overflow_error("Exponent out of range for encoding.");

    result |= (exponent << 4) & 0x70;
    float mantissa = value / std::pow(2, exponent - 4) - 1.0f;
    result |= static_cast<int>(max(0.0, mantissa) * 16) & 0x0F;

    std::stringstream ss;
    ss << std::hex << (result & 0xFF);
    std::string hexStr = ss.str();
    return hexStr.size() < 2 ? "0" + hexStr : hexStr;
}

void cu::moveMemoryToRegister(const std::string& r, const std::string& xy, Memory& mm, Regester& reg) {
    int R = ALU::hextodec(r);
    int XY = ALU::hextodec(xy);
    reg.set_cell(R, someFunction(mm.get_cell(XY)));
    //Example: 14A3 would cause the contents of the memory cell located at address A3 to be placed in register 4. 1401------>the memory cell located at address 01 to be placed in register 4 01
}

void cu::storeImmediateToRegister(const std::string& r, const std::string& xy, Regester& reg) {
    int R = ALU::hextodec(r);
    reg.set_cell(R, xy);
    //Example: 20A3 would cause the value A3 to be placed in register 0.
}

void cu::copyRegisterToMemory(const std::string& r, const std::string& xy, Memory& memory, Regester& reg) {
    int R = ALU::hextodec(r);
    int XY = ALU::hextodec(xy);
    mm.set_cell(XY, someFunction(reg.get_cell(R)));
    //Example: 35B1 would cause the contents of register 5 to be placed in the memory cell whose address is B1   25KK 35B1 ----> the memory cell whose address is B1 KK
}

void cu::transferRegisterToRegister(const std::string& r, const std::string& s, Regester& reg) {
    int R = ALU::hextodec(r);
    int S = ALU::hextodec(s);
    reg.set_cell(R, someFunction(reg.get_cell(S)));
    //Example: 40A4 would cause the contents of register A to be copied into register 4.  2A02  2403   40A4----->regA 03
}

void cu::addIntRegisters(const std::string& r, const std::string& s, const std::string& t, Regester& reg) {
    int R = ALU::hextodec(r);
    int S = ALU::hextodec(s);
    int T = ALU::hextodec(t);
    int result = ALU::hextodec(someFunction(reg.get_cell(S))) + ALU::hextodec(someFunction(reg.get_cell(T)));
    reg.set_cell(R, ALU::dectohex(result));
    //Example: 5726 would cause the binary values in registers 2 and 6 to be added and the sum placed in register 7. 2201 2602 reg 7 ---->03
}



void cu::addFloatRegisters(const std::string& regDest, const std::string& regSrc1, const std::string& regSrc2, Regester& regUnit) {
    int R = ALU::hextodec(regDest);
    int S = ALU::hextodec(regSrc1);
    int T = ALU::hextodec(regSrc2);

    // Lambda functions for encoding and decoding
    auto decode = [](int hexValue) -> float {
        int sign = (hexValue & 0x80) ? -1 : 1;
        int exponent = ((hexValue >> 4) & 0x07) - 4;
        float mantissa = (hexValue & 0x0F) / 16.0f;
        return sign * std::pow(2, exponent) * mantissa;
        };

    auto encode = [](float value) -> int {
        int result = 0;
        if (value == 0) return 0;

        if (value < 0) {
            result |= 0x80;
            value = -value;
        }

        int exponent = static_cast<int>(std::log2(value)) + 4;
        if (exponent < 0 || exponent > 7) throw std::overflow_error("Exponent out of range for encoding.");

        result |= (exponent << 4) & 0x70;
        float mantissa = value / std::pow(2, exponent - 4) - 1.0f;
        result |= static_cast<int>(max(0.0f, mantissa) * 16) & 0x0F;
        return result;
        };

    // Decode values
    float decodedS = decode(S);
    float decodedT = decode(T);

    // Perform the addition
    float result = decodedS + decodedT;

    // Encode the result
    int encodedResult = encode(result);

    // Convert encoded result to hex string
    std::stringstream ss;
    ss << std::hex << (encodedResult & 0xFF);  // Mask with 0xFF to keep only the last 8 bits
    std::string resultHex = ss.str();
    if (resultHex.length() < 2) resultHex = "0" + resultHex;  // Ensure 2 characters for consistency

    // Store the encoded result in the destination register
    regUnit.set_cell(R, resultHex);
}


void cu::performBitwiseOr(const std::string& r, const std::string& s, const std::string& t, Regester& reg) {
    int R = ALU::hextodec(r);
    int S = ALU::hextodec(s);
    int T = ALU::hextodec(t);
    int result = ALU::hextodec(someFunction(reg.get_cell(S))) | ALU::hextodec(someFunction(reg.get_cell(T)));
    reg.set_cell(R, ALU::dectohex(result));
    //Example when 2023  2103 7F01 -------> in regester f will output 23 
}

void cu::performBitwiseAnd(const std::string& r, const std::string& s, const std::string& t, Regester& reg) {
    int R = ALU::hextodec(r);
    int S = ALU::hextodec(s);
    int T = ALU::hextodec(t);
    int result = ALU::hextodec(someFunction(reg.get_cell(S))) & ALU::hextodec(someFunction(reg.get_cell(T)));
    reg.set_cell(R, ALU::dectohex(result));
    //Example when 2023  2103 8F01 -------> in regester f will output 03 
}

void cu::performBitwiseXor(const std::string& r, const std::string& s, const std::string& t, Regester& reg) {
    int R = ALU::hextodec(r);
    int S = ALU::hextodec(s);
    int T = ALU::hextodec(t);
    int result = ALU::hextodec(someFunction(reg.get_cell(S))) ^ ALU::hextodec(someFunction(reg.get_cell(T)));
    reg.set_cell(R, ALU::dectohex(result));
    //Example when 2023  2103 9F01 -------> in regester f will output 20 
}

void cu::conditionalJump(const std::string& r, const std::string& xy, Memory& memory, Regester& reg) {
    int R = ALU::hextodec(r);
    int XY = ALU::hextodec(xy);
    if (reg.get_cell(R) == reg.get_cell(0)) {
        point = XY;
    }
    /*
        Example: B43C would first compare the contents of register 4 with the contents of register 0. If
        the two were equal, the pattern 3C would be placed in the program counter so that the next
        instruction executed would be the one located at that memory address.Otherwise, nothing would
        be done and program execution would continue in its normal sequence*/
}
void cu::SecondJump(const std::string& r, const std::string& xy, Memory& memory, Regester& reg) {
    int R = ALU::hextodec(r);
    int XY = ALU::hextodec(xy);
    std::string reg2 = someFunction(reg.get_cell(R));
    std::string reg3 = someFunction(reg.get_cell(0));
    if (ALU::hextodec(reg2) > ALU::hextodec(reg3)) {
        point = XY;
    }
}

void cu::terminateExecution(bool& running) {
    running = false;
    //Example: C000 would cause program execution to stop and this is more usable in run till halt
}

