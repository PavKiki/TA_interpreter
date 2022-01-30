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

}