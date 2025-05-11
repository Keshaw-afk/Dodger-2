//
// Created by graduate on 11/05/25.
//

#ifndef BUTTON_H
#define BUTTON_H

#include <string>
#include <SFML/Graphics.hpp>
#include <memory>

class Button : public sf::Drawable
{
public:
    //when one texture is entirely used for creating one button sprite

    Button(const std::string& textureSource, const sf::IntRect rect);

    void setPosition(sf::Vector2f pos);
    void setSize(sf::Vector2f size);
    virtual void action() = 0;

private:
    //Each individual button will have its own individual texture
    sf::Texture m_texture;
    sf::Sprite m_sprite;

public:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};

#endif //BUTTON_H
