#include <iostream>
#include "multiplication.h"

namespace rpn {
    rpn::multiplication::multiplication() {
        this->getDesc = "performs the multiplication of two operands";
        this->getOp = "*";
    }
    bool rpn::multiplication::isBinary() const {
        return true;
    }
    double multiplication::execute(double val1) const {
        return 0;
    }
    double multiplication::execute(double val1, double val2) const {
        double value;
        value = 0;
        value = val1 * val2;
        std::cout << value << std::endl;
        return value;
    }

    std::string multiplication::getDescription() const {
        return operation::getDescription();
    }

    std::string multiplication::getOperator() const {
        return operation::getOperator();
    }
}
