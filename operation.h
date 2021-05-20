//
// Created by Wytse on 21/03/2021.
//

#ifndef EXAMASSIGNMENT_OPERATION_H
#define EXAMASSIGNMENT_OPERATION_H

#include <string>

namespace rpn {

    class operation {
    public:
        virtual bool isBinary();
        virtual std::string getOperator();
        virtual std::string getDescription();
        virtual double execute(double val1, double val2);
        virtual double execute(double val);

    private:
        std::string getOp;
        std::string getDesc;
    };
}

#endif //EXAMASSIGNMENT_OPERATION_H
