//
// Created by graduate on 12/05/25.
//

#include "WelcomeWindowTest.h"
#include "SFML/Graphics.hpp"
#include "constants.h"
#include "Logger.h"

void testWelcomeWindow()
{
    WelcomeWindow welcome_window{};

    while (welcome_window.isOpen())
    {
        welcome_window.getRelevantEvents();
        welcome_window.clear();
        welcome_window.render();
        welcome_window.display();
    }

}