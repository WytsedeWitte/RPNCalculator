#include "logarithm.h"
#include <cmath>
#include <iostream>

namespace rpn {
    rpn::logarithm::logarithm() {
        this->getDesc = "calculates the logarithm of the operand";
        this->getOp = "log";
    }
    bool rpn::logarithm::isBinary() const {
        return false;
    }
    double logarithm::execute(double val1) const {
        double value;
        value = 0;
        value = log10(val1);
        std::cout << value << std::endl;
        return value;
    }
    double logarithm::execute(double val1, double val2) const {
        return 0;
    }

    std::string logarithm::getDescription() const {
        return operation::getDescription();
    }

    std::string logarithm::getOperator() const {
        return operation::getOperator();
    }
}
