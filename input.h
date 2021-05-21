#ifndef EXAMASSIGNMENT_INPUT_H
#define EXAMASSIGNMENT_INPUT_H

#include <string>

namespace rpn {

    class input {
    public:
        input();
        std::string getInput();
        static bool hasInput(bool in);

        std::string text;
    private:
        std::string line;
    };
}


#endif //EXAMASSIGNMENT_INPUT_H
