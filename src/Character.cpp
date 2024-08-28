#include "../inc/Character.h"

extern CRGB leds_plus_safety_pixel[NUM_LEDS + 1];    //灯珠创建
extern CRGB *const leds(leds_plus_safety_pixel + 1);
extern CRGB leds_fonts_plus_safety_pixel[NUM_LEDS + 1]; //字体灯珠，存在但不显示
extern CRGB *const leds_font(leds_fonts_plus_safety_pixel + 1);

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
    {
        apple6x10_bitmap,
        apple6x10_index,
        sizeof(apple6x10_index) / sizeof(apple6x10_index[0]),
        6,
        10,
        2,
        -1,
        6,
    },
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
/*******************************************************
 * 函数名：showCharacter
 * 描述  ：显示单个字符
 * 参数  ：
 *        @char_x     字符左上角x坐标 从0开始
 *        @char_y     字符左上角y坐标 从0开始
 *        @c          字符编码
 *        @charfont   字体
 * 返回值：无
 **********************************************************/
void showCharacter(int char_x, int char_y, int c, int charfont)
{

    //变量 characterSpace 代表的是字符在字体位图中的索引位置。
    //具体来说，它表示特定字符在字体位图数组中的位置，通过这个索引可以提取出该字符的像素数据。
    int i, x, y, characterSpace=0;
    unsigned char line;//当前行的像素数据  像素行号
    unsigned short ct;//

    const unsigned char *cb = fontattribute[charfont].font_bitmap;
    const unsigned char *ci = fontattribute[charfont].font_index;
    int len = fontattribute[charfont].font_num;//字符个数
    int lx = fontattribute[charfont].font_width;//字符宽度
    int ly = fontattribute[charfont].font_height;//字符高度

    if (charfont == Cnfont8x8 && c > 0xFF) //中文字体中的非英文字体
        ct = cn_utf8_to_unicode(c);//unicode编码 unicode:中文字符的唯一标识符
    else
        ct = (unsigned short)c;

    for (i = 0; i < len; i++)
    {
        if (charfont == Cnfont8x8) //中文编码为8字节，不方便用放flash，内存充足，因此放内存中。
        {
            /*
             数组用于查找特定中文字符在字体位图中的位置。
             通过遍历这个数组，可以快速找到与给定 Unicode 编码匹配的索引，从而提取相应的字符像素数据。
            */
            if (Cnfont_index[i] == ct)
            {
                characterSpace = i;
                break;
            }
        }
        else
        {
            if (pgm_read_byte(ci + i) == ct) // ci[i] == ct
            {
                characterSpace = i;
                break;
            }
        }
    }
    if (i == len)
        characterSpace = 1; //如果字符索引不存在，则显示空白符
/*↓↓↓↓↓↓
这段代码的主要功能是遍历一个字符的每个像素，并将有效的黑色像素从字体位图复制到 leds_font 数组中。具体来说：
外层循环遍历字符的每一行。
内层循环遍历当前行的每一个像素。
通过位操作提取当前像素的值，并检查其是否为黑色。
如果像素为黑色且位置有效，则将 leds_font 数组中对应位置的像素设置为黑色。
通过这种方式，代码实现了将特定字符的像素数据从字体位图复制到 leds_font 数组，以便在 LED 矩阵上显示该字符。
*/
    for (y = 0; y < ly; y++)
    {
        // line = cb[ly * characterSpace + y];
        line = pgm_read_byte(cb + (ly * characterSpace + y));
        for (x = lx - 1; x >= 0; x--)
        {
            if (((line >> (7 - x)) & 0x01) == 0 && XYsafe(char_x + x, char_y + y) != (uint16_t)-1)
            {
                leds_font[XYsafe(char_x + x, char_y + y)] = CRGB(0, 0, 0);//将某个元素设置为黑色
            }
        }
    }
/*↓↓↓↓↓↓
这段代码的主要功能是遍历一个字符的每个像素，并将有效的非黑色像素从leds_font数组复制到leds数组中。具体来说：
遍历字符的每个像素：通过双重循环遍历字符的每个像素位置。
检查有效性和颜色：确保像素位置在有效范围内且颜色不是黑色。
复制像素颜色：将符合条件的像素颜色从leds_font复制到leds。
通过这种方式，代码实现了将特定字符的像素数据从leds_font数组复制到leds数组，以便在LED矩阵上显示该字符。
*/
    for (y = 0; y < ly; y++)
    {
        for (x = 0; x < lx; x++)
        {
            if (XYsafe(char_x + x, char_y + y) != (uint16_t)-1 && leds_font[XYsafe(char_x + x, char_y + y)] != CRGB(0, 0, 0)) //顺序不能换
            {
                leds[XYsafe(char_x + x, char_y + y)] = leds_font[XYsafe(char_x + x, char_y + y)];
            }
        }
    }
}


/*******************************************************
 * 函数名：characterTest
 * 描述  ：字符显示测试
 * 参数  ：无
 * 返回值：无
 **********************************************************/
void characterTest()
{
    int i;
    Serial.println("Show Char");
    for (i = 0; i < 58; i++)
    {
        fill_solid(leds_font, 64, CRGB::Green);
        fill_solid(leds, 64, CRGB::Black);
        showCharacter(0, 0, 'A' + i, Pix5x7);
        FastLED.show();
        delay(500);
    }
}