#ifndef EXAMASSIGNMENT_CONTROLLER_H
#define EXAMASSIGNMENT_CONTROLLER_H

#include "calculator.h"
#include "parser.h"
#include "view.h"
#include "input.h"

namespace rpn {
    class controller {
    public:
        controller(input& in,calculator& calc, parser& pars, view& view);
        void run();

    private:
        input* m_input;
        parser* m_parser;
        calculator* m_calc;
        view* m_view;
    };

}
#endif //EXAMASSIGNMENT_CONTROLLER_H
