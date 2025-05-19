//
// Created by graduate on 11/05/25.
//

#ifndef PLAYBUTTON_H
#define PLAYBUTTON_H

#include "Button.h"

class PlayButton : public Button
{

public:
    PlayButton(const std::string& textureSource, sf::IntRect rect);

    void action() override;
};

#endif //PLAYBUTTON_H
