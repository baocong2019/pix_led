#include <Arduino.h>
#include <FastLED.h>
#include "../inc/Character.h"
#include "../inc/Config.h"


void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(100); //设置亮度为100
}

void loop() 
{
  characterTest();
}



/**
   * @brief 7个颜色循环显示 
   * 
   */
  /*
  for(int i = 0; i < 7; i++) 
  {
    int colorIndex = i % numColors;
      for(int dot = 0; dot < NUM_LEDS; dot++)
       {
        leds[dot] = colors[colorIndex];
        FastLED.show();
        delay(50);
       }
      for(int dot = 0; dot < NUM_LEDS; dot++) 
      {
        leds[dot] = CRGB::Black;
        FastLED.show();
        delay(50);
      }
  }
  */

/**
 * @brief 循环NUM_LEDS次，将led灯橙色循环显示
 * 
 */

/*
  for(int dot = 0 ;dot < NUM_LEDS;dot++){
  leds[dot] = CRGB::Orange;
  FastLED.show();
  delay(30);

  leds[dot] = CRGB::Black;
  FastLED.show();
  delay(30);
  }
*/


/**
 * @brief led灯按照电位器的数值变化而变化
 * 
 */
/* 
void loop(){
  int val = analogRead(2);
  int numledsToLight = map(val, 0, 1023, 0, NUM_LEDS);

  FastLED.clear();

  for(int i = 0; i < numledsToLight; i++){
    leds[i] = CRGB::yellow;
  }
  FastLED.show();
}
*/
