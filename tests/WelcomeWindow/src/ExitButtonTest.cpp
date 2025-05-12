//
// Created by graduate on 11/05/25.
//
#include "ExitButtonTest.h"
#include "Logger.h"

void testExitButton()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "PlayButton test");
    ExitButton exitButton("assets/MenuForeground.png", sf::IntRect{100, 240, 155, 70});
    exitButton.setPosition({400, 600});
    exitButton.setSize({200, 200});
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
