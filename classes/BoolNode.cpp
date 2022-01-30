#include "BoolNode.h"

void Interpreter::BoolNode::print(std::ostringstream& strm) {
    strm << (data ? "true" : "false") << '\n';
}