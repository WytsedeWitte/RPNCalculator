#include <memory>
#include "controller.h"
#include "RPNcalculator.h"
#include "addition.h"
#include "squareroot.h"
#include <iostream>

int main(int, const char **) {
    auto calc = rpn::RPNcalculator();
    calc.addOperation(rpn::addition());

    rpn::input input;
    rpn::calculator calculator;
    rpn::parser parser;
    rpn::view view;

    auto control = rpn::controller(input, calculator, parser, view);
    control.run();

}

