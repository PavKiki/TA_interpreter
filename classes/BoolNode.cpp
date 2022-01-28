#include "BoolNode.h"

void Interpreter::BoolNode::print(std::stringstream& strm) {
    strm << data ? "true" : "false";
}