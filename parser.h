#ifndef EXAMASSIGNMENT_PARSER_H
#define EXAMASSIGNMENT_PARSER_H

#include <stack>          // std::stack
#include <vector>         // std::vector
#include <string>         // std::string

namespace rpn {
    class parser {
    public:
        parser(/*vector met operations van RPNcalculator */);
        bool canParse(std::string expression);
        std::stack<std::string> parse(std::string expression);

    private:
        std::string expression;
        std::vector<std::string> supportedOps;
        std::stack<std::string> stack;
    };
}


#endif //EXAMASSIGNMENT_PARSER_H
