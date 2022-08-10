cmake_minimum_required(VERSION 3.21)
project(CPP_Module)

set(CMAKE_CXX_STANDARD 14)

include_directories(cpp00/ex01)

add_executable(CPP_Module
        cpp00/ex00/megaphone.cpp
        cpp00/ex01/Contact.cpp
        cpp00/ex01/Contact.hpp
        cpp00/ex01/main.cpp
        cpp00/ex01/PhoneBook.cpp
        cpp00/ex01/PhoneBook.hpp
        cpp00/test/bool.cpp
        cpp00/test/class.cpp
        cpp00/test/const.cpp
        cpp00/test/dest.cpp
        cpp00/test/scope.cpp
        cpp00/test/test.cpp)
