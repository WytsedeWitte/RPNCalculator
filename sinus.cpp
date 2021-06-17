#include "sinus.h"
#include <cmath>
#include <iostream>

namespace rpn {
    rpn::sinus::sinus() {
        this->getDesc = "calculates the sinus of the operand";
        this->getOp = "sin";
    }
    bool rpn::sinus::isBinary() const {
        return false;
    }
    double sinus::execute(double val1) const {
        double value;
        value = 0;
        value = sin(val1);
        std::cout << value << std::endl;
        return value;
    }
    double sinus::execute(double val1, double val2) const {
        return 0;
    }

    std::string sinus::getDescription() const {
        return operation::getDescription();
    }

    std::string sinus::getOperator() const {
        return operation::getOperator();
    }
}
