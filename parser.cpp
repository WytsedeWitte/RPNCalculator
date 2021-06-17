#include <iostream>
#include <utility>
#include <sstream>
#include <algorithm>
#include <charconv>
#include "parser.h"
#include "input.h"
#include "view.h"
#include "calculator.h"

namespace rpn {
    parser::parser(std::vector<std::string> operators): supportedOps(std::move(operators)) {

    }

    bool parser::canParse(const std::string &token) {
        if(std::find(supportedOps.begin(), supportedOps.end(), token) != supportedOps.end()){
            return true;
        }
        if (token == "h" || token == "q" || token.empty()){
            return true;
        }
        try{
            double result = std::stod(token);
        }
        catch (std::invalid_argument&){
            return false;
        }
        return true;
    }

    std::vector<std::string> parser::parse(const std::string &stack) {
        std::vector<std::string> inputStack;

        std::istringstream iss { stack };
        std::string token;
        while (iss >> token) {
            if(canParse(token)){
                if (token == "h" || token == "q" || token.empty()){
                    return inputStack;
                } else{
                    inputStack.push_back(token);
                }
            }
        }
        if (!canParse(token)) {
            throw "Input is not a numeral";
            // custom error
        }
        return inputStack;
    }
}
