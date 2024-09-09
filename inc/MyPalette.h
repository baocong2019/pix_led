/**
 * @file MyPalette.h
 * @author your name (you@domain.com)
 * @brief 5.Cnfont.h、Pixfont.h 、Image.h、MyPalette.h中方便为中文字库、英文字库、图片、调色板相关数据。
 * @version 0.1
 * @date 2024-08-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef __MYPALETTE_H__
#define __MYPALETTE_H__

#include "FastLED.h"
/*自定义色盘配置文件*/
/*可以在此处自定义色盘，并在动态画面或文字显示中选择该色盘*/
const TProgmemPalette16 myRedWhiteBluePalette_p PROGMEM =
{
    CRGB::Red,
    CRGB::Gray,//灰色
    CRGB::Blue,
    CRGB::Green,
    
    CRGB::Red,
    CRGB::Gray,
    CRGB::Blue,
    CRGB::Green,
    
    CRGB::Red,
    CRGB::Red,
    CRGB::Gray,
    CRGB::Gray,
    
    CRGB::Blue,
    CRGB::Blue,
    CRGB::Green,
    CRGB::Green
};

#endif
