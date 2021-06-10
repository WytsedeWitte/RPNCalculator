#include "controller.h"

namespace rpn {
    controller::controller(input& in,calculator& calc, parser& pars, view& view)
        : m_input{ &in },  m_parser{ &pars}, m_calc{ &calc},m_view{ &view}
        {
    }

    [[noreturn]] void controller::run() {
        for(;;){
            auto value = m_input->getInput();
            m_calc->execute(expression);
            m_parser->parse(value);
            m_view->showResult(value);
        }
    }
}

