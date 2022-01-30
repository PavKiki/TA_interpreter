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
    void setBin(std::string data);
};

namespace Interpreter {

class IntegerNode: public Node {
private:
    NumSys type;
    Data data;
public:
    int execute() override;

    void print(std::ostringstream& strm) override;

    NumSys getType() {return type;}

    IntegerNode(): type(decimal), Node(INTNODE) {data.dec = 0;};
    IntegerNode(NumSys typ, std::string dat);
    ~IntegerNode() {};
};

class IntegerVectorNode: public AbstractVectorNode {
private:

public:
    IntegerVectorNode(): AbstractVectorNode() {};
    IntegerVectorNode(std::vector<Node*> dat, size_t siz): AbstractVectorNode(Interpreter::INTVECNODE, dat, siz) {};
    ~IntegerVectorNode() {};
};

}