//
// Created by graduate on 11/05/25.
//
#include "Button.h"
#include <fstream>
#include "Logger.h"

Button::Button(const std::string& textureSource, const sf::IntRect rect)
{

    if (!m_texture.loadFromFile(textureSource))
    {
        logger::log("Texture couldn't be loaded");
    }

    m_sprite.setTexture(m_texture);
    m_sprite.setTextureRect(rect);
}

void Button::setPosition(sf::Vector2f pos)
{
    m_sprite.setPosition(pos);
}

void Button::setSize(sf::Vector2f size)
{
    float scale_x = size.x / m_sprite.getGlobalBounds().getSize().x;
    float scale_y = size.y / m_sprite.getGlobalBounds().getSize().y;

    m_sprite.setScale(scale_x, scale_y);
}

void Button::action() const
{
    logger::log("A button was pressed");
}


void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(m_sprite, states);
}


