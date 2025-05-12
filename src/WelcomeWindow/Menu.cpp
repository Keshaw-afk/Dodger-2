//
// Created by graduate on 12/05/25.
//
#include "Menu.h"
#include "Logger.h"

Menu::Menu(const std::string& textureSource, sf::IntRect rect)
{
    if (!m_texture.loadFromFile(textureSource))
    {
        logger::log("Menu background texture couldn't be loaded");
    }
    m_sprite.setTexture(m_texture);
    m_sprite.setTextureRect(rect);
}

void Menu::setPosition(sf::Vector2f pos)
{
    m_sprite.setPosition(pos);
}

void Menu::setSize(sf::Vector2f size)
{
    float scale_x = size.x / m_sprite.getGlobalBounds().getSize().x;
    float scale_y = size.y / m_sprite.getGlobalBounds().getSize().y;

    m_sprite.setScale({scale_x, scale_y});
}

sf::FloatRect Menu::getGlobalBounds()
{
    return m_sprite.getGlobalBounds();
}

void Menu::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(m_sprite, states);
}



