#pragma once
#include <bitset>
#include "Node.h"

enum NumSys {
    binary, //0
    decimal //1
};

union Data {
    std::bitset<32> bin;
    int dec;

    ~Data() {};
    Data() {};
    void setBin(std::string data) {bin = std::bitset<32>(data);}    
};

namespace Interpreter {

class IntegerNode: public Node {
private:
    NumSys type;
    Data data;
public:
    int getData() {return type==decimal ? data.dec : static_cast<int>(data.bin.to_ulong());}

    void print(std::stringstream& strm) override {
        strm << type ? data.dec : data.bin;
    }

    NumSys getType() {return type;}

    IntegerNode(): type(decimal), Node(INTNODE) {data.dec = 0;};
    IntegerNode(NumSys typ, std::string dat): Node(INTNODE) {
        if (typ == binary) data.setBin(dat);
        else data.dec = std::stoi(dat);
    };
    ~IntegerNode() {};
};

}