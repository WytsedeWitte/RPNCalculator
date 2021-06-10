#ifndef EXAMASSIGNMENT_INPUT_H
#define EXAMASSIGNMENT_INPUT_H

#include <string>

namespace rpn {

    class input {
    public:
        std::string getInput();
        static bool hasInput(bool in);

    private:
        std::string line;
        std::string text;
    };
}


#endif //EXAMASSIGNMENT_INPUT_H
