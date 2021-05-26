#include <memory>
#include "controller.h"
#include "RPNcalculator.h"
#include "addition.h"
#include "squareroot.h"


int main(int, const char **) {
    //auto calc = rpn::RPNcalculator();

    rpn::input input;
    rpn::calculator calculator;
    rpn::parser parser;
    rpn::view view;

    rpn::controller control = rpn::controller(input, calculator, parser, view);
    control.run();

}

