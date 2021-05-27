#include <iostream>
#include <utility>
#include "parser.h"
#include "input.h"

namespace rpn {
    parser::parser() = default;

    bool parser::canParse(std::string expression ){
        std::cout << expression << std::endl;

        return false;
    }

    std::stack<std::string> parser::parse(std::string stack) {
        auto v_stack = stack;

        return iets;
    }
}