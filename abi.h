#include <asphyniix.h>

using namespace std;

/*
OPCODE STRUCTURES:

BA - Set local
AA - Set global
AB - Remove local
BB - Remove global
*/

/*
BYTECODE STRUCTURES:

MAIN:

NUM]INSTR ARGS OPCODE

EX:

0]LOAD 1 BA
1]SET my_number AA
*/

bool ABI(bytecode BC) {
vector<string> Bytecode = SplitString(BC, ']');
////
string Position = Bytecode.at(0).c_str();
string Instr = Bytecode.at(1).c_str();
vector<string>2Bytecode = SplitString(Bytecode.at(1).c_str(), ' ');
string Args = Bytecode2.at(1).c_str();
string Opcode = Bytecode2.at(2).c_str();

  if (Instr == "LOAD") {
    if (type_of(Args) == "int") {
      apushnumber(atoi(Args.c_str());
    }
  }
  
}
