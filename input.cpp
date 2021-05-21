#include <iostream>
#include <sstream>
#include "input.h"
namespace rpn {

    input::input() = default;

    std::string input::getInput() {
        std::cout << "Type your expression:" << std::endl;
        while (getline(std::cin, line)){
            if(line.empty()){
                hasInput(false);
                std::cout << "No input found. " << std::endl << "Type your expression:" << std::endl;
            }else{
                hasInput(true);
                text = line;
                std::cout << "Your expression: " << line << std::endl;
            }
        }
        return text;
    }

    bool input::hasInput(bool in) {
        return in;
    }
}
