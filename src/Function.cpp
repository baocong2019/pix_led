#include "../inc/Function.h"
#include "../inc/Config.h"

/*******************************************************
 * 函数名：XY
 * 描述  ：获取灯珠矩阵中某个灯珠编号
 * 参数  ：
 *        @x   x行
 *        @y   y列
 * 返回值：(x,y)处灯珠编号
 **********************************************************/
uint16_t XY(uint8_t x, uint8_t y)
{
    uint16_t i;
    uint8_t temp;

    if (RotationMode == 1)
    {
        temp = x;
        x = y;
        y = kMatrixWidth - 1 - temp;
    }
    else if (RotationMode == 2)
    {
        x = kMatrixWidth - 1 - x;
        y = kMatrixHeight - 1 - y;
    }
    else if (RotationMode == 3)
    {
        temp = y;
        y = x;
        x = kMatrixHeight - 1 - temp;
    }

    if (kMatrixSerpentineLayout == false)
    {
        i = (y * kMatrixWidth) + x;
    }

    if (kMatrixSerpentineLayout == true)
    {
        if (y & 0x01)
        {
            uint8_t reverseX = (kMatrixWidth - 1) - x;
            i = (y * kMatrixWidth) + reverseX;
        }
        else
        {
            i = (y * kMatrixWidth) + x;
        }
    }
    return i;
}

/*******************************************************
 * 函数名：XYsafe
 * 描述  ：安全地获取灯珠矩阵中某个灯珠编号
 * 参数  ：
 *        @x   x行
 *        @y   y列
 * 返回值：(x,y)处灯珠编号，灯珠不在设定范围内将返回-1
 **********************************************************/
uint16_t XYsafe(uint8_t x, uint8_t y)
{
    if (x >= kMatrixWidth)
        return -1;
    if (y >= kMatrixHeight)
        return -1;
    return XY(x, y);
}

/*******************************************************
 * 函数名：cn_utf8_to_unicode
 * 描述  ：中文字符utf-8编码转unicode编码函数
 * 参数  ：
 *        @cInput     中文的utf-8编码值
 * 返回值：对于中文的unicode编码值
 **********************************************************/
uint16_t cn_utf8_to_unicode(const uint32_t cInput)
{
    // b1 表示UTF-8编码的pInput中的高字节, b2 表示次高字节, ...
    uint8_t b1, b2, b3;
    uint16_t cOutput = 0;
    b1 = (cInput & 0x000F0000) >> 16;
    b2 = (cInput & 0x00003F00) >> 8;
    b3 = (cInput & 0x0000003F);
    cOutput = (b1 << 12) + (b2 << 6) + b3;
    return cOutput;
}