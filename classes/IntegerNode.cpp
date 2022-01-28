#include "IntegerNode.h"
    
void Data::setBin(std::string data) {
    bin = std::bitset<32>(std::stoi(data, 0, 2));
}

int Interpreter::IntegerNode::getData() {
    return type==decimal ? data.dec : static_cast<int>(data.bin.to_ulong());
}

void Interpreter::IntegerNode::print(std::stringstream& strm) {
    strm << type ? data.dec : data.bin;
}

Interpreter::IntegerNode::IntegerNode(NumSys typ, std::string dat): Node(INTNODE) {
    if (typ == binary) data.setBin(dat);
    else data.dec = std::stoi(dat);
};