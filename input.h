//
// Created by Wytse on 25/02/2021.
//

#ifndef EXAMASSIGNMENT_INPUT_H
#define EXAMASSIGNMENT_INPUT_H

#include <string>

namespace rpn {

    class input {
    public:
        input();
        void getInput();
        bool correctInput(std::string input);

    };
}


#endif //EXAMASSIGNMENT_INPUT_H
