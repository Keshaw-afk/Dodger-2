cmake_minimum_required(VERSION 3.31)
project(dodger)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.6 COMPONENTS graphics window system REQUIRED)

add_executable(dodger
        main.cpp
        include/Utilities/include/Button.h
        include/Utilities/src/Button.cpp
        include/Menu.h
        include/Utilities/include/Logger.h
        include/PlayButton.h
        src/PlayButton.cpp
        tests/PlayButtonTest.cpp
        tests/PlayButtonTest.h
)


target_include_directories(dodger PRIVATE
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/include/Utilities/include
)

target_link_libraries(dodger PRIVATE sfml-graphics sfml-window sfml-system)


