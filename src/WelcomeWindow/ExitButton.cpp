//
// Created by graduate on 11/05/25.
//

#include "WelcomeWindow/ExitButton.h"

#include "Logger.h"

ExitButton::ExitButton(const std::string& textureSource, sf::IntRect rect) : Button(textureSource, rect)
{

}

void ExitButton::action() const
{
    logger::log("Exit button was pressed");
}

