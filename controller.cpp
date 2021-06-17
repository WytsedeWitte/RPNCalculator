#include "controller.h"

namespace rpn {
    controller::controller(input& in,calculator& calc, parser& pars, view& view)
        : m_input{ &in },  m_parser{ &pars}, m_calc{ &calc},m_view{ &view}
        {
    }

    [[noreturn]] void controller::run() {
        for(;;){
            auto inputText = m_input->getInput();
            auto operands = m_parser->parse(inputText);
            if (inputText == "h" || inputText == "q" || inputText.empty()){
                m_view->showResult((inputText));
            }else{
                double outcome = m_calc->execute(operands);
                m_view->showResult(std::to_string(outcome));
            }

        }
    }
}

