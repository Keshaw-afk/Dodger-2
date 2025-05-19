//
// Created by graduate on 11/05/25.
//
#include "Button.h"
#include <fstream>
#include "Logger.h"

/************************************* Button constructor ******************************************/

// Loads from textureSource and creates the sprite, ready to be deployed

Button::Button(const std::string& textureSource, const sf::IntRect rect)
{

    if (!m_texture.loadFromFile(textureSource))
    {
        logger::log("Texture couldn't be loaded");
    }

    m_sprite.setTexture(m_texture);
    m_sprite.setTextureRect(rect);
}

/********************************* Sets position of sprite  *******************************************/

void Button::setPosition(sf::Vector2f pos)
{
    m_sprite.setPosition(pos);
}

/********************************* Sets size of sprite *************************************************/

void Button::setSize(sf::Vector2f size)
{
    float scale_x = size.x / m_sprite.getGlobalBounds().getSize().x;
    float scale_y = size.y / m_sprite.getGlobalBounds().getSize().y;

    m_sprite.setScale(scale_x, scale_y);
}

/********************************* I plan on removing this function it seems bad practice, purpose of adding it in the first place was to check if button was being clicked or hovered ******************/
/********************************* But I will add the logic in the class itself, something called isClicked() ***********************************************************/


bool Button::isClicked(sf::Vector2f mousePos) const
{
    return m_sprite.getGlobalBounds().contains(mousePos);
}


void Button::action()
{
    logger::log("A button was pressed");
}

/*************************** Overloaded draw method of sf::Drawable class *******************************/

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(m_sprite, states);
}


