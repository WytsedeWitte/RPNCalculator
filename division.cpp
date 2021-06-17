#include <iostream>
#include "division.h"

namespace rpn {
    rpn::division::division() {
        this->getDesc = "performs the division of two operands";
        this->getOp = "/";
    }
    bool rpn::division::isBinary() const {
        return true;
    }
    double division::execute(double val1) const {
        return 0;
    }
    double division::execute(double val1, double val2) const {
        double value;
        value = 0;
        value = val1 / val2;
        std::cout << value << std::endl;
        return value;
    }

    std::string division::getDescription() const {
        return operation::getDescription();
    }

    std::string division::getOperator() const {
        return operation::getOperator();
    }
}
