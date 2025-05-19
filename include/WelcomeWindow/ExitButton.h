//
// Created by graduate on 11/05/25.
//

#ifndef EXITBUTTON_H
#define EXITBUTTON_H

#include "Button.h"

class ExitButton : public Button
{
public:
    ExitButton(const std::string& textureSource, sf::IntRect rect);

    void action() override;
};

#endif //EXITBUTTON_H
