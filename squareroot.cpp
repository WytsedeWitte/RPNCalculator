#include <iostream>
#include <cmath>
#include "squareroot.h"

namespace rpn{
    bool rpn::squareroot::isBinary() {
        return false;
    }

    std::string squareroot::getOperator() {
        getOp = "sqrt";
        return getOp;
    }
    std::string squareroot::getDescription() {
        getDesc = "calculates the square root of the operand";
        return getDesc;
    }
    double squareroot::execute(double val1) {
        value = 0;
        value = sqrt(val1);
        std::cout << value << std::endl;
        return value;
    }
}