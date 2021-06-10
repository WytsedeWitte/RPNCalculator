#include <iostream>
#include <cmath>
#include "squareroot.h"

namespace rpn{
    bool rpn::squareroot::isBinary() const {
        return false;
    }

    std::string squareroot::getOperator() const {
        return "sqrt";
    }
    std::string squareroot::getDescription() const {
        return "calculates the square root of the operand";
    }
    double squareroot::execute(double val1) const{
        double value;
        value = 0;
        value = sqrt(val1);
        std::cout << value << std::endl;
        return value;
    }
}