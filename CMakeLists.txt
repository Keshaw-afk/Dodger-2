cmake_minimum_required(VERSION 3.20)
project(dodger)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# SFML
find_package(SFML 2.6 REQUIRED COMPONENTS graphics window system)

# Main executable
add_executable(dodger
        main.cpp

        # Source files
        src/WelcomeWindow/PlayButton.cpp
        src/WelcomeWindow/ExitButton.cpp
        src/WelcomeWindow/Menu.cpp
        src/WelcomeWindow/WelcomeWindow.cpp

        include/Utilities/src/Button.cpp

        # Test files
        tests/WelcomeWindow/src/PlayButtonTest.cpp
        tests/WelcomeWindow/src/ExitButtonTest.cpp
        tests/WelcomeWindow/src/MenuTest.cpp
        tests/WelcomeWindow/include/WelcomeWindowTest.h
        tests/WelcomeWindow/src/WelcomeWindowTest.cpp
)

# Include directories
target_include_directories(dodger PRIVATE
        ${CMAKE_SOURCE_DIR}/include              # for WelcomeWindow and Utilities
        ${CMAKE_SOURCE_DIR}/include/Utilities/include
        ${CMAKE_SOURCE_DIR}/tests/WelcomeWindow/include
)

# Link SFML
target_link_libraries(dodger PRIVATE sfml-graphics sfml-window sfml-system)



