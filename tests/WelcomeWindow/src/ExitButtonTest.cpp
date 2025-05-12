//
// Created by graduate on 11/05/25.
//
#include "ExitButtonTest.h"

#include "constants.h"
#include "Logger.h"

void testExitButton()
{
    sf::RenderWindow window(sf::VideoMode(window_size), "ExitButton test");
    ExitButton exitButton(ExitButtonTextureSource, sf::IntRect(IntRectExitButton));
    exitButton.setPosition(ExitButtonPosition);
    exitButton.setSize(ExitButtonSize);
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
        window.draw(exitButton);
        window.display();
    }

}
