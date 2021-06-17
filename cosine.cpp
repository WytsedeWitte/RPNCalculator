#include "cosine.h"
#include <cmath>
#include <iostream>

namespace rpn {
    rpn::cosine::cosine() {
        this->getDesc = "calculates the cosine of the operand";
        this->getOp = "cos";
    }
    bool rpn::cosine::isBinary() const {
        return false;
    }
    double cosine::execute(double val1) const {
        double value;
        value = 0;
        value = cos(val1);
        std::cout << value << std::endl;
        return value;
    }
    double cosine::execute(double val1, double val2) const {
        return 0;
    }

    std::string cosine::getDescription() const {
        return operation::getDescription();
    }

    std::string cosine::getOperator() const {
        return operation::getOperator();
    }
}