cmake_minimum_required(VERSION 3.17)
project(encapsulation_inclass_demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(EncapsulationDemo
        main.cpp
        Banana.h
        Banana.cpp
        Monkey.h
        Monkey.cpp
        )

add_executable( BananaTest
        tests/catch.hpp
        tests/BananaTest.cpp
        Banana.cpp
        Banana.h)


add_executable( MonkeyTest
        tests/catch.hpp
        tests/MonkeyTest.cpp
        Monkey.cpp
        Monkey.h
        Banana.cpp
        Banana.h)