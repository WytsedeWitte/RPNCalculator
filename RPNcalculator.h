#ifndef EXAMASSIGNMENT_RPNCALCULATOR_H
#define EXAMASSIGNMENT_RPNCALCULATOR_H

#include <vector>
#include "operation.h"
#include "calculator.h"

namespace rpn{
    class RPNcalculator : public calculator{
    public:
        RPNcalculator();
        bool addOperation(const operation& operation);
        bool removeOperation(const std::string& operation);
        double execute(const std::vector<std::string>& expression) override;
        bool supportsOperation(const std::string& operation);
        std::vector<std::string> getOperationsInfo() override;
        std::vector<std::string> getOperators();

    private:
        std::vector<rpn::operation> operations;
        std::vector<std::string> opInfo;
        std::vector<std::string> operators;
    };
}
#endif //EXAMASSIGNMENT_RPNCALCULATOR_H
