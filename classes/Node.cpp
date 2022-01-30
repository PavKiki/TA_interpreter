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