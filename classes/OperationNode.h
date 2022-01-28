#pragma once
#include <vector>
#include "Node.h"
#include "IntegerNode.h"
#include "BoolNode.h"

enum operName {
    nothing,
    plus,
    minus,
    multiply,
    divide,
    less,
    greater,
    denial
};

namespace Interpreter {

class OperationNode: public Node {
private:
    operName operation;
    std::vector<Node*> kids;
public:
    operName getOperation() {return operation;};

    int getData() override;

    void print(std::stringstream& strm) override;

    OperationNode(): Node(OPNODE) {operation = nothing;};
    OperationNode(operName name, std::vector<Node*> kids);
    ~OperationNode() {};
};

bool suitForArithm(Node*);
}