#ifndef EXAMASSIGNMENT_ADDITION_H
#define EXAMASSIGNMENT_ADDITION_H

#include "operation.h"

namespace rpn {
    class addition : public operation {
    public:
        addition();
        std::string getOperator() const override;
        std::string getDescription() const override;
        double execute(double val1, double val2) const override;
        bool isBinary() const override;

        double execute(double val1) const;
    };
}


#endif //EXAMASSIGNMENT_ADDITION_H
