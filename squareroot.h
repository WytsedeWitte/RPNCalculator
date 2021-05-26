#ifndef EXAMASSIGNMENT_SQUAREROOT_H
#define EXAMASSIGNMENT_SQUAREROOT_H
#include "operation.h"

namespace rpn {
    class squareroot : public operation {
    public:
        std::string getOperator() override;
        std::string getDescription() override;
        double execute(double val1) override;
        bool isBinary() override;

    private:
        std::string getOp;
        std::string getDesc;
        double value;


    };
}
#endif //EXAMASSIGNMENT_SQUAREROOT_H
