//
// Created by Wytse on 21/03/2021.
//

#include "operation.h"
#include <string>

#if 0
bool rpn::operation::isBinary() const {
    return false;
}
#endif

std::string rpn::operation::getOperator() const {
    return getOp;
}

std::string rpn::operation::getDescription() const {
    return getDesc;
}

#if 0
double rpn::operation::execute(double val1, double val2) const {
    return 0;
}

double rpn::operation::execute(double val) const {
    return 0;
}
#endif