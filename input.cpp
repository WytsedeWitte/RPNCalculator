#include <iostream>
#include <sstream>
#include "input.h"

namespace rpn {
    std::string input::getInput() {
        text = "";

        std::cout << "Type your expression:" << std::endl;
        while (getline(std::cin, line)) {
            if (line.empty()) {
                hasInput(false);
                //std::cout << "No input found. " << std::endl << "Type your expression:" << std::endl;
                text = "";
            } else {
                hasInput(true);
                text = line;
            }
            return text;
        }
        return text;
    }

    bool input::hasInput(bool in) {
        return in;
    }
}