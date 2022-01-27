#pragma once
#include <vector>
#include <memory>
#include "Node.h"
#include "IntegerNode.h"

enum operName {
    nothing,
    plus = '+',
    minus = '-',
    multiply = '*',
    divide = '/'
};

namespace Interpreter {

class OperationNode: public Node {
private:
    operName operation;
    std::vector<std::shared_ptr<Node>> kids;
public:
    const char getData() {return operation;};

    void print(std::stringstream& strm) override {
        switch (operation)
        {
        case plus:
            if (kids[0]->nType == INTNODE && kids[1]->nType == INTNODE) {
                strm << std::dynamic_pointer_cast<IntegerNode>(kids[0])->getData() + std::dynamic_pointer_cast<IntegerNode>(kids[1])->getData();
            }
            else {
                throw "Semantic error! Different types of operands.";
            }
            break;

        case minus:
            if (kids[0]->nType == INTNODE && kids[1]->nType == INTNODE) {
                strm << std::dynamic_pointer_cast<IntegerNode>(kids[0])->getData() - std::dynamic_pointer_cast<IntegerNode>(kids[1])->getData();
            }
            else {
                throw "Semantic error! Different types of operands.";
            }
            break;

        case multiply:
            if (kids[0]->nType == INTNODE && kids[1]->nType == INTNODE) {
                strm << std::dynamic_pointer_cast<IntegerNode>(kids[0])->getData() * std::dynamic_pointer_cast<IntegerNode>(kids[1])->getData();
            }
            else {
                throw "Semantic error! Different types of operands.";
            }
            break;

        case divide:
            if (kids[0]->nType == INTNODE && kids[1]->nType == INTNODE) {
                strm << std::dynamic_pointer_cast<IntegerNode>(kids[0])->getData() / std::dynamic_pointer_cast<IntegerNode>(kids[1])->getData();
            }
            else {
                throw "Semantic error! Different types of operands.";
            }
            break;
        
        default:
            throw "Unknown operand type!";
            break;
        }
    }

    OperationNode(): Node(OPNODE) {operation = nothing;};
    OperationNode(operName name, std::vector<std::shared_ptr<Node>> kids) {
        operation = name;
        for (auto& kid: kids) this->kids.push_back(kid);
    };
    ~OperationNode() {};
};

}