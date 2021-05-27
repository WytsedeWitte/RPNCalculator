#include <iostream>
#include "view.h"

namespace rpn{

    void view::showResult(std::string result) {
        std::cout << "The result is: " << result << std::endl;
    }

    void view::showOptions(std::string *) {

    }
}