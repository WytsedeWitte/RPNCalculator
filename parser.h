#ifndef EXAMASSIGNMENT_PARSER_H
#define EXAMASSIGNMENT_PARSER_H

#include <stack>          // std::stack
#include <vector>         // std::vector
#include <string>         // std::string

namespace rpn {
    class parser {
    public:
        explicit parser(std::vector<std::string>  expression);
        bool canParse(const std::string& expression);
        std::vector<std::string> parse(const std::string& expression);

    private:
        std::vector<std::string> supportedOps;
    };
}


#endif //EXAMASSIGNMENT_PARSER_H
