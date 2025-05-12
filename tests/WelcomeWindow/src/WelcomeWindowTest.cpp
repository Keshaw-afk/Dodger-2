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

    while (welcome_window.get_render_window()->isOpen())
    {
        sf::Event event;
        while (welcome_window.get_render_window()->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                welcome_window.get_render_window()->close();
            }
        }
        welcome_window.get_render_window()->clear();
        welcome_window.render();
        welcome_window.get_render_window()->display();
    }

}