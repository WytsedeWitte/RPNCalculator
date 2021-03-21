//
// Created by Wytse on 25/02/2021.
//

#include <iostream>
#include <sstream>
#include "input.h"
namespace rpn {

    input::input() = default;

    void input::getInput() {
        std::string line;
        while (std::cin >> line){
            if(line == "q"){
                return;
            }else{
                correctInput(line);
            }
        }
    }

    bool input::correctInput(std::string input) {
        return true;
    }
}
