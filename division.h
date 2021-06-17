#ifndef EXAMASSIGNMENT_DIVISION_H
#define EXAMASSIGNMENT_DIVISION_H

#include "operation.h"

namespace rpn {
    class division : public operation {
    public:
        division();
        std::string getOperator() const override;
        std::string getDescription() const override;
        double execute(double val1) const override;
        double execute(double val1, double val2) const override;
        bool isBinary() const override;
    };
}

#endif //EXAMASSIGNMENT_DIVISION_H
