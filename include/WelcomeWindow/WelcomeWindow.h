//
// Created by graduate on 12/05/25.
//

#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include "Menu.h"
#include "PlayButton.h"
#include "ExitButton.h"

class WelcomeWindow
{
private:
    Menu m_menu;
    PlayButton m_playButton;
    ExitButton m_exitButton;
    sf::RenderWindow m_window;

public:
    WelcomeWindow();
    void close();
    void clear();
    void render();
    void display();

    bool isOpen() const;
    void getRelevantEvents();

private:
    void processMousepressEvents() const;

};

#endif //WELCOMEWINDOW_H
