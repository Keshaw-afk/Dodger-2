//
// Created by graduate on 12/05/25.
//

#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>

//Menu is just the background sprite of opening window

class Menu : public sf::Drawable
{
public:
    Menu(const std::string& textureSource, sf::IntRect rect);

public:
    void setPosition(sf::Vector2f pos);
    void setSize(sf::Vector2f size);

    sf::FloatRect getGlobalBounds();

    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
    sf::Texture m_texture;
    sf::Sprite m_sprite;
};

#endif //MENU_H
