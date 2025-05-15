//
// Created by graduate on 11/05/25.
//

/*******************************************************************************************/
// Documentation for Button.h

/******************************8rief summary of Button**************************************/
// Button is a abstract class due to the virtual function action() which will be implemented by objects of type Button like Playbutton and Exitbutton
// Both will have different action on being pressed
// Playbutton is supposed to close the welcome window and open a new window to continue into the game, Exitbutton will simply close the welcome window and hence the game
/*******************************************************************************************/

/********************************Constructor of Button.h*************************************/

// The constructor Button(const std::string& textureSource, const sf::IntRect rect) is self-explanatory, IntRect is used to carve out a part of the whole texture to get the desired button
// In my case I picked a whole menu with 4 buttons, but I don't want all 4 buttons, I only wanted the two buttons Play and Exit, as well as change the background texture
/********************************************************************************************/

/********************************* Function :  setPosition() **********************************/
// setPosition takes a position vector and sets it the Button sprite
/********************************************************************************************/

/********************************* Function : setSize() ***************************************/
//setSize is self-explanatory
/********************************************************************************************/

/********************************* Function : getGlobalBounds()******************************/
//I am considering removing this function because ...... it doesn't feel right?
//My original idea was to get the positional and dimensional data of a button and check if the button was being pressed
// But I think it would be better if I code the logic to check if a button is being pressed or hovered upon inside the Button class itself
/********************************************************************************************/


/********************************************************************************************/

#ifndef BUTTON_H
#define BUTTON_H

#include <string>
#include <SFML/Graphics.hpp>

class Button : public sf::Drawable
{
public:
    //when one texture is entirely used for creating one button sprite

    Button(const std::string& textureSource, const sf::IntRect rect);

    void setPosition(sf::Vector2f pos);
    void setSize(sf::Vector2f size);

    bool isClicked(sf::Vector2f mousePos) const;

    //Each button will have different actions, play button will continue into the game, exit button will close the game
    virtual void action() const = 0;


private:
    //Each individual button will have its own individual texture
    sf::Texture m_texture;
    sf::Sprite m_sprite;

public:
    // The compulsory virtual function which needs to be overloaded when you inherit from sf::Drawable
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};

#endif //BUTTON_H
