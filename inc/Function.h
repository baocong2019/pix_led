#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include <stdint.h>

#define RotationMode 0  // 0: 0°, 1: 90°, 2: 180°, 3: 270° 旋转方向
#define kMatrixWidth 8
#define kMatrixHeight 8
#define kMatrixSerpentineLayout true    //是否为蛇形连接，方便后续进行代码处理

uint16_t XY(uint8_t x, uint8_t y);
uint16_t cn_utf8_to_unicode(const uint32_t cInput);
uint16_t XYsafe(uint8_t x, uint8_t y);
void tickerCount();

#endif // __FUNCTION_H__