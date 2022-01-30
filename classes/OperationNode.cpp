#include "OperationNode.h"
#include "IntegerNode.h"
#include "BoolNode.h"

extern std::ostringstream Interpreter::out;

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

                default:
                    return false;
            }
        }

        default:
            return false;
    }
}

void Interpreter::OperationNode::print(std::ostringstream& strm) {}

int Interpreter::OperationNode::execute() {
    switch (operation)
    {
    case plus:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            int tmp = kids[0]->execute() + kids[1]->execute();
            return tmp;
        }
        break;

    case minus:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return kids[0]->execute() - kids[1]->execute();
        }
        break;

    case multiply:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return kids[0]->execute() * kids[1]->execute();
        }
        break;

    case divide:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return kids[0]->execute() / kids[1]->execute();
        }
        break;
    
    case less:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return (kids[0]->execute() < kids[1]->execute());
        }
        break;

    case greater:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return (kids[0]->execute() > kids[1]->execute());
        }
        break;

    case denial:
        return !kids[0]->execute();

    case newline: {
        for (auto& kid: kids) {
            kid->execute();
        }
        return 0;
    }

    case pprint: {
        kids[0]->print(Interpreter::out);
        return 0;
    }

    default:
        throw "Unknown operand type!";
    }
    return -1;
}

Interpreter::OperationNode::OperationNode(operName name, std::vector<Interpreter::Node*> kids): Interpreter::Node(Interpreter::OPNODE) {
    operation = name;
    for (auto& kid: kids) this->kids.push_back(kid);
}

Interpreter::VariableOperationNode::VariableOperationNode(varType vType, varOperName vopName, std::string name, Interpreter::Node* data): vType(vType), vopType(vopName), varName(name) {
    scalarData = data;
}

Interpreter::VariableOperationNode::VariableOperationNode(varType vType, varOperName vopName, std::string name, std::vector<Interpreter::Node*> data, size_t size): vType(vType), vopType(vopName), vector_x(size), varName(name) {
    vectorData = data;
}

Interpreter::VariableOperationNode::VariableOperationNode(varType vType, varOperName vopName, std::string name, std::vector<std::vector<Interpreter::Node*>> data, size_t x, size_t y) {
    this->vType = vType;
    vopType = vopName;
    varName = name;
    matrix_x = x;
    matrix_y = y;
    matrixData.resize(x);
    for (size_t i = 0; i < x; i++) {
        matrixData[i].resize(y);
    }
    for (size_t i = 0; i < matrix_x; i++) {
        for (size_t j = 0; j < matrix_y; j++) {
            matrixData[i][j] = data[i][j];
        }
    }
}

void Interpreter::VariableOperationNode::print(std::ostringstream& strm) {}

int Interpreter::VariableOperationNode::execute() {
    if (vType == Interpreter::INT || vType == Interpreter::CINT) {
        Interpreter::IntegerNode* newNode = nullptr;
        if (scalarData->nType == Interpreter::OPNODE) {
            Interpreter::OperationNode* tmp = dynamic_cast<Interpreter::OperationNode*>(scalarData);
            switch (tmp->getOperation())
            {
            case plus: case minus: case divide: case multiply: {
                newNode = new Interpreter::IntegerNode(decimal, std::to_string(scalarData->execute()));
                break;
            }

            default:
                throw "Can't declare variable by this expression!";
            }
        }
        else if (scalarData->nType == INTNODE) {
            Interpreter::IntegerNode* tmp = dynamic_cast<Interpreter::IntegerNode*>(scalarData);
            newNode = tmp;
        }
        else {
            throw "Incorrect declaration!";
        }
        if (varStorage.find(varName) != varStorage.end()) std::free(varStorage[varName]);
        varStorage.insert_or_assign(varName, newNode);
    }
    else if (vType == Interpreter::BOOL || vType == Interpreter::CBOOL) {
        Interpreter::BoolNode* newNode = nullptr;
        if (scalarData->nType == Interpreter::OPNODE) {
            Interpreter::OperationNode* tmp = dynamic_cast<Interpreter::OperationNode*>(scalarData);
            switch (tmp->getOperation())
            {
            case less: case greater: case denial: { //and more and more and more
                newNode = new Interpreter::BoolNode(scalarData->execute() ? std::string("true") : std::string("false"));
                break;
            } 

            default:
                throw "Can't declare variable by this expression!";
            }
        }
        else if (scalarData->nType == BOOLNODE) {
            Interpreter::BoolNode* tmp = dynamic_cast<Interpreter::BoolNode*>(scalarData);
            newNode = tmp;
        }
        else {
            throw "Incorrect declaration!";
        }
        if (varStorage.find(varName) != varStorage.end()) std::free(varStorage[varName]);
        varStorage.insert_or_assign(varName, newNode);
    }
    return 0;
}