#include <iostream>
#include <cmath>
#include "squareroot.h"

namespace rpn{
    bool rpn::squareroot::isBinary() {
        return false;
    }

    std::string squareroot::getOperator() {
        getOp = "This operator is an addition";
        return getOp;
    }
    std::string squareroot::getDescription() {
        getDesc = "This is an addition";
        return getDesc;
    }
    double squareroot::execute(double val1) {
        value = 0;
        value = sqrt(val1);
        std::cout << value << std::endl;
        return value;
    }
}