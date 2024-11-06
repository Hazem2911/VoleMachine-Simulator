Memory-Register ALU Simulation with GUI Integration
This C++ project simulates a simple CPU architecture with components for memory, registers, an arithmetic logic unit (ALU), and control unit (CU). The code is integrated with a graphical user interface (GUI), leveraging .NET interop (C++/CLI) to interact between managed and unmanaged code.

Features:
Memory Management:

A memory module initialized with 256 cells, each storing two-digit hexadecimal values. Memory cells can be read, modified, and reset to default values.
Register Operations:

A register module consisting of 16 registers, each initialized with a hexadecimal value. Registers support read, write, and reset operations.
ALU Functions:

Basic ALU functionality that converts between hexadecimal and decimal values. Supports integer addition and floating-point operations.
Control Unit (CU):

Implements various operations such as moving data between memory and registers, bitwise operations (AND, OR, XOR), and arithmetic calculations (addition). Also includes conditional jump operations and program termination commands.
Instruction Fetch-Decode-Execute Cycle:

Simulates a basic CPU cycle by fetching an instruction from memory, decoding it into opcode and parameters, and executing the corresponding operation.
GUI Integration:

The project integrates with a .NET-based GUI, allowing for interaction between the GUI and the memory/register simulation using msclr::interop::marshal_cppstd.
Key Classes:
Memory: Manages memory cells.
Regester: Handles registers.
ALU: Provides arithmetic and bitwise operations.
cu: Executes control unit instructions.
CPU: Ties everything together, implementing the fetch-decode-execute cycle.
Example Instructions:
LOAD: Load memory content into a register.
STORE: Store register content into memory.
ADD: Add content from two registers and store the result.
JUMP: Conditional and unconditional jumps based on register values.
This project demonstrates basic CPU architecture concepts and their interaction with a simple GUI. It can serve as a learning tool for understanding memory management, register manipulation, ALU functions, and CPU control logic.
