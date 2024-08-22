#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS 64 //ws2812 led总数量
#define DATA_PIN 4  //数据引脚
#define numColors 7 //七彩颜色变量


CRGB leds[NUM_LEDS];
//定义led数组s
CRGB colors[] = {CRGB::Red, CRGB::Orange, CRGB::Yellow, CRGB::Green, CRGB::Blue, CRGB::Indigo, CRGB::Violet};//定义七彩颜色数组 indigo:紫罗兰色 violet:紫色



void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(100); //设置亮度为100
}

void loop() {
  for(int i = 0; i < 7; i++) {
  int colorIndex = i % numColors;
  for(int dot = 0; dot < NUM_LEDS; dot++) {
    leds[dot] = colors[colorIndex];
    FastLED.show();
    delay(50);
    }
  for(int dot = 0; dot < NUM_LEDS; dot++) {
    leds[dot] = CRGB::Black;
    FastLED.show();
    delay(50);
  }
  }
}
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

/* :进行电位器控制灯数量实例
void loop(){
  int val = analogRead(2);
  int numledsToLight = map(val, 0, 1023, 0, NUM_LEDS);

  FastLED.clear();

  for(int i = 0; i < numledsToLight; i++){
    leds[i] = CRGB::yellow;
  }
s
  FastLED.show();
}
*/
