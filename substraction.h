#ifndef EXAMASSIGNMENT_SUBSTRACTION_H
#define EXAMASSIGNMENT_SUBSTRACTION_H

#include "operation.h"

namespace rpn {
    class substraction : public operation {
    public:
        substraction();
        std::string getOperator() const override;
        std::string getDescription() const override;
        double execute(double val1) const override;
        double execute(double val1, double val2) const override;
        bool isBinary() const override;
    };
}


#endif //EXAMASSIGNMENT_SUBSTRACTION_H
