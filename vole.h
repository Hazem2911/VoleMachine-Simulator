






//hazem ahmed 20230113
//adham ayman 20230042
//abdelrahman kamel 20231091

















#pragma once
#include <sstream>
#include<cmath>
#include <string>
#include <vector>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
bool ok = true;
class Memory {
private:
    int size = 256;
    std::vector<std::string> main_memory;

public:
    Memory() : main_memory(size, "00") {} // Constructor initializes memory with "00"

    int get_size() {
        return size;
    }

    System::String^ get_cell(int index) {
        return gcnew System::String(main_memory[index].c_str());
    }

    void set_cell(int index, const std::string& var) {
        if (index >= 0 && index < size) {
            main_memory[index] = var;
        }
    }
    void clear_memory() {
        std::fill(main_memory.begin(), main_memory.end(), "00");
    }
};

class Regester {
private:
    int size = 16;
    std::vector<std::string> main_regester;
public:
    Regester() : main_regester(size, "00") {}

    int get_size() {
        return size;
    }
    System::String^ get_cell(int index) {
        return gcnew System::String(main_regester[index].c_str());
    }
    void set_cell(int index, const std::string& var) {
        if (index >= 0 && index < size) {
            main_regester[index] = var;
        }
    }
    void clear_regester() {
        std::fill(main_regester.begin(), main_regester.end(), "00");
    }

};


class ALU {
public:
    static int hextodec(const std::string& hex) {
        int decimalValue = 0;
        decimalValue = std::stoi(hex, nullptr, 16);  // Convert hex string to int with base 16
        return decimalValue;
    }
    static std::string dectohex(int decimal) {
        std::stringstream ss, cc;
        ss << std::hex << decimal;
        if (ss.str() == "0" || ss.str() == "1" || ss.str() == "2" || ss.str() == "3" || ss.str() == "4" || ss.str() == "5" || ss.str() == "6" || ss.str() == "7"
            || ss.str() == "8" || ss.str() == "9" || ss.str() == "a" || ss.str() == "b" || ss.str() == "c" || ss.str() == "d" || ss.str() == "e" || ss.str() == "f") {
            return "0" + ss.str();
        }
        return  ss.str();
    }
};
class cu {
public:
    static void moveMemoryToRegister(const std::string& reg, const std::string& memAddr, Memory& storage, Regester& regUnit);
    static void storeImmediateToRegister(const std::string& reg, const std::string& value, Regester& regUnit);
    static void copyRegisterToMemory(const std::string& reg, const std::string& memAddr, Memory& storage, Regester& regUnit);
    static void transferRegisterToRegister(const std::string& regDest, const std::string& regSrc, Regester& regUnit);
    static void addIntRegisters(const std::string& regDest, const std::string& regSrc1, const std::string& regSrc2, Regester& regUnit);
    static void addFloatRegisters(const std::string& regDest, const std::string& regSrc1, const std::string& regSrc2, Regester& regUnit);
    static void performBitwiseOr(const std::string& regDest, const std::string& regSrc1, const std::string& regSrc2, Regester& regUnit);
    static void performBitwiseAnd(const std::string& regDest, const std::string& regSrc1, const std::string& regSrc2, Regester& regUnit);
    static void performBitwiseXor(const std::string& regDest, const std::string& regSrc1, const std::string& regSrc2, Regester& regUnit);
    static void conditionalJump(const std::string& reg, const std::string& memAddr, Memory& storage, Regester& regUnit);
    static void SecondJump(const std::string& r, const std::string& xy, Memory& memory, Regester& reg);
    static void terminateExecution(bool& isRunning);
};

class CPU : public Memory, public cu {
private:
    std::string ir_value;


public:

    void fetch(int x, Memory& mm) {
        msclr::interop::marshal_context context;
        std::string cell1 = context.marshal_as<std::string>(mm.get_cell(x));
        msclr::interop::marshal_context context2;
        std::string cell2 = context2.marshal_as<std::string>(mm.get_cell(x + 1));
        ir_value = cell1 + cell2;
        std::string opc(1, ir_value[0]);
        std::string R(1, ir_value[1]);
        std::string X(1, ir_value[2]);
        std::string Y(1, ir_value[3]);

    }

    std::string get_ir() const { return ir_value; }


    void decode(std::string& op, std::string& reg, std::string& x, std::string& y, std::string& textbox) {
        std::string opc(1, ir_value[0]);
        std::string R(1, ir_value[1]);
        std::string X(1, ir_value[2]);
        std::string Y(1, ir_value[3]);
        if (opc == "1" || opc == "2" || opc == "3" || opc == "B" || opc == "D") {
            op = opc;
            reg = R;
            x = X;
            y = Y;
            if (op == "1") {
                textbox = "LOAD Register " + R + " with the content of memory at address " + X + Y;
            }
            else if (op == "2")
                textbox = "LOAD Register " + R + " with bit pattern " + X + Y;
            else if (op == "3")
                textbox = "STORE the bit pattern of Register " + R + " in memory at address " + X + Y;
            else if (op == "B")
                textbox = "JUMP to the instruction located in memory at address " + X + Y + " if the bit pattern in Register " + R + " matches with the bit pattern in Register 0";
            else
                textbox = "Jump to instruction in RAM cell " + X + Y + " if the content of register " + R + " is greater than(>) the content of register 0. Data is interpreted as integers in two's-complement notation";
        }
        else if (opc == "4") {
            op = opc;
            reg = R;
            x = X;
            y = Y;

            textbox = "MOVE the bit pattern of Register " + X + " into Register " + Y;
        }
        else if (opc == "5" || opc == "6" || opc == "7" || opc == "8" || opc == "9") {
            op = opc;
            reg = R;
            x = X;
            y = Y;
            if (op == "5") {
                textbox = "ADD the bit patterns of Registers " + X + " and " + Y + " as if they were integers, and store the result in Register " + R;
            }
            else if (op == "6")
                textbox = "ADD the bit patterns of Registers " + X + " and " + Y + " as if they were floating point numbers, and store the result in Register " + R;
            else if (op == "7")
                textbox = "OR the bit patterns of Registers " + X + " and " + Y + ", and store the result in Register " + R;
            else if (op == "8")
                textbox = "AND the bit patterns of Registers " + X + " and " + Y + ", and store the result in Register " + R;
            else
                textbox = "XOR the bit patterns of Registers " + X + " and " + Y + ", and store the result in Register " + R;
        }
        else if (opc == "A") {
            op = opc;
            reg = R;
            x = X;
            y = Y;
            textbox = "ROTATE the bit pattern in Register " + R + " one bit to the right" + Y + "times";
        }
        else if (opc == "C") {
            op = opc;
            reg = R;
            x = X;
            y = Y;

            textbox = "HALT the execution.";
        }
        else if (opc == "0") {
            op = opc;
            reg = R;
            x = X;
            y = Y;

            textbox = "NOTHING. Advance to the next step.";
        }
        else {
            op = opc;
            reg = R;
            x = X;
            y = Y;
            textbox = "INVALID OPERATION";
        }

    }
    void execute(Memory& storage, Regester& regUnit, bool& isRunning) {
        std::string opcode(1, ir_value[0]);
        std::string reg(1, ir_value[1]);
        std::string param1(1, ir_value[2]);
        std::string param2(1, ir_value[3]);

        if (opcode == "1") {
            moveMemoryToRegister(reg, param1 + param2, storage, regUnit);
        }
        else if (opcode == "2") {
            storeImmediateToRegister(reg, param1 + param2, regUnit);
        }
        else if (opcode == "3") {
            copyRegisterToMemory(reg, param1 + param2, storage, regUnit);
        }
        else if (opcode == "4") {
            transferRegisterToRegister(param1, param2, regUnit);
        }
        else if (opcode == "5") {
            addIntRegisters(reg, param1, param2, regUnit);
        }
        else if (opcode == "6") {
            addFloatRegisters(reg, param1, param2, regUnit);
        }
        else if (opcode == "7") {
            performBitwiseOr(reg, param1, param2, regUnit);
        }
        else if (opcode == "8") {
            performBitwiseAnd(reg, param1, param2, regUnit);
        }
        else if (opcode == "9") {
            performBitwiseXor(reg, param1, param2, regUnit);
        }
        else if (opcode == "B") {
            conditionalJump(reg, param1 + param2, storage, regUnit);
        }
        else if (opcode == "C") {
            terminateExecution(isRunning);
        }
        else if (opcode == "D") {
            SecondJump(reg, param1 + param2, storage, regUnit);
        }
    }


};





















