#ifndef EXAMASSIGNMENT_COSINE_H
#define EXAMASSIGNMENT_COSINE_H

#include "operation.h"

namespace rpn {
    class cosine : public operation {
    public:
        cosine();
        std::string getOperator() const override;
        std::string getDescription() const override;
        double execute(double val1) const override;
        double execute(double val1, double val2) const override;
        bool isBinary() const override;
    };
}


#endif //EXAMASSIGNMENT_COSINE_H
