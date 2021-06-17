#ifndef EXAMASSIGNMENT_MULTIPLICATION_H
#define EXAMASSIGNMENT_MULTIPLICATION_H

#include "operation.h"

namespace rpn {
    class multiplication : public operation {
    public:
        multiplication();
        std::string getOperator() const override;
        std::string getDescription() const override;
        double execute(double val1) const override;
        double execute(double val1, double val2) const override;
        bool isBinary() const override;
    };
}


#endif //EXAMASSIGNMENT_MULTIPLICATION_H
