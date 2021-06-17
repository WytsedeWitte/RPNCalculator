#include <iostream>
#include <utility>
#include <vector>
#include "view.h"

namespace rpn {
    view::view(std::vector<std::string> operators) : opsList(std::move(operators)) {

    }

    void view::showOptions(){
        for(const auto& i : opsList){
            std::cout << i << std::endl;
        }
    }
    void view::showResult(const std::string& result) {
        if (result == "q") {
            std::cout << "Calculator is quitting. Goodbye" << std::endl;
            exit(0);
        }
        if (result == "h") {
            showOptions();
        }
        if (result.empty()) {
            std::cout << "No input found." << std::endl;
        }
        if (!result.empty()){
            std::cout << "The result is: " << result << std::endl;
        }
    }


}