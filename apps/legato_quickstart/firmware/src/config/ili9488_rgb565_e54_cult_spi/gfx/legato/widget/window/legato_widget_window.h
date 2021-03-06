// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

/*******************************************************************************
 Module for Microchip Graphics Library - Legato User Interface Library

  Company:
    Microchip Technology Inc.

  File Name:
    legato_widget_window.h

  Summary:
    Window Widget

  Description:
    This module implements window container widget functions.
*******************************************************************************/

// DOM-IGNORE-BEGIN
#ifndef LEGATO_WINDOW_H
#define LEGATO_WINDOW_H
//DOM-IGNORE-END

#include "gfx/legato/common/legato_common.h"

#if LE_WINDOW_WIDGET_ENABLED == 1

#include "gfx/legato/image/legato_image.h"
#include "gfx/legato/widget/legato_widget.h"
#include "gfx/legato/string/legato_string.h"



// *****************************************************************************
// *****************************************************************************
// Section: Data Types and Constants
// *****************************************************************************
// *****************************************************************************

// DOM-IGNORE-BEGIN
typedef struct leWindowWidget leWindowWidget;

#define LE_WINDOWWIDGET_VTABLE(THIS_TYPE) \
    LE_WIDGET_VTABLE(THIS_TYPE) \
    \
    uint32_t  (*getTitleHeight)(const THIS_TYPE* _this); \
    leResult  (*setTitleHeight)(THIS_TYPE* this, uint32_t ht); \
    leString* (*getString)(const THIS_TYPE* _this); \
    leResult  (*setString)(THIS_TYPE* _this, const leString* str); \
    leImage*  (*getIcon)(const THIS_TYPE* _this); \
    leResult  (*setIcon)(THIS_TYPE* _this, const leImage* img); \
    uint32_t  (*getIconMargin)(const THIS_TYPE* this); \
    leResult  (*setIconMargin)(THIS_TYPE* this, uint32_t mg); \
    
typedef struct leWindowWidgetVTable
{
	LE_WINDOWWIDGET_VTABLE(leWindowWidget)
} leWindowWidgetVTable; 

// DOM-IGNORE-END

// *****************************************************************************
/* Structure:
    leWindowWidget

  Summary:
    Implementation of a window widget struct

  Description:
    A window widget is an extension of a basic panel.  It adds a title bar
    with text and an icon.

  Remarks:
    None.
*/
typedef struct leWindowWidget
{
    leWidget widget; // base widget class

    const leWindowWidgetVTable* fn;

    uint32_t titleHeight; // title height
    const leString* title; // title text

    const leImage* icon; // title icon
    uint32_t iconMargin; // title icon margin
} leWindowWidget;


// *****************************************************************************
// *****************************************************************************
// Section: Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    leWindowWidget* leWindowWidget_New()

  Summary:
    Allocates memory for a new widget of this type.  The application is
    responsible for the managment of this memory until the widget is added to
    a widget tree.

  Description:


  Parameters:

  Returns:
    leWindowWidget*

  Remarks:
    Use leWidget_Delete() to free this pointer.
*/
LIB_EXPORT leWindowWidget* leWindowWidget_New();

/* Function:
    void leWindowWidget_Constructor(leWindowWidget* wgt)

  Summary:
    Initializes an leWindowWidget widget pointer.

  Description:
    Initializes an leWindowWidget widget pointer.

  Parameters:
    leWindowWidget* wgt - the pointer to initialize

  Returns:
    void

  Remarks:

*/
LIB_EXPORT void leWindowWidget_Constructor(leWindowWidget* win);

// *****************************************************************************
/* Virtual Member Function:
    uint32_t getTitleHeight(const leWindowWidget* _this)

  Summary:
     Get the title bar height

  Description:
     Get the title bar height

  Parameters:
    const leWindowWidget* _this - The window widget to operate on

  Remarks:
    Usage - _this->fn->getTitleHeight(_this);

  Returns:
    uint32_t - the height value
*/

// *****************************************************************************
/* Virtual Member Function:
    leResult setTitleHeight(leWindowWidget* this,
                            uint32_t ht)

  Summary:
     Set the title bar height

  Description:
     Set the title bar height

  Parameters:
    leWindowWidget* this - The window widget to operate on
    uint32_t ht - the height value

  Remarks:
    Usage - _this->fn->setTitleHeight(_this, ht);

  Returns:
    leResult - the result of the operation
*/

// *****************************************************************************
/* Virtual Member Function:
    leString* getString(const leWindowWidget* _this)

  Summary:
     Get the title bar string

  Description:
     Get the title bar string

  Parameters:
    const leWindowWidget* _this - The window widget to operate on

  Remarks:
    Usage - _this->fn->getString(_this);

  Returns:
    leString* - the string pointer
*/

// *****************************************************************************
/* Virtual Member Function:
    leResult setString(leWindowWidget* _this,
                       const leString* str)

  Summary:
     Set the title bar string

  Description:
     Set the title bar string

  Parameters:
    leWindowWidget* _this - The window widget to operate on
    const leString* str - the string pointer

  Remarks:
    Usage - _this->fn->setString(_this, str);

  Returns:
    leResult - the result of the operation
*/

// *****************************************************************************
/* Virtual Member Function:
    leImage* getIcon(const leWindowWidget* _this)

  Summary:
     Get the title bar icon

  Description:
     Get the title bar icon

  Parameters:
    const leWindowWidget* _this - The window widget to operate on

  Remarks:
    Usage - _this->fn->getIcon(_this);

  Returns:
    leImage* - the image pointer
*/

// *****************************************************************************
/* Virtual Member Function:
    leResult setIcon(leWindowWidget* _this,
                     const leImage* img)

  Summary:
     Set the title bar icon

  Description:
     Set the title bar icon

  Parameters:
    leWindowWidget* _this - The window widget to operate on
    const leImage* img - the image pointer

  Remarks:
    Usage - _this->fn->setIcon(_this, img);

  Returns:
    leResult - the result of the operation
*/

// *****************************************************************************
/* Virtual Member Function:
    uint32_t getIconMargin(const leWindowWidget* this)

  Summary:
     Get the title bar icon margin

  Description:
     Get the title bar icon margin

  Parameters:
    const leWindowWidget* this - The window widget to operate on

  Remarks:
    Usage - _this->fn->getIconMargin(_this);

  Returns:
    uint32_t - the margin value
*/

// *****************************************************************************
/* Virtual Member Function:
    leResult setIconMargin(leWindowWidget* this,
                           uint32_t mg)

  Summary:
     Set the title bar icon margin

  Description:
     Set the title bar icon margin

  Parameters:
    leWindowWidget* this - The window widget to operate on
    uint32_t mg - the margin value

  Remarks:
    Usage - _this->fn->setIconMargin(_this, mg);

  Returns:
    leResult - the result of the operation
*/



#endif // LE_WINDOW_WIDGET_ENABLED
#endif /* LEGATO_WINDOW_H */