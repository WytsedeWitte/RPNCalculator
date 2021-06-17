#ifndef EXAMASSIGNMENT_SQUAREROOT_H
#define EXAMASSIGNMENT_SQUAREROOT_H
#include "operation.h"

namespace rpn {
    class squareroot : public operation {
    public:
        std::string getOperator() const override;
        std::string getDescription() const override;
        double execute(double val1) const override;
        double execute(double val1, double val2) const override;
        bool isBinary() const override;
    };
}
#endif //EXAMASSIGNMENT_SQUAREROOT_H
