cmake_minimum_required(VERSION 3.31)
project(dodger)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.6 COMPONENTS graphics window system REQUIRED)

add_executable(dodger
        main.cpp
        include/Utilities/src/Button.cpp
        src/WelcomeWindow/PlayButton.cpp
        src/WelcomeWindow/ExitButton.cpp
        tests/WelcomeWindow/src/PlayButtonTest.cpp
        tests/WelcomeWindow/src/ExitButtonTest.cpp
)


target_include_directories(dodger PRIVATE
        ${CMAKE_SOURCE_DIR}/include/WelcomeWindow
        ${CMAKE_SOURCE_DIR}/include/Utilities/include
        ${CMAKE_SOURCE_DIR}/tests/WelcomeWindow/include
)

target_link_libraries(dodger PRIVATE sfml-graphics sfml-window sfml-system)


