#include"Pixfont.h"
#include"Cnfont.h"
#include"FastLED.h"

#define RotationMode 0
#define kMatrixWidth 8
#define kMatrixHeight 8
#define NUM_LEDS 64
#define kMatrixSerpentineLayout true
#define DATA_PIN 4  //数据引脚

#define numColors 7 //七彩颜色变量

CRGB leds_plus_safety_pixel[NUM_LEDS + 1];    //灯珠创建
CRGB *const leds(leds_plus_safety_pixel + 1);
CRGB leds_fonts_plus_safety_pixel[NUM_LEDS + 1]; //字体灯珠，存在但不显示
CRGB *const leds_font(leds_fonts_plus_safety_pixel + 1);

CRGB leds[NUM_LEDS];
//定义led数组s
CRGB colors[] = {CRGB::Red, CRGB::Orange, CRGB::Yellow, CRGB::Green, CRGB::Blue, CRGB::Indigo, CRGB::Violet};//定义七彩颜色数组 indigo:紫罗兰色 violet:紫色


//**********************字体****************************
enum charfont
{
    Apple4x6,   //全
    Apple5x7,   //全
    Apple6x10,  //全 字体偏大
    Pix5x7,     //1~9 A~Z a~z
    Atari8x8,   //A~Z 0~9
    Undertale8x8, //全 Undertale:字体偏大
    Blodnum8x8, //0~9  Blodnum：数字字体
    Cnfont8x8,  //中英文
    Clock3x5,   //0~9 :
    Clock3x4,   //0~9
};

struct FontAttribute  //字体属性
{
    const unsigned char *font_bitmap;  //字体数组
    const unsigned char *font_index;  //字体编码数组
    int font_num;   //字体包含字符数
    int font_width; //字符宽度
    int font_height; //字符高度
    int font_test_x; //测试用：字符居中偏移
    int font_test_y; //测试用：字符居中偏移
    int font_test_space;  //相邻字符偏移像素
};

struct FontAttribute fontattribute[]=    //各字体属性设置  Attribute:属性
{
    {
        apple4x6_bitmap,
        apple_index,
        sizeof(apple_index) / sizeof(apple_index[0]),
        4,//字符宽度
        6,//字符高度
        3,//字符之间水平间距
        1,//字符之间垂直间距
        4,//相邻字符偏移像素
    },
    {
        apple5x7_bitmap,
        apple_index,
        sizeof(apple_index) / sizeof(apple_index[0]),
        5,
        7,
        2,
        1,
        5,
    },
    // {
    //     apple6x10_bitmap,
    //     apple6x10_index,
    //     sizeof(apple6x10_index) / sizeof(apple6x10_index[0]),
    //     6,
    //     10,
    //     2,
    //     -1,
    //     6,
    // },
    {
        Pix5x7_bitmap,
        Pix5x7_index,
        sizeof(Pix5x7_index) / sizeof(Pix5x7_index[0]),
        5,
        7,
        2,
        1,
        6,
    },
    {
        Atari8x8_bitmap,
        Atari8x8_index,
        sizeof(Atari8x8_index) / sizeof(Atari8x8_index[0]),
        8,
        8,
        1,
        1,
        8,
    },
    {
        Undertale8x8_bitmap,
        Undertale8x8_index,
        sizeof(Undertale8x8_index) / sizeof(Undertale8x8_index[0]),
        8,
        8,
        1,
        1,
        8,
    },
    {
        Blodnum8x8_bitmap,
        Blodnum8x8_index,
        sizeof(Blodnum8x8_index) / sizeof(Blodnum8x8_index[0]),
        8,
        8,
        0,
        0,
        8,
    },
    {
        Cnfont_bitmap,
        (const unsigned char *)Cnfont_index,
        CNFONTLEN,
        8,
        8,
        0,
        0,
        8,
    },
    {
        Clock3x5_bitmap,
        Clock3x5_index,
        sizeof(Clock3x5_index) / sizeof(Clock3x5_index[0]),
        3,
        5,
        2,
        1,
        4,
    },
    {
        Clock3x4_bitmap,
        Clock3x4_index,
        sizeof(Clock3x4_index) / sizeof(Clock3x4_index[0]),
        3,
        4,
        2,
        2,
        4,
    },
};