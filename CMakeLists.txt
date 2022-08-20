cmake_minimum_required(VERSION 3.21)
project(CPP_Module)

set(CMAKE_CXX_STANDARD 14)

include_directories(cpp00/ex01)
include_directories(cpp01/ex00)
include_directories(cpp01/ex01)
include_directories(cpp01/ex03)
include_directories(cpp01/ex04)
include_directories(cpp01/ex05)
include_directories(cpp02/ex00)
include_directories(cpp02/ex01)

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
        cpp01/ex00/Zombie.hpp
        cpp01/ex01/main.cpp
        cpp01/ex01/Zombie.cpp
        cpp01/ex01/Zombie.hpp
        cpp01/ex01/ZombieHorde.cpp
        cpp01/ex02/main.cpp
        cpp01/ex03/HumanA.cpp
        cpp01/ex03/HumanA.hpp
        cpp01/ex03/HumanB.cpp
        cpp01/ex03/HumanB.hpp
        cpp01/ex03/main.cpp
        cpp01/ex03/Weapon.cpp
        cpp01/ex03/Weapon.hpp
        cpp01/ex04/main.cpp
        cpp01/ex04/replace.cpp
        cpp01/ex04/replace.hpp
        cpp01/ex05/Harl.cpp
        cpp01/ex05/Harl.hpp
        cpp01/ex05/main.cpp
        cpp02/ex00/Fixed.cpp
        cpp02/ex00/Fixed.hpp
        cpp02/ex00/main.cpp
        cpp02/ex01/Fixed.cpp
        cpp02/ex01/Fixed.hpp
        cpp02/ex01/main.cpp)
