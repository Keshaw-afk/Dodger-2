//
// Created by graduate on 12/05/25.
//

#include "WelcomeWindow/WelcomeWindow.h"

#include "constants.h"

WelcomeWindow::WelcomeWindow() : m_menu(MenuTextureSource, IntRectMenu),
m_playButton(PlayButtonTextureSource, IntRectPlayButton),
m_exitButton(ExitButtonTextureSource, IntRectExitButton),
m_window(sf::VideoMode(window_size), WelcomeWindowTitle)
{
    m_menu.setPosition(MenuPosition);
    m_menu.setSize(window_size);

    m_playButton.setPosition(PlayButtonPosition);
    m_playButton.setSize(PlayButtonSize);

    m_exitButton.setPosition(ExitButtonPosition);
    m_exitButton.setSize(ExitButtonSize);
}

void WelcomeWindow::close()
{
    m_window.close();
}

void WelcomeWindow::clear()
{
    m_window.clear();
}

void WelcomeWindow::render()
{
    m_window.draw(m_menu);
    m_window.draw(m_playButton);
    m_window.draw(m_exitButton);
}

void WelcomeWindow::display()
{
    m_window.display();
}

bool WelcomeWindow::isOpen() const
{
    return m_window.isOpen();
}

/*********************** getEvents() is specially designated to only get mouse left click events *******************************/

void WelcomeWindow::getRelevantEvents()
{
    sf::Event event;
    while (m_window.pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
            m_window.close();
            break;

        case sf::Event::MouseButtonPressed:
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                processMousepressEvents();
            }
            break;
        default: ;
        }
    }


}

void WelcomeWindow::processMousepressEvents()
{
    const sf::Vector2i pixelPos = sf::Mouse::getPosition(m_window);
    const sf::Vector2f worldPos = m_window.mapPixelToCoords(pixelPos);

    if (m_playButton.isClicked(worldPos))
    {
        m_playButton.action();
    }
    else if (m_exitButton.isClicked(worldPos))
    {
        m_exitButton.action();
    }
}






