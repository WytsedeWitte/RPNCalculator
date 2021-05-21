#include "controller.h"
#include "input.h"
#include "view.h"
#include "parser.h"
#include "calculator.h"

namespace rpn {
    controller::controller() {


    }

    void controller::run() {
        rpn::input in;
        in.getInput();
    }


}

