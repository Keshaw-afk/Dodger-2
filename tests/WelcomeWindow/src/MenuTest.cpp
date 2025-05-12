//
// Created by graduate on 12/05/25.
//

#include "MenuTest.h"
#include "Logger.h"
#include "constants.h"

void testMenu()
{
    sf::RenderWindow window(sf::VideoMode(window_size), "Menu test");
    Menu menu(MenuTextureSource, sf::IntRect(IntRectMenu));
    menu.setPosition(MenuPosition);
    menu.setSize(window_size);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear();
        window.draw(menu);
        window.display();
    }
}

