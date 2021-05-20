#include <iostream>
#include "addition.h"
#include "squareroot.h"


int main(int, const char **) {
    rpn::addition add;
    add.execute(3,5);
    rpn::squareroot sqrt;
    sqrt.execute(25);

}

