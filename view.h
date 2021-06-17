#ifndef EXAMASSIGNMENT_VIEW_H
#define EXAMASSIGNMENT_VIEW_H

#include <string>

namespace rpn {
    class view {
    public:
        void showResult(const std::string& result);
        view(std::vector<std::string>  expression);
        void showOptions();

    private:
        std::vector<std::string> opsList;
    };
}


#endif //EXAMASSIGNMENT_VIEW_H
