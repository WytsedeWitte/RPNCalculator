#ifndef EXAMASSIGNMENT_LOGARITHM_H
#define EXAMASSIGNMENT_LOGARITHM_H

#include "operation.h"

namespace rpn {
    class logarithm : public operation {
    public:
        logarithm();
        std::string getOperator() const override;
        std::string getDescription() const override;
        double execute(double val1) const override;
        double execute(double val1, double val2) const override;
        bool isBinary() const override;
    };
}


#endif //EXAMASSIGNMENT_LOGARITHM_H
