#ifndef EXAMASSIGNMENT_ADDITION_H
#define EXAMASSIGNMENT_ADDITION_H

#include "operation.h"

namespace rpn {
    class addition : public operation {
    public:
        std::string getOperator() override;
        std::string getDescription() override;
        double execute(double val1, double val2) override;

    private:
        std::string getOp;
        std::string getDesc;
        double value;
    };
}


#endif //EXAMASSIGNMENT_ADDITION_H
