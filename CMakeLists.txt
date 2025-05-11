cmake_minimum_required(VERSION 3.31)
project(dodger)

set(CMAKE_CXX_STANDARD 20)

include_directories(include/Utilities/include)

add_executable(dodger main.cpp
        include/Utilities/include/Button.h
        include/Utilities/src/Button.cpp
        include/Menu.h
        include/Utilities/include/Logger.h)
