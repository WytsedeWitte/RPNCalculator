#include <algorithm>
#include <iostream>
#include "RPNcalculator.h"

namespace rpn{
    bool RPNcalculator::addOperation(const operation& operation) {
        if (std::find(operations.begin(), operations.end(),operation)!=operations.end()){
            std::cout << "Operation already exists in the list" << std::endl;
            return false;
        }
        else{
            operations.push_back(operation);
            std::cout << "Operation added to the list" << std::endl;
            return true;
        }
    }

    bool RPNcalculator::removeOperation(const std::string& operation) {
        if (std::find(operations.begin(), operations.end(),operation)!=operations.end()) {
            operations.erase(std::remove(operations.begin(), operations.end(), operation), operations.end());
            std::cout << "Operation: " << operation << "has been removed" << std::endl;
            return true;
        }
        else{
            std::cout << "Operation was not found" << std::endl;
            return false;
        }
    }
    bool RPNcalculator::supportsOperation(const std::string& operation) {
        if (std::find(operations.begin(), operations.end(),operation)!=operations.end()) {
            std::cout << "Operation:" << operation << "is supported" << std::endl;
            return true;
        }
    }

    double RPNcalculator::execute(const std::vector<std::string>& expression) {
        return calculator::execute(expression);
    }

    std::vector<std::string> RPNcalculator::getOperationsInfo() {
        for (auto& element : operations) {
            opInfo.push_back(element.getDescription());
        }
        return opInfo;
    }

    std::vector<std::string> RPNcalculator::getOperators() {
        for (auto& element : operations) {
            operators.push_back(element.getOperator());
        }
        return operators;
    }
}
