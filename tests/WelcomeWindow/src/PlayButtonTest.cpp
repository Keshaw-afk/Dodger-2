//
// Created by graduate on 11/05/25.
//
#include "PlayButtonTest.h"
#include "Logger.h"
#include "constants.h"

void testPlayButton()
{
    sf::RenderWindow window(sf::VideoMode(window_size), "PlayButton test");
    PlayButton playButton(PlayButtonTextureSource, sf::IntRect(IntRectPlayButton));
    playButton.setPosition(PlayButtonPosition);
    playButton.setSize(PlayButtonSize);
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
