//
// Created by graduate on 12/05/25.
//

#ifndef CONSTANTS_H
#define CONSTANTS_H

/*************************************************************/
//                  Window dimension Constants               //
/*************************************************************/

//Common to all windows

#define window_size {800, 600}

/*************************************************************/
//                  Welcome window title                      //
/*************************************************************/

#define WelcomeWindowTitle "Welcome to Dodger"

/*************************************************************/
//                  Play Button Constants                    //
/*************************************************************/

#define PlayButtonTextureSource "assets/MenuForeground.png"

//For IntRect (portion of texture covered by sprite)

#define rectLeft_PlayButton 100
#define rectTop_PlayButton 50
#define rectWidth_PlayButton 155
#define rectHeight_PlayButton 70

#define IntRectPlayButton {rectLeft_PlayButton, rectTop_PlayButton, rectWidth_PlayButton, rectHeight_PlayButton}

//Play button position and size

#define PlayButtonPosition {300, 100}
#define PlayButtonSize {200, 100}

/*************************************************************/
//                  Exit Button Constants                    //
/*************************************************************/

#define ExitButtonTextureSource "assets/MenuForeground.png"

//For IntRect (portion of texture covered by sprite)

#define rectLeft_ExitButton 100
#define rectTop_ExitButton 240
#define rectWidth_ExitButton 155
#define rectHeight_ExitButton 70

#define IntRectExitButton {rectLeft_ExitButton, rectTop_ExitButton, rectWidth_ExitButton, rectHeight_ExitButton}

//Exit button position and size

#define ExitButtonPosition {300, 300}
#define ExitButtonSize {200, 100}

/*************************************************************/
//                  Menu Constants
/*************************************************************/

#define MenuTextureSource "assets/MenuBackground.png"

//For IntRect (portion of texture covered by sprite)

#define rectLeft_Menu 0
#define rectTop_Menu 0
#define rectWidth_Menu 536
#define rectHeight_Menu 360

#define IntRectMenu {rectLeft_Menu, rectTop_Menu, rectWidth_Menu, rectHeight_Menu}

//Menu position and size

#define MenuPosition {0, 0}


#endif //CONSTANTS_H
