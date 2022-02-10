#pragma once
#include <bitset>
#include "Node.h"
#include "FunctionNode.h"

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

    Node* copy() {auto src = new IntegerNode(type, (std::to_string(type == decimal ? data.dec : static_cast<int>(data.bin.to_ulong())))); return src;}

    NumSys getType() {return type;}

    void setDecData(int dat) {
        type = decimal;
        data.dec = dat;
    }

    int getDecData() {return data.dec;}

    IntegerNode(): type(decimal), Node(INTNODE) {data.dec = 0;};
    IntegerNode(NumSys typ, std::string dat);
    ~IntegerNode() {};
};

class IntegerVectorNode: public AbstractVectorNode {
private:

public:
    IntegerNode& operator[] (const size_t index) {return *(dynamic_cast<IntegerNode*>(getByIndex(index)));}

    IntegerVectorNode(): AbstractVectorNode(Interpreter::INTVECNODE) {};
    IntegerVectorNode(std::vector<Node*> dat, size_t siz): AbstractVectorNode(Interpreter::INTVECNODE, dat, siz) {};
    ~IntegerVectorNode() {};
};

class IntegerMatrixNode: public AbstractMatrixNode {
private:

public:
    IntegerVectorNode& operator[] (const size_t index) {return *(dynamic_cast<IntegerVectorNode*>(getByIndex(index)));}

    IntegerMatrixNode(): AbstractMatrixNode(Interpreter::INTMATNODE) {};
    IntegerMatrixNode(std::vector<AbstractVectorNode*> dat, size_t xx, size_t yy): AbstractMatrixNode(Interpreter::INTMATNODE, dat, xx, yy) {};
    ~IntegerMatrixNode() {};
};

}