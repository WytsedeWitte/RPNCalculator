#include <algorithm>
#include <iostream>
#include "RPNcalculator.h"

namespace rpn {
    bool RPNcalculator::addOperation(const operation &operation) {
        for (auto i : operations) {
            if (i->getOperator() == operation.getOperator()) {
                return false;
            }
        }
        operations.push_back(&operation);
        return true;
    }

    bool RPNcalculator::removeOperation(const std::string &operation) {
        for (auto i : operations) {
            if (i->getOperator() == operation) {
                operations.clear();
                return true;
            }
        }
        return false;
    }

    bool RPNcalculator::supportsOperation(const std::string &operation) {
        for (auto i : operations) {
            if (i->getOperator() == operation) {
                return true;
            }
            return false;
        }
        return false;
    }

    double RPNcalculator::execute(const std::vector<std::string> &expression) {
        std::string op = expression.back();
        const rpn::operation* operationClass = nullptr;

        for(auto &op_match : operations) {
            if(op_match->getOperator() == op) {
                if(op_match->isBinary() && expression.size() < 3) {
                    // Error.
                    return 0.0;
                }

                if(!op_match->isBinary() && expression.size() > 2) {
                    // Error
                    return 0.0;
                }
                operationClass = op_match;
                break;
            }
        }

        if(operationClass == nullptr) {
            // No operation found.
            return 0.0;
        }

        double a = std::stod(expression.front());

        if(operationClass->isBinary()) {
            return operationClass->execute(a);
        } else {
            double b = std::stod(expression.at(1));
            return operationClass->execute(a, b);
        }
    }

    std::vector<std::string> RPNcalculator::getOperationsInfo() {
        for (auto &element : operations) {
            opInfo.push_back(element->getDescription());
        }
        return opInfo;
    }

    std::vector<std::string> RPNcalculator::getOperators() {
        for (auto &element : operations) {
            operators.push_back(element->getOperator());
        }
        return operators;
    }
}
