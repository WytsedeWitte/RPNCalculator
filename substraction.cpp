#include <iostream>
#include "substraction.h"

namespace rpn {
    rpn::substraction::substraction() {
        this->getDesc = "performs the subtraction of two operands";
        this->getOp = "-";
    }
    bool rpn::substraction::isBinary() const {
        return true;
    }
    double substraction::execute(double val1) const {
        return 0;
    }
    double substraction::execute(double val1, double val2) const {
        double value;
        value = 0;
        value = val1 - val2;
        std::cout << value << std::endl;
        return value;
    }

    std::string substraction::getDescription() const {
        return operation::getDescription();
    }

    std::string substraction::getOperator() const {
        return operation::getOperator();
    }
}
