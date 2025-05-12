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

void WelcomeWindow::render()
{
    m_window.draw(m_menu);
    m_window.draw(m_playButton);
    m_window.draw(m_exitButton);
}


sf::RenderWindow* WelcomeWindow::get_render_window()
{
    return &m_window;
}
