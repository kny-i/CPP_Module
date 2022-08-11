cmake_minimum_required(VERSION 3.21)
project(CPP_Module)

set(CMAKE_CXX_STANDARD 14)

include_directories(cpp00/ex01)
include_directories(cpp01/ex00)

add_executable(CPP_Module
        cpp00/ex00/megaphone.cpp
        cpp00/ex01/Contact.cpp
        cpp00/ex01/Contact.hpp
        cpp00/ex01/main.cpp
        cpp00/ex01/PhoneBook.cpp
        cpp00/ex01/PhoneBook.hpp
        cpp01/ex00/main.cpp
        cpp01/ex00/newZombie.cpp
        cpp01/ex00/randomChump.cpp
        cpp01/ex00/Zombie.cpp
        cpp01/ex00/Zombie.hpp)
