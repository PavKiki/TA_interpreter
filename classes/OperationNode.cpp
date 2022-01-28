#include "OperationNode.h"

bool Interpreter::suitForArithm(Interpreter::Node* node) {
    switch (node->nType) {
        case Interpreter::INTNODE:
            return true;

        case Interpreter::OPNODE: {
            operName tmp = dynamic_cast<Interpreter::OperationNode*>(node)->getOperation();
            switch (tmp) {
                case plus:
                    return true;

                case minus:
                    return true;

                case divide:
                    return true;
                    
                case multiply:
                    return true;

                case less:
                    return false;

                case greater:
                    return false;

                default:
                    return false;
            }
        }

        default:
            return false;
    }
}

void Interpreter::OperationNode::print(std::stringstream& strm) {
    try {
        strm << this->getData();
    }
    catch (const char* error) {
        std::cerr << error << std::endl;
    }
}

int Interpreter::OperationNode::getData() {
    switch (operation)
    {
    case plus:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return kids[0]->getData() + kids[1]->getData();
        }
        break;

    case minus:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return kids[0]->getData() - kids[1]->getData();
        }
        break;

    case multiply:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return kids[0]->getData() * kids[1]->getData();
        }
        break;

    case divide:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return kids[0]->getData() / kids[1]->getData();
        }
        break;
    
    case less:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return (kids[0]->getData() < kids[1]->getData());
        }
        break;

    case greater:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return (kids[0]->getData() > kids[1]->getData());
        }
        break;

    // case denial:
    //     if (kids[0]->nType == INTNODE) {
    //         strm << (dynamic_cast<Interpreter::IntegerNode*>(kids[0])->getData()) ? 0 : 1;
    //     }
    //     else if (kids[0]->nType == BOOLNODE) {
    //         strm << !(dynamic_cast<Interpreter::BoolNode*>(kids[0])->getData());
    //     }
    //     else {
    //         throw "Semantic error! Wrong type of operand.";
    //     }
    //     break;
    default:
        throw "Unknown operand type!";
        break;
    }
    return -1;
}

Interpreter::OperationNode::OperationNode(operName name, std::vector<Interpreter::Node*> kids): Interpreter::Node(Interpreter::OPNODE) {
    operation = name;
    for (auto& kid: kids) this->kids.push_back(kid);
}