#include "controller.h"
#include "RPNcalculator.h"
#include "addition.h"
#include "squareroot.h"
#include "substraction.h"
#include "multiplication.h"
#include "division.h"
#include "logarithm.h"
#include "sinus.h"
#include "cosine.h"

int main(int, const char **) {
    auto calc = rpn::RPNcalculator();
    //operations
    auto add = rpn::addition();
    auto sub = rpn::substraction();
    auto multi = rpn::multiplication();
    auto div = rpn::division();
    auto sqrt = rpn::squareroot();
    auto log = rpn::logarithm();
    auto sin = rpn::sinus();
    auto cos = rpn::cosine();
    // add the operations to the calculator
    calc.addOperation(add);
    calc.addOperation(sub);
    calc.addOperation(multi);
    calc.addOperation(div);
    calc.addOperation(sqrt);
    calc.addOperation(log);
    calc.addOperation(sin);
    calc.addOperation(cos);

    rpn::input input;
    rpn::parser parser(calc.getOperators());
    rpn::view view(calc.getOperationsInfo());

    auto control = rpn::controller(input, calc, parser, view);
    control.run();

}

