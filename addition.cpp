#include <iostream>
#include "addition.h"

namespace rpn {
    rpn::addition::addition() {
        this->getDesc = "performs addition of two operands";
        this->getOp = "+";
    }

    bool rpn::addition::isBinary() const {
        return true;
    }

    double addition::execute(double val1, double val2) const {
        double value;
        value = 0;
        value = val1 + val2;
        std::cout << value << std::endl;
        return value;
    }

}
