#include "controller.h"
#include "input.h"
#include "view.h"
#include "parser.h"
#include "calculator.h"

namespace rpn {
    controller::controller(input& in,calculator& calc, parser& pars, view& view) {

    }

    void controller::run() {
        auto value = m_input->getInput();
        //m_parser->canParse(value);
        //m_calc->execute(expression);
        m_view->showResult(value);

    }


}

