cmake_minimum_required(VERSION 3.17)
project(ExamAssignment)

set(CMAKE_CXX_STANDARD 17)

add_executable(ExamAssignment main.cpp input.cpp input.h view.cpp view.h controller.cpp controller.h parser.cpp parser.h calculator.cpp calculator.h RPNcalculator.cpp RPNcalculator.h operation.cpp operation.h addition.cpp addition.h squareroot.cpp squareroot.h)