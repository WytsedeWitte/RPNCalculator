//
// Created by Wytse on 21/03/2021.
//

#ifndef EXAMASSIGNMENT_OPERATION_H
#define EXAMASSIGNMENT_OPERATION_H

#include <string>

namespace rpn {

    class operation {
    public:
        virtual bool isBinary() const;
        virtual std::string getOperator() const;
        virtual std::string getDescription() const;
        virtual double execute(double val1, double val2) const;
        virtual double execute(double val) const;
    private:
        std::string getOp;
        std::string getDesc;
    };
}

#endif //EXAMASSIGNMENT_OPERATION_H
