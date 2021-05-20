//
// Created by Wytse on 21/03/2021.
//

#ifndef EXAMASSIGNMENT_CONTROLLER_H
#define EXAMASSIGNMENT_CONTROLLER_H

#include "calculator.h"
#include "parser.h"
#include "view.h"
#include "input.h"

namespace rpn {
    class controller {
    public:
        controller(rpn::calculator calc, rpn::parser pars, rpn::view view, rpn::input input);
        void run();
    };


}
#endif //EXAMASSIGNMENT_CONTROLLER_H
