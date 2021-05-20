//
// Created by Wytse on 21/03/2021.
//

#include "operation.h"
#include <string>

bool rpn::operation::isBinary() {
    return false;
}

std::string rpn::operation::getOperator() {
    return getOp;
}

std::string rpn::operation::getDescription() {
    return getDesc;
}

double rpn::operation::execute(double val1, double val2) {
    return 0;
}

double rpn::operation::execute(double val) {
    return 0;
}
