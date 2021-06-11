#include <iostream>
#include <utility>
#include <sstream>
#include "parser.h"
#include "input.h"
#include "view.h"
#include "calculator.h"

namespace rpn {
    parser::parser() = default;

    parser::parser(const std::vector<std::string> &operators) {

    }

    bool parser::canParse(const std::string &expression) {
        for (char i : expression)
            if (isdigit(i) == false) {
                std::string test;
                test = i;
                if(test == "+"){
                    return true;
                }
                if(test == "h"){
                    return true;
                }
                if(test == "q"){
                    return true;
                }
                return false; //when one non numeric value is found, return false//
            }
        return true;
    }

    std::vector<std::string> parser::parse(const std::string &stack) {
        std::istringstream iss { stack };
        std::string token;
        while (iss >> token) {
            if(canParse(token)){
                std::cout << "Token: " << token << std::endl;
                inputStack.push_back(token);
            }
        }
        if (!canParse(token)) {
            throw "Input is not a numeral";
            // custom error
        }
        return inputStack;
    }
}
