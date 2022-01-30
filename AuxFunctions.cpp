#include "AuxFunctions.h"

extern std::ostringstream Interpreter::out;

void outputOut() {
    std::cout << Interpreter::out.str();
}

// void putInStorage(std::string name, Interpreter::Node* data) {

// }