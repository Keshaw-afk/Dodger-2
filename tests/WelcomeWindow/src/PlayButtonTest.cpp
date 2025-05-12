//
// Created by graduate on 11/05/25.
//
#include "PlayButtonTest.h"

#include "Logger.h"

void testPlayButton()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "PlayButton test");
    PlayButton playButton("assets/MenuForeground.png", sf::IntRect{100, 50, 155, 70});
    playButton.setPosition({400, 200});
    playButton.setSize({200, 200});
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
        window.draw(playButton);
        window.display();
    }

}
