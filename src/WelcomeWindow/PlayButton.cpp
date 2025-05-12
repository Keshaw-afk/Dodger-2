//
// Created by graduate on 11/05/25.
//

#include "WelcomeWindow/PlayButton.h"

#include "Logger.h"

PlayButton::PlayButton(const std::string& textureSource, sf::IntRect rect) : Button(textureSource, rect)
{

}

void PlayButton::action() const
{
    logger::log("Playbutton was pressed");
}
