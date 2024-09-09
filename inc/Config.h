#include <Arduino.h>

#include <DNSServer.h>

#include "FastLED.h"
//#include "WiFiManager.h"
#include "TimeLib.h"
#include "Ticker.h"
#include "ArduinoJson.h"

#include <ESP8266WiFi.h>
//#include <WebSockets.h>
#include <Hash.h>
#include <ESP8266WebServer.h>
//#include <WebSocketsServer.h>
#include <ESP8266mDNS.h>

#include <stdint.h>
#include <WiFiUdp.h>



// #define RotationMode 0
// #define kMatrixWidth 8
// #define kMatrixHeight 8
#define NUM_LEDS 64
// #define kMatrixSerpentineLayout true
#define DATA_PIN 4  //数据引脚
#define numColors 7 //七彩颜色变量

#define MDNS_NAME "mbc-pix"
