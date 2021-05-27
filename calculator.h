#ifndef EXAMASSIGNMENT_CALCULATOR_H
#define EXAMASSIGNMENT_CALCULATOR_H

#include <vector>
#include <string>
#include <stack>

namespace rpn {
    class calculator {
    public:
        virtual double execute(const std::vector<std::string>& expression);
        virtual std::vector<std::string> getOperationsInfo();

    private:
        std::stack<std::string> stack;
    };
}


#endif //EXAMASSIGNMENT_CALCULATOR_H
