#include <iostream>
#include "addition.h"

namespace rpn{
    bool rpn::addition::isBinary() {
        return true;
    }

    std::string addition::getOperator() {
        getOp = "This operator is an addition";
        return getOp;
    }
    std::string addition::getDescription() {
        getDesc = "This is an addition";
        return getDesc;
    }
    double addition::execute(double val1, double val2) {
        value = 0;
        value = val1 + val2;
        std::cout << value << std::endl;
        return value;
    }
}
