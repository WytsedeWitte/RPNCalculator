#ifndef EXAMASSIGNMENT_SINUS_H
#define EXAMASSIGNMENT_SINUS_H

#include "operation.h"

namespace rpn {
    class sinus : public operation {
    public:
        sinus();
        std::string getOperator() const override;
        std::string getDescription() const override;
        double execute(double val1) const override;
        double execute(double val1, double val2) const override;
        bool isBinary() const override;
    };
}


#endif //EXAMASSIGNMENT_SINUS_H
