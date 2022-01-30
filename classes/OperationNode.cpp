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
                case plus: case minus: case divide: case multiply: case uminus:
                    return true;

                default:
                    return false;
            }
        }

        default:
            return false;
    }
}

bool Interpreter::suitForLogic(Interpreter::Node* node) {
    switch (node->nType) {
        case Interpreter::BOOLNODE:
            return true;

        case Interpreter::OPNODE: {
            operName tmp = dynamic_cast<Interpreter::OperationNode*>(node)->getOperation();
            switch (tmp) {
                case less: case greater: case denial: case conjunction:
                    return true; 

                default:
                    return false;
            }
        }

        default:
            return false;
    }
}

void Interpreter::OperationNode::print(std::ostringstream& strm) {
    switch (operation)
    {
    case plus: case minus: case multiply: case divide:
        strm << execute() << '\n';
        break;
    case less: case greater: case denial: case conjunction:
        strm << (execute() ? "true" : "false") << '\n';
    
    default:
        break; 
    }
}

int Interpreter::OperationNode::execute() {
    switch (operation)
    {
    case uminus:
        if (!Interpreter::suitForArithm(kids[0])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            int tmp = kids[0]->execute();
            return -tmp;
        }
    case plus:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            int tmp = kids[0]->execute() + kids[1]->execute();
            return tmp;
        }

    case minus:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return kids[0]->execute() - kids[1]->execute();
        }

    case multiply:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return kids[0]->execute() * kids[1]->execute();
        }

    case divide:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return kids[0]->execute() / kids[1]->execute();
        }
    
    case less:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return (kids[0]->execute() < kids[1]->execute());
        }

    case greater:
        if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return (kids[0]->execute() > kids[1]->execute());
        }

    case denial:
        return !kids[0]->execute();

    case conjunction:
        if (!Interpreter::suitForLogic(kids[0]) || !Interpreter::suitForLogic(kids[1])) {
            throw "Semantic error! Wrong types of operands.";
        }
        else {
            return kids[0]->execute() * kids[1]->execute();
        }

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

std::vector<Interpreter::Node*> Interpreter::getVectorExprResult(Interpreter::varType type, std::vector<Interpreter::Node*>& src) {
    std::vector<Interpreter::Node*> dest;
    Interpreter::varType pattern = Interpreter::ABSTRACT;
    if (type == Interpreter::VINT || type == Interpreter::CVINT) pattern = Interpreter::INT;
    else if (type == Interpreter::VBOOL || type == Interpreter::CVBOOL) pattern = Interpreter::BOOL;
    for (auto& node: src) {
        Interpreter::Node* tmp = getScalarExprResult(pattern, node);
        dest.push_back(tmp);
    }
    return dest;
}

Interpreter::Node* Interpreter::getScalarExprResult(Interpreter::varType vType, Interpreter::Node* scalarData) {
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
        else if (scalarData->nType == Interpreter::INTNODE) {
            Interpreter::IntegerNode* tmp = dynamic_cast<Interpreter::IntegerNode*>(scalarData);
            newNode = tmp;
        }
        else {
            throw "Incorrect declaration!";
        }
        return newNode;
    }
    else if (vType == Interpreter::BOOL || vType == Interpreter::CBOOL) {
        Interpreter::BoolNode* newNode = nullptr;
        if (scalarData->nType == Interpreter::OPNODE) {
            Interpreter::OperationNode* tmp = dynamic_cast<Interpreter::OperationNode*>(scalarData);
            switch (tmp->getOperation())
            {
            case less: case greater: case denial: case conjunction: { //and more and more and more
                newNode = new Interpreter::BoolNode(scalarData->execute() ? std::string("true") : std::string("false"));
                break;
            } 

            default:
                throw "Can't declare variable by this expression!";
            }
        }
        else if (scalarData->nType == Interpreter::BOOLNODE) {
            Interpreter::BoolNode* tmp = dynamic_cast<Interpreter::BoolNode*>(scalarData);
            newNode = tmp;
        }
        else {
            throw "Incorrect declaration!";
        }
        return newNode;
    }
    else {
        throw "Wrong type!";
    }
    return nullptr;
}

void Interpreter::VariableOperationNode::print(std::ostringstream& strm) {}

int Interpreter::VariableOperationNode::execute() {
    if (vopType == declare) {
        Node* newNode = nullptr;
        switch (vType)
        {
        case Interpreter::INT: case Interpreter::BOOL:
            newNode = getScalarExprResult(vType, scalarData);
            isConst.insert_or_assign(varName, false);
            break;
        case Interpreter::CINT: case Interpreter::CBOOL:
            newNode = getScalarExprResult(vType, scalarData);
            isConst.insert_or_assign(varName, true);
            break;
        case Interpreter::VINT: case Interpreter::VBOOL:
            newNode = new Interpreter::IntegerVectorNode(getVectorExprResult(vType, vectorData), vector_x);
            isConst.insert_or_assign(varName, false);
            break;

        case Interpreter::CVBOOL: case Interpreter::CVINT: 
            newNode = new Interpreter::IntegerVectorNode(getVectorExprResult(vType, vectorData), vector_x);
            isConst.insert_or_assign(varName, true);
            break;
        
        case Interpreter::MINT: case Interpreter::CMINT: case Interpreter::MBOOL: case Interpreter::CMBOOL:

        default:
            throw "Invalid variable type!";
        }
        if (varStorage.find(varName) != varStorage.end()) std::free(varStorage[varName]);
        varStorage.insert_or_assign(varName, newNode);
    }
    else if (vopType == assign) {
        auto search = Interpreter::varStorage.find(varName);
        Node* newNode = nullptr;
        if (search->second->nType == Interpreter::INTNODE) {
            newNode = getScalarExprResult(Interpreter::INT, scalarData);
        }
        else if (search->second->nType == Interpreter::BOOLNODE) {
            newNode = getScalarExprResult(Interpreter::BOOL, scalarData);
        }
        else if (search->second->nType == Interpreter::INTVECNODE) {
            newNode = new Interpreter::IntegerVectorNode(getVectorExprResult(Interpreter::VINT, vectorData), vector_x);
        }
        else if (search->second->nType == Interpreter::BOOLVECNODE) {
            newNode = new Interpreter::IntegerVectorNode(getVectorExprResult(Interpreter::VBOOL, vectorData), vector_x);
        }
        else throw "Invalid variable type!";
        std::free(varStorage[varName]);
        varStorage.insert_or_assign(varName, newNode);
    }
    else throw "Invalid operation!";
    return 0;
}