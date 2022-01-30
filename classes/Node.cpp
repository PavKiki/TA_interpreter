#include "Node.h"
#include "IntegerNode.h"
#include "BoolNode.h"

std::unordered_map<std::string, Interpreter::Node*> Interpreter::varStorage;
std::ostringstream Interpreter::out;

Interpreter::Node::Node() {
    nType = Interpreter::ABSTRACTNODE;
}

Interpreter::Node::Node(Interpreter::nodeType ttype) {
    nType = ttype;
}

//is this fuction needed after all these years?
// void Interpreter::variableScalarDistribution(VariableNode* node, Interpreter::varType type, std::string nodename, Node* data) {
//     switch (type) {
//         case Interpreter::INT:
//             node = new Interpreter::IntegerVariableNode(nodename, data->execute());
//             varStorage.insert_or_assign(nodename, node);
//     }
// }