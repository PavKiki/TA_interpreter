#include "Node.h"
#include "IntegerNode.h"
#include "BoolNode.h"
#include "OperationNode.h"

std::unordered_map<std::string, Interpreter::Node*> Interpreter::varStorage;
std::unordered_map<std::string, bool> Interpreter::isConst;
std::ostringstream Interpreter::out;

Interpreter::Node::Node() {
    nType = Interpreter::ABSTRACTNODE;
}

Interpreter::Node::Node(Interpreter::nodeType ttype) {
    nType = ttype;
}

void Interpreter::ContainerVectorNode::getVector(std::vector<Interpreter::Node*>& dest) {
    for (auto& node: data) {
        dest.push_back(node);
    }
}

int Interpreter::ContainerVectorNode::execute() {
    if (vecOperType == vnothing) return 0;
    switch (vecOperType) {
        case velemmultiply: {
            kids[0]->execute();
            kids[1]->execute();
            if (kids[0]->getSize() != kids[1]->getSize()) throw "Mismatch in vector sizes!";
            for (size_t i = 0; i < kids[0]->getSize(); i++) {
                if (Interpreter::suitForArithm((*kids[0])[i]) && Interpreter::suitForArithm((*kids[1])[i])) {
                    auto newNode = new Interpreter::IntegerNode(decimal, std::to_string((*kids[0])[i]->execute() * (*kids[1])[i]->execute()));
                    data.push_back(newNode);
                    x++;
                }
                else throw "Type mismatch!";
            }
            break;
        }
        case vcycshiftright: {
            kids[0]->execute();
            std::vector<Interpreter::Node*> vec;
            kids[0]->getVector(vec);
            auto tmp = vec[vec.size()-1];
            for (size_t i = vec.size() - 1; i > 0; i--) {
                vec[i] = vec[i-1];
            }
            vec[0] = tmp;
            x = vec.size();
            data = vec;
            break;
        }
        case vcycshiftleft: {
            kids[0]->execute();
            std::vector<Interpreter::Node*> vec;
            kids[0]->getVector(vec);
            auto tmp = vec[0];
            for (size_t i = 0; i < vec.size() - 1; i++) {
                vec[i] = vec[i+1];
            }
            vec[vec.size()-1] = tmp;
            x = vec.size();
            data = vec;
            break;
        }
        case VEMexpr: {
            kids[0]->execute();
            std::vector<Interpreter::Node*> vec;
            kids[0]->getVector(vec);
            Interpreter::Node* multiplier = dynamic_cast<Interpreter::Node*>(kids[1]);
            for (size_t i = 0; i < vec.size(); i++) {
                if (Interpreter::suitForArithm(vec[i]) && Interpreter::suitForArithm(multiplier)) {
                    auto tmp = new Interpreter::IntegerNode(decimal, std::to_string(vec[i]->execute() * multiplier->execute()));
                    data.push_back(tmp);
                    x++;
                }
                else throw "Type mismatch!";
            }
            break;
        }
        default:
            throw "Incorrect operation type!";
    }
    vecOperType = vnothing;
    return 0;
}

void Interpreter::AbstractVectorNode::print(std::ostringstream& strm) {
    size_t count = 0;
    strm << "{";
    for (auto& elem: data) {
        std::ostringstream tmp;
        elem->print(tmp);
        std::string ttmp = tmp.str();
        ttmp.pop_back();
        strm << ttmp;
        if ((count++ + 1) < size) strm << ", ";
    }
    strm << "}\n";
}

Interpreter::Node* Interpreter::AbstractVectorNode::copy() {
    std::vector<Interpreter::Node*> tmp;
    for (auto& node: data) {
        if (nType == Interpreter::INTVECNODE) tmp.push_back(dynamic_cast<Interpreter::IntegerNode*>(node)->copy());
        else if (nType == Interpreter::BOOLVECNODE) tmp.push_back(dynamic_cast<Interpreter::BoolNode*>(node)->copy());
        else throw "Incorrect vector type!";
    }
    Interpreter::Node* ttmp = new Interpreter::AbstractVectorNode(nType, tmp, size);
    return ttmp;
}

void Interpreter::ContainerMatrixNode::addData(Interpreter::ContainerVectorNode* dat) {
    if (dat->getSize() != this->getSizeY()) throw "Matrix can be only rectangular!";
    data.push_back(dat);
} 

void Interpreter::ContainerMatrixNode::getMatrix(std::vector<Interpreter::ContainerVectorNode*>& dat) {
    for (auto& row: data) {
        dat.push_back(row);
    }
}

int Interpreter::ContainerMatrixNode::execute() {
    if (matOperType == mnothing) return 0;
    switch (matOperType)
    {
    case mmultiply: {
        kids[0]->execute();
        kids[1]->execute();
        if (kids[0]->getSizeY() != kids[1]->getSizeX()) throw "Mismatch of matix dimension!";
        size_t resX = kids[0]->getSizeX();
        size_t resY = kids[1]->getSizeY();
        std::vector<Interpreter::ContainerVectorNode*> mat1;
        kids[0]->getMatrix(mat1);
        std::vector<Interpreter::ContainerVectorNode*> mat2;
        kids[1]->getMatrix(mat2);
        x = resX;
        y = resY;

        Interpreter::ContainerVectorNode tmp1, tmp2;
        for (size_t i = 0; i < resX; i++) {
            Interpreter::ContainerVectorNode* newRow = new Interpreter::ContainerVectorNode();
            tmp1 = *(mat1[i]);
            for (size_t j = 0; j < resY; j++) {
                int res = 0;
                for (size_t k = 0; k < kids[1]->getSizeY(); k++) {
                    tmp2 = *(mat2[k]);
                    if (Interpreter::suitForArithm(tmp1[k]) && Interpreter::suitForArithm(tmp2[j])) {
                        res += tmp1[k]->execute() * tmp2[j]->execute();
                    }
                    else throw "Type mismatch!";
                }
                auto resNode = new Interpreter::IntegerNode(decimal, std::to_string(res));
                newRow->addData(resNode);
            }
            this->addData(newRow);
        }
        break;
    }
    case melemmultiply: {
        kids[0]->execute();
        kids[1]->execute();
        if (kids[0]->getSizeX() != kids[1]->getSizeX() || kids[0]->getSizeY() != kids[1]->getSizeY()) throw "Mismatch of matix dimension!";
        size_t resX = kids[0]->getSizeX();
        size_t resY = kids[1]->getSizeY();
        std::vector<Interpreter::ContainerVectorNode*> mat1;
        kids[0]->getMatrix(mat1);
        std::vector<Interpreter::ContainerVectorNode*> mat2;
        kids[1]->getMatrix(mat2);
        x = resX;
        y = resY;

        Interpreter::ContainerVectorNode tmp1, tmp2;
        for (size_t i = 0; i < resX; i++) {
            Interpreter::ContainerVectorNode* newRow = new Interpreter::ContainerVectorNode();
            tmp1 = *(mat1[i]);
            tmp2 = *(mat2[i]);
            for (size_t j = 0; j < resY; j++) {
                int res;
                if (Interpreter::suitForArithm(tmp1[j]) && Interpreter::suitForArithm(tmp2[j])) {
                    res = tmp1[j]->execute() * tmp2[j]->execute();
                }
                else throw "Type mismatch!";
                auto resNode = new Interpreter::IntegerNode(decimal, std::to_string(res));
                newRow->addData(resNode);
            }
            this->addData(newRow);
        }
        break;
    }
    case mtransposition: {
        kids[0]->execute();
        size_t resX = kids[0]->getSizeY();
        size_t resY = kids[0]->getSizeX();
        std::vector<Interpreter::ContainerVectorNode*> mat1;
        kids[0]->getMatrix(mat1);
        x = resX;
        y = resY;

        Interpreter::ContainerVectorNode tmp;
        for (size_t j = 0; j < resX; j++) {
            Interpreter::ContainerVectorNode* newRow = new Interpreter::ContainerVectorNode();
            for (size_t i = 0; i < resY; i++) {
                tmp = *(mat1[i]);
                int res = tmp[j]->execute();
                Interpreter::Node* resNode;
                if (tmp[j]->nType == Interpreter::BOOLNODE) {
                    resNode = new Interpreter::BoolNode(res ? "true" : "false");
                }
                else if (tmp[j]->nType == Interpreter::INTNODE) {
                    resNode = new Interpreter::IntegerNode(decimal, std::to_string(res));
                }
                else throw "Invalid node type!";
                newRow->addData(resNode);
            }
            this->addData(newRow);
        }
        break;
    }
    case mcycshiftright: {
        kids[0]->execute();
        size_t resX = kids[0]->getSizeX();
        size_t resY = kids[0]->getSizeY();
        std::vector<Interpreter::ContainerVectorNode*> mat1;
        kids[0]->getMatrix(mat1);
        x = resX;
        y = resY;
        for (size_t i = 0; i < x; i++) {
            std::vector<Interpreter::ContainerVectorNode*> vkids;
            vkids.push_back(mat1[i]);
            auto newRow = new Interpreter::ContainerVectorNode(vkids, vcycshiftright);
            newRow->execute();
            this->addData(newRow);
        }
        break;
    }
    case mcycshiftleft: {
        kids[0]->execute();
        size_t resX = kids[0]->getSizeX();
        size_t resY = kids[0]->getSizeY();
        std::vector<Interpreter::ContainerVectorNode*> mat1;
        kids[0]->getMatrix(mat1);
        x = resX;
        y = resY;
        for (size_t i = 0; i < x; i++) {
            std::vector<Interpreter::ContainerVectorNode*> vkids;
            vkids.push_back(mat1[i]);
            auto newRow = new Interpreter::ContainerVectorNode(vkids, vcycshiftleft);
            newRow->execute();
            this->addData(newRow);
        }
        break;
    }
    case MEMexpr: {
        kids[0]->execute();
        size_t resX = kids[0]->getSizeX();
        size_t resY = kids[0]->getSizeY();
        std::vector<Interpreter::ContainerVectorNode*> mat1;
        kids[0]->getMatrix(mat1);
        x = resX;
        y = resY;
        Interpreter::Node* tmp = kids[1];
        for (size_t i = 0; i < x; i++) {
            std::vector<Interpreter::ContainerVectorNode*> vkids;
            vkids.push_back(mat1[i]);
            vkids.push_back(static_cast<Interpreter::ContainerVectorNode*>(tmp));
            auto newRow = new Interpreter::ContainerVectorNode(vkids, VEMexpr);
            newRow->execute();
            this->addData(newRow);
        }
        break;
    }
    case MEMvec: {
        kids[0]->execute();
        size_t resX = kids[0]->getSizeX();
        size_t resY = kids[0]->getSizeY();
        std::vector<Interpreter::ContainerVectorNode*> mat1;
        kids[0]->getMatrix(mat1);
        x = resX;
        y = resY;
        Interpreter::ContainerVectorNode* tmp = static_cast<Interpreter::ContainerVectorNode*>((Node*)(kids[1]));
        if (tmp->getSize() != y) throw "Size mismatch!";
        for (size_t i = 0; i < x; i++) {
            std::vector<Interpreter::ContainerVectorNode*> vkids;
            vkids.push_back(mat1[i]);
            vkids.push_back(static_cast<Interpreter::ContainerVectorNode*>(tmp));
            auto newRow = new Interpreter::ContainerVectorNode(vkids, velemmultiply);
            newRow->execute();
            this->addData(newRow);
        }
        break;
    }
    default:
        throw "Invalid operation type!";
        break;
    }
    matOperType = mnothing;
    return 0;
}

Interpreter::ContainerMatrixNode::ContainerMatrixNode(std::vector<AbstractVectorNode*>& dat, size_t xx, size_t yy): Node(Interpreter::CONMATNODE), x(xx), y(yy), matOperType(mnothing) {
    for (auto& row: dat) {
        Interpreter::ContainerVectorNode* tmp = new Interpreter::ContainerVectorNode(row->getData(), row->getSize());
        data.push_back(tmp);
    }
    x = data.size();
    y = data[0]->getSize();
}

Interpreter::AbstractMatrixNode::~AbstractMatrixNode() {
    for (auto& row: data) {
        free(row);   
    }
}

void Interpreter::AbstractMatrixNode::print(std::ostringstream& strm) {
    strm << "{";
    std::ostringstream tmp;
    for (auto& row: data) row->print(tmp);
    std::string ttmp = tmp.str();
    ttmp.pop_back();
    strm << ttmp << "}\n";
}

Interpreter::Node* Interpreter::AbstractMatrixNode::copy() {
    std::vector<AbstractVectorNode*> tmp;
    for (auto& row: data) {
        tmp.push_back(dynamic_cast<Interpreter::AbstractVectorNode*>(dynamic_cast<Interpreter::AbstractVectorNode*>(row)->copy()));
    }
    Interpreter::Node* ttmp = new Interpreter::AbstractMatrixNode(nType, tmp, x, y);
    return ttmp;
}