#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include "../inc/Config.h"


uint16_t XY(uint8_t x, uint8_t y);
uint16_t cn_utf8_to_unicode(const uint32_t cInput);
uint16_t XYsafe(uint8_t x, uint8_t y);

#endif // __FUNCTION_H__