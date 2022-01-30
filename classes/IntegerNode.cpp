#include "IntegerNode.h"
    
void Data::setBin(std::string data) {
    bin = std::bitset<32>(std::stoi(data, 0, 2));
}

int Interpreter::IntegerNode::execute() {
    return type==decimal ? data.dec : static_cast<int>(data.bin.to_ulong());
}

void Interpreter::IntegerNode::print(std::ostringstream& strm) {
    strm << std::to_string(type == decimal ? data.dec : static_cast<int>(data.bin.to_ulong())) << '\n';
}

Interpreter::IntegerNode::IntegerNode(NumSys typ, std::string dat): Node(INTNODE), type(typ) {
    if (typ == binary) data.setBin(dat);
    else data.dec = std::stoi(dat);
}

// int Interpreter::IntegerVariableNode::execute() {
//     return data;
// }

// void Interpreter::IntegerVariableNode::print(std::stringstream& strm) {
//     strm << data;
// }