#ifndef EXAMASSIGNMENT_RPNCALCULATOR_H
#define EXAMASSIGNMENT_RPNCALCULATOR_H

#include <vector>
#include <memory>
#include "operation.h"
#include "calculator.h"

namespace rpn{
    class RPNcalculator : public calculator{
    public:
        bool addOperation(const operation& operation);
        bool removeOperation(const std::string& operation);
        double execute(const std::vector<std::string>& expression) override;
        bool supportsOperation(const std::string& operation);
        std::vector<std::string> getOperators();
        std::vector<std::string> getOperationsInfo();


            private:
        std::vector<const rpn::operation*> operations;
        std::vector<std::string> opInfo;
    };
}
#endif //EXAMASSIGNMENT_RPNCALCULATOR_H
