#include <iostream>
#include "view.h"

namespace rpn {

    void view::showResult(const std::string& result) {
        if (result == "q") {
            std::cout << "Calculator is quitting. Goodbye" << std::endl;
            exit(0);
        }
        if (result == "h") {
            showOptions();
        }
        if (result.empty()) {
            std::cout << "No input found. " << std::endl << "Type your expression:" << std::endl;
        }else{
            std::cout << "The result is: " << result << std::endl;
        }
    }

    void view::showOptions(std::string *) {

    }
}