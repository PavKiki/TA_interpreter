#pragma once
#include <string>
#include "Node.h"

namespace Interpreter {

class BoolNode: public Node{
private:
    bool data;
public:
    int execute() override {return data;};

    void writeData(bool data) {data = data;};

    void print(std::ostringstream& strm) override;

    Node* copy() {auto src = new BoolNode(data == true ? "true" : "false"); return src;}

    BoolNode(): data(true), Node(BOOLNODE) {};
    BoolNode(std::string dat): Node(BOOLNODE) {data = dat == "true" ? true : false;};
    ~BoolNode() {};
};

class BoolVectorNode: public AbstractVectorNode {
private:

public:
    BoolVectorNode(): AbstractVectorNode() {};
    BoolVectorNode(std::vector<Node*> dat, size_t siz): AbstractVectorNode(Interpreter::BOOLVECNODE, dat, siz) {};
    ~BoolVectorNode() {};
};

class BoolMatrixNode: public AbstractMatrixNode {
private:

public:
    BoolMatrixNode(): AbstractMatrixNode() {};
    BoolMatrixNode(std::vector<AbstractVectorNode*> dat, size_t xx, size_t yy): AbstractMatrixNode(Interpreter::BOOLMATNODE, dat, xx, yy) {};
    ~BoolMatrixNode() {};
};

}