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
        return calculator::execute(expression);
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
