#ifndef EXAMASSIGNMENT_CALCULATOR_H
#define EXAMASSIGNMENT_CALCULATOR_H

#include <vector>
#include <string>

namespace rpn {
    class calculator {
    public:
        virtual double execute(std::vector<std::string> expression);
        virtual std::vector<std::string> getOperationsInfo();

    private:
    };
}


#endif //EXAMASSIGNMENT_CALCULATOR_H
