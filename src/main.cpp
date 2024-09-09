#include "../inc/Config.h"
#include "../inc/Pixfont.h"//英文字库头文件
#include "../inc/Cnfont.h"//中文字库头文件
#include "../inc/Character.h"
#include "Ticker.h"
#include "../inc/NTP.h"

CRGB leds_plus_safety_pixel[NUM_LEDS + 1];    //灯珠创建
CRGB *const leds(leds_plus_safety_pixel + 1);
CRGB leds_fonts_plus_safety_pixel[NUM_LEDS + 1]; //字体灯珠，存在但不显示
CRGB *const leds_font(leds_fonts_plus_safety_pixel + 1);

//WiFiManager wifiManager; //WiFi管理器创建
/**********************************************外部引用************************************************************** */
extern uint8_t count;
/**********************************************函数调用************************************************************** */

Ticker tickerObject(tickerCount,20);//Ticker对象创建 每20ms调用一次tickercount函数
/**********************************************函数声明************************************************************** */

void setup() 
{

  Serial.begin(115200);

//  wifiManager.autoConnect(MDNS_NAME);
//  initNTP();

  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(50); //设置亮度为50   数值范围：0-255  越大越亮


  tickerObject.start();//Ticker对象启动

//  showIP(); //显示IP地址
  Serial.println("IP Show Over");
}

void loop() 
{
  tickerObject.update();//Ticker对象更新

  //characterTest();//字符测试

  //strsliptest();//字符串滑动测试
  //cnstrsliptest(); //中文字符串滑动测试

  //strtwinkletest(); //字符串闪烁测试
  //cnstrtwinkletest();//中文字符串闪烁测试


}


/**
   * @brief 7个颜色循环显示 
   * 
   * 
   * 
   *   // CRGB leds[NUM_LEDS];
      //定义led数组s
      // CRGB colors[] = {CRGB::Red, CRGB::Orange, CRGB::Yellow, CRGB::Green, CRGB::Blue, CRGB::Indigo, CRGB::Violet};//定义七彩颜色数组 indigo:紫罗兰色 violet:紫色


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
