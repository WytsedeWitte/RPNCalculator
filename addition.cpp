#include <iostream>
#include "addition.h"

namespace rpn{
    bool rpn::addition::isBinary() const {
        return true;
    }
    std::string addition::getOperator() const {
        std::string getOp;
        getOp = "+";
        return getOp;
    }
    std::string addition::getDescription() const {
        std::string getDesc;
        getDesc = "performs addition of two operands";
        return getDesc;
    }
    double addition::execute(double val1, double val2) const {
        double value;
        value = 0;
        value = val1 + val2;
        std::cout << value << std::endl;
        return value;
    }
}
