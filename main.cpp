#include "controller.h"
#include "RPNcalculator.h"
#include "addition.h"

int main(int, const char **) {
    auto calc = rpn::RPNcalculator();
    calc.addOperation(rpn::addition());

    rpn::input input;
    rpn::parser parser;
    rpn::view view;

    auto control = rpn::controller(input, calc, parser, view);
    control.run();

}

