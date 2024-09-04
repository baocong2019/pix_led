#include "../inc/Character.h"
#include <Arduino.h>
#include "../inc/MyPalette.h"

int wordshow_i = 0;//滑动字体变量i
//********滚动显示参数**********//
int pix_l;
int len_t, cnstr_p = 0;
int cnstr_type[200];    // cnstr_type：Cnfont8x8 字体字符串各字符中英文类型数组，0位英文，1位中文，2结束
int cnstr_pos[200]; //cnstr_pos：Cnfont8x8 字体字符串中各字符偏移像素

extern uint8_t count;

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

enum
{
    SolidColor,       //纯色
    RainbowColor,     //彩虹色
    GradiantColor,    //渐变色
    PaletteColor,     //色盘
};

struct SolidColorVar  //纯色填充函数参数
{
    struct CRGB *leds;  //led名称
    int numToFill;      //填充灯珠数量
    CRGB color;//const struct CRGB color;  //填充颜色
};

struct RainbowColorVar //渐变彩虹色填充函数参数
{
    struct CRGB *pFirstLED;  //led名称
    int numToFill;           //填充灯珠数量
    uint8_t initialhue;      //彩虹色的其实色调值，最大为255
    uint8_t deltahue;        //相邻灯珠的色调差，最大为255
};

struct GradiantColorVar  //渐变色填充函数参数
{
    CRGB *leds;       //led名称
    uint16_t startpos; //开始灯珠编号
    CRGB startcolor;   //开始灯珠颜色
    uint16_t endpos;   //结束灯珠编号
    CRGB endcolor;    //结束灯珠颜色
};

struct PaletteColorVar  //色盘颜色填充函数参数
{
    CRGB *L;              //led名称
    uint16_t N;           //灯珠数量
    uint8_t startIndex;   //起始颜色序号
    uint8_t incIndex;     //灯珠间颜色差
    CRGBPalette16 pal;   //palette色盘名  
    uint8_t brightness;   //亮度
    TBlendType blendType; //色彩过渡方式  LINEARBLEND：线性渐变  NOBLEND：不渐变

    /*
    色板：
    CloudColors_p：云朵渐变
    LavaColors_p：火山渐变
    OceanColors_p：海洋渐变
    ForestColors_p：树林渐变
    RainbowColors_p：彩虹渐变
    RainbowStripeColors_p：彩带渐变
    PartyColors_p：派对渐变
    HeatColors_p：热浪渐变
    */
};

struct StrSlipConfig //滑动显示配置
{
    int font_color_func = SolidColor;                                            //字体颜色函数
    struct SolidColorVar font_sc_var = {leds_font, NUM_LEDS, CRGB::White}; //四种显示函数默认变量
    struct RainbowColorVar font_rc_var = {leds_font, NUM_LEDS, 30, 30};
    struct GradiantColorVar font_gc_var = {leds_font, 0, CRGB::Red, NUM_LEDS - 1, CRGB::Blue};
    struct PaletteColorVar font_pc_var = {leds_font, NUM_LEDS, 0, 3, (CRGBPalette16)RainbowColors_p , 255, LINEARBLEND};

    int bg_color_func = SolidColor;                                              //背景颜色函数
    struct SolidColorVar bg_sc_var = {leds, NUM_LEDS, CRGB::Black}; //四种显示函数默认变量
    struct RainbowColorVar bg_rc_var = {leds, NUM_LEDS, 10, 10};
    struct GradiantColorVar bg_gc_var = {leds, 0, CRGB::Yellow, NUM_LEDS - 1, CRGB::Green};
    struct PaletteColorVar bg_pc_var = {leds, NUM_LEDS, 0, 3, (CRGBPalette16)CloudColors_p, 255, LINEARBLEND};

    int strspeed = 80;  //滑动速度  ms/像素
    int cspace = 4;    //字符间隔（像素）
    int cfont = Apple4x6;     //字符字体
} strslipconfig; //滑动显示配置


struct StrTwinkleConfig //闪烁显示配置
{
    int font_color_func = SolidColor;                                    //字体颜色函数
    struct SolidColorVar font_sc_var = {leds_font, NUM_LEDS, CRGB::White}; //四种显示函数默认变量
    struct RainbowColorVar font_rc_var = {leds_font, NUM_LEDS, 30, 30};
    struct GradiantColorVar font_gc_var = {leds_font, 0, CRGB::Red, NUM_LEDS - 1, CRGB::Blue};
    struct PaletteColorVar font_pc_var = {leds_font, NUM_LEDS, 0, 3, (CRGBPalette16)RainbowColors_p , 255, LINEARBLEND};

    int bg_color_func = SolidColor;                                 //背景颜色函数
    struct SolidColorVar bg_sc_var = {leds, NUM_LEDS, CRGB::Black}; //四种显示函数默认变量
    struct RainbowColorVar bg_rc_var = {leds, NUM_LEDS, 10, 10};
    struct GradiantColorVar bg_gc_var = {leds, 0, CRGB::Yellow, NUM_LEDS - 1, CRGB::Green};
    struct PaletteColorVar bg_pc_var = {leds, NUM_LEDS, 0, 3, (CRGBPalette16)CloudColors_p, 255, LINEARBLEND};

    int twkspeed = 300;  //闪烁速度  ms/次
    int cfont = Apple4x6;     //字符字体
} strstwinkleconfig; //闪烁显示配置

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
 * 现象 ：从大写A到小写z 显示58个字符，每隔500ms显示一个字符。
 **********************************************************/
void characterTest()
{
    int i;

    Serial.println("Show Char");

    for (i = 0; i < 58; i++)
    {
        fill_solid(leds_font, NUM_LEDS, CRGB::Green);//前景色
        fill_solid(leds, NUM_LEDS, CRGB::Black);//背景色
        showCharacter(0, 0, 'A' + i, Pix5x7);
        FastLED.show();
        delay(500);
    }
}

/*******************************************************
 * 函数名：setSlipStrLen
 * 描述  ：获取用于滑动显示的字符串中的中英文及字符数信息
 * 参数  ：
 *        @str      字符串
 *        @len      字符串长度
 * 返回值：无
 **********************************************************/
void setSlipStrLen(char *str, int len)
{
    int i, j, cnstr_l=0;

    if (strslipconfig.cfont == Cnfont8x8)
    {
        for (i = 0, j = 0; (uint8_t)str[i] != 0 && j < 200; i++, j++)
        {
            if ((uint8_t)str[i] < 0xE0) //非中文
            {
                cnstr_type[j] = 0;
                cnstr_pos[j] = cnstr_l;
                /*  Cnfont8x8 字体中为不同字符配置不同间距，观感更好*/
                if (str[i] == '$' || str[i] == '@' || str[i] == 'M' || str[i] == 'W' || str[i] == 'm' || str[i] == 'w' || str[i] == 165)
                {
                    cnstr_l += 6;
                }
                else if (str[i] == '&' || (str[i] >= 'A' && str[i] <= 'H') || str[i] == 'K' || (str[i] >= 'N' && str[i] <= 'S') || str[i] == 'U' || str[i] == 'V' || str[i] == 'X' || str[i] == 'Y')
                {
                    cnstr_l += 5;
                }
                else if (str[i] == '0' || (str[i] >= '2' && str[i] <= '9') || str[i] == '?' || str[i] == 'J' || str[i] == 'L' || str[i] == 'T' || str[i] == 'Z' || (str[i] >= 'a' && str[i] <= 'e') || str[i] == 'g' || str[i] == 'h' || str[i] == 'j' || str[i] == 'k' || (str[i] >= 'n' && str[i] <= 's') || str[i] == 'u' || str[i] == 'v' || str[i] == 'x' || str[i] == 'y' || str[i] == 'z')
                {
                    cnstr_l += 4;
                }
                else if (str[i] == ',' || str[i] == '1' || str[i] == 'f' || str[i] == 'l' || str[i] == 't')
                {
                    cnstr_l += 3;
                }
                else if (str[i] == '!' || str[i] == '.' || str[i] == 'I' || str[i] == 'i' || str[i] == ' ')
                {
                    cnstr_l += 2;
                }
                else
                {
                    cnstr_l += 8;
                }
            }
            else //中文
            {
                cnstr_type[j] = 1;
                cnstr_pos[j] = cnstr_l;
                cnstr_l += strslipconfig.cspace;
                i += 2;
            }
        }
        cnstr_type[j] = 2;
        cnstr_pos[j] = cnstr_l;
        pix_l = cnstr_l;
        len_t = j;
    }
    else
    {
        pix_l = len * strslipconfig.cspace;
        len_t = len;
    }
    cnstr_p = 0;
}
/*******************************************************
 * 函数名：showStringSlip
 * 描述  ：滚动显示字符串
 * 参数  ：
 *        @char_x     字符串起始左上角x坐标
 *        @char_y     字符串起始左上角y坐标
 *        @str        字符串
 *        @len        字符串长度
 * 返回值：无
 **********************************************************/
void showStringSlip(int char_x, int char_y, char *str, int len)
{
    int j;

    if (count > (strslipconfig.strspeed/20))
    {
        if(wordshow_i == pix_l)
        {
            wordshow_i = 0;
        }
        cnstr_p = 0;
        switch (strslipconfig.bg_color_func)
        {
        case SolidColor:
            fill_solid(strslipconfig.bg_sc_var.leds, strslipconfig.bg_sc_var.numToFill, strslipconfig.bg_sc_var.color);
            break;
        case RainbowColor:
            fill_rainbow(strslipconfig.bg_rc_var.pFirstLED, strslipconfig.bg_rc_var.numToFill, strslipconfig.bg_rc_var.initialhue, strslipconfig.bg_rc_var.deltahue);
            break;
        case GradiantColor:
            fill_gradient_RGB(strslipconfig.bg_gc_var.leds, strslipconfig.bg_gc_var.startpos, strslipconfig.bg_gc_var.startcolor, strslipconfig.bg_gc_var.endpos, strslipconfig.bg_gc_var.endcolor);
            break;
        case PaletteColor:
            fill_palette(strslipconfig.bg_pc_var.L, strslipconfig.bg_pc_var.N, strslipconfig.bg_pc_var.startIndex, strslipconfig.bg_pc_var.incIndex, strslipconfig.bg_pc_var.pal, strslipconfig.bg_pc_var.brightness, strslipconfig.bg_pc_var.blendType);
            break;
        default:
            break;
        }
        for (j = 0; j < len_t; j++)
        {
            switch (strslipconfig.font_color_func)
            {
            case SolidColor:
                fill_solid(strslipconfig.font_sc_var.leds, strslipconfig.font_sc_var.numToFill, strslipconfig.font_sc_var.color);
                break;
            case RainbowColor:
                fill_rainbow(strslipconfig.font_rc_var.pFirstLED, strslipconfig.font_rc_var.numToFill, strslipconfig.font_rc_var.initialhue, strslipconfig.font_rc_var.deltahue);
                break;
            case GradiantColor:
                fill_gradient_RGB(strslipconfig.font_gc_var.leds, strslipconfig.font_gc_var.startpos, strslipconfig.font_gc_var.startcolor, strslipconfig.font_gc_var.endpos, strslipconfig.font_gc_var.endcolor);
                break;
            case PaletteColor:
                fill_palette(strslipconfig.font_pc_var.L, strslipconfig.font_pc_var.N, strslipconfig.font_pc_var.startIndex, strslipconfig.font_pc_var.incIndex, strslipconfig.font_pc_var.pal, strslipconfig.font_pc_var.brightness, strslipconfig.font_pc_var.blendType);
                break;
            default:
                break;
            }
            if (strslipconfig.cfont == Cnfont8x8)
            {
                if (cnstr_type[j] == 1)
                {
                    showCharacter(char_x - wordshow_i + cnstr_pos[j], char_y, (int)((str[cnstr_p] << 16) + (str[cnstr_p + 1] << 8) + str[cnstr_p + 2]), strslipconfig.cfont);
                    cnstr_p += 3; //一个中文字符3字节
                }
                else
                {
                    showCharacter(char_x - wordshow_i + cnstr_pos[j], char_y, (int)str[cnstr_p], strslipconfig.cfont);
                    cnstr_p += 1; //一个英文字符1字节
                }
            }
            else
                showCharacter(char_x - wordshow_i + j * strslipconfig.cspace, char_y, str[j], strslipconfig.cfont);
        }
        FastLED.show();
        wordshow_i++;
        count = 0;
    }
}

/*******************************************************
 * 函数名：strsliptest
 * 描述  ：滚动显示英文字符串测试
 * 参数  ：无
 * 返回值：无
 * 现象 ：从6种字体中选择一种，每种字体显示ABCDEFGH   字符，滑动速度由strslipconfig.strspeed控制。
 * 结果： 未实现多字体滑动，只有单字体
 **********************************************************/
void strsliptest()
{
    //字符太多会出现bug
    char str[] = "ABCDEFGH   "; //"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzHIJKLMNOPQRSTUVWXYZ   ";
    int i, j;
    for (i = 5; i >= 0; i--)
    {
        strslipconfig.cfont = i;//cfont:字符字体
        strslipconfig.cspace = fontattribute[i].font_test_space;//font_test_space:字符间距
        for (j = 0; j < 4; j++)
        {
        // strslipconfig.font_color_func = SolidColor; // j font_color_func:字体颜色
        strslipconfig.font_color_func = j; 
        setSlipStrLen(str, strlen(str));
        showStringSlip(4, 0, str, strlen(str));
        }

        // Serial.println("strslipconfig.cfont =");
        // Serial.println(strslipconfig.cfont);

        // Serial.println("strslipconfig.cspace =");
        // Serial.println(fontattribute[i].font_test_space);

        // Serial.println("strslipconfig.font_color_func =");
        // Serial.println(strslipconfig.font_color_func);
    }
}

/*******************************************************
 * 函数名：cnstrsliptest
 * 描述  ：滚动显示中英文字符串测试
  * 参数  ：无
 * 返回值：无
 * 现象：滑动显示中文显示：你好世界！Hellow world!    
 **********************************************************/
void cnstrsliptest()
{
    //字符太多会出现bug
    char str[] = "你好世界！Hellow world!    ";
    //char *p;
    strslipconfig.cfont = Cnfont8x8;
    strslipconfig.cspace = fontattribute[Cnfont8x8].font_test_space;
    strslipconfig.font_color_func = PaletteColor; // SolidColor
    // strslipconfig.font_pc_var.pal = myRedWhiteBluePalette_p;
    setSlipStrLen(str, strlen(str));
    showStringSlip(8, 0, str, strlen(str));
}
/*******************************************************
 * 函数名：showStringTwinkle
 * 描述  ：闪动显示字符串
 * 参数  ：
 *        @char_x     字符左上角x坐标
 *        @char_y     字符左上角y坐标
 *        @str        字符串
 *        @len        字符串长度
 * 返回值：无
 **********************************************************/
void showStringTwinkle(int char_x, int char_y, char *str, int len)
{
    //count 每20ms调用一次，在ticker库中引用
    if (count > (strstwinkleconfig.twkspeed/20))
    {
        if(wordshow_i >= len_t)
        {
            wordshow_i = 0;
            cnstr_p = 0;
        }
        
        switch (strstwinkleconfig.bg_color_func)
        {
        case SolidColor:
            fill_solid(strstwinkleconfig.bg_sc_var.leds, strstwinkleconfig.bg_sc_var.numToFill, strstwinkleconfig.bg_sc_var.color);
            break;
        case RainbowColor:
            fill_rainbow(strstwinkleconfig.bg_rc_var.pFirstLED, strstwinkleconfig.bg_rc_var.numToFill, strstwinkleconfig.bg_rc_var.initialhue, strstwinkleconfig.bg_rc_var.deltahue);
            break;
        case GradiantColor:
            fill_gradient_RGB(strstwinkleconfig.bg_gc_var.leds, strstwinkleconfig.bg_gc_var.startpos, strstwinkleconfig.bg_gc_var.startcolor, strstwinkleconfig.bg_gc_var.endpos, strstwinkleconfig.bg_gc_var.endcolor);
            break;
        case PaletteColor:
            fill_palette(strstwinkleconfig.bg_pc_var.L, strstwinkleconfig.bg_pc_var.N, strstwinkleconfig.bg_pc_var.startIndex, strstwinkleconfig.bg_pc_var.incIndex, strstwinkleconfig.bg_pc_var.pal, strstwinkleconfig.bg_pc_var.brightness, strstwinkleconfig.bg_pc_var.blendType);
            break;
        default:
            break;
        }
        switch (strstwinkleconfig.font_color_func)
        {
        case SolidColor:
            fill_solid(strstwinkleconfig.font_sc_var.leds, strstwinkleconfig.font_sc_var.numToFill, strstwinkleconfig.font_sc_var.color);
            break;
        case RainbowColor:
            fill_rainbow(strstwinkleconfig.font_rc_var.pFirstLED, strstwinkleconfig.font_rc_var.numToFill, strstwinkleconfig.font_rc_var.initialhue, strstwinkleconfig.font_rc_var.deltahue);
            break;
        case GradiantColor:
            fill_gradient_RGB(strstwinkleconfig.font_gc_var.leds, strstwinkleconfig.font_gc_var.startpos, strstwinkleconfig.font_gc_var.startcolor, strstwinkleconfig.font_gc_var.endpos, strstwinkleconfig.font_gc_var.endcolor);
            break;
        case PaletteColor:
            fill_palette(strstwinkleconfig.font_pc_var.L, strstwinkleconfig.font_pc_var.N, strstwinkleconfig.font_pc_var.startIndex, strstwinkleconfig.font_pc_var.incIndex, strstwinkleconfig.font_pc_var.pal, strstwinkleconfig.font_pc_var.brightness, strstwinkleconfig.font_pc_var.blendType);
            break;
        default:
            break;
        }
        if (strstwinkleconfig.cfont == Cnfont8x8)
        {
            if (cnstr_type[wordshow_i] == 1)
            {
                showCharacter(char_x, char_y, (int)((str[cnstr_p] << 16) + (str[cnstr_p + 1] << 8) + str[cnstr_p + 2]), strstwinkleconfig.cfont);
                cnstr_p += 3;
            }
            else
            {
                showCharacter(char_x, char_y, (int)str[cnstr_p], strstwinkleconfig.cfont);
                cnstr_p += 1;
            }
        }
        else
        {
            showCharacter(char_x, char_y, str[wordshow_i], strstwinkleconfig.cfont);
        }
        FastLED.show();
        wordshow_i++;
        count = 0; 
    }
}

/*******************************************************
 * 函数名：setTwinkleStrLen
 * 描述  ：获取用于闪烁显示的字符串中的中英文及字符数信息
 * 参数  ：
 *        @str      字符串
 *        @len      字符串长度
 * 返回值：无
 **********************************************************/
void setTwinkleStrLen(char *str, int len)
{
    int i, j;
    if (strstwinkleconfig.cfont == Cnfont8x8)
    {
        for (i = 0, j = 0; (uint8_t)str[i] != 0 && j < 200; i++, j++)
        {
            if ((uint8_t)str[i] < 0xE0) //非中文
            {
                cnstr_type[j] = 0;
            }
            else //中文
            {
                cnstr_type[j] = 1;
                i += 2;
            }
        }
        cnstr_type[j] = 2;
        len_t = j;
    }
    else
    {
        len_t = len;
    }
    wordshow_i=0;  
}

/*******************************************************
 * 函数名：strtwinkletest
 * 描述  ：闪动显示英文字符串测试
 * 参数  ：无
 * 返回值：无
 * 现象：显示0123456789 显示速度由strstwinkleconfig.twkspeed控制。
 **********************************************************/
void strtwinkletest()
{
    char str[] = "0123456789"; //"!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"; //"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
    int i, j, x, y;
    for (i = 6; i >= 0; i--)
    {
        strstwinkleconfig.cfont = i; // i
        // for (j = 0; j < 4; j++)
        // {
        strstwinkleconfig.font_color_func = SolidColor; // j
        // strstwinkleconfig.font_color_func = j; // j
        x = fontattribute[i].font_test_x;
        y = fontattribute[i].font_test_y;
        setTwinkleStrLen(str, strlen(str));
        showStringTwinkle(x, y, str, strlen(str));
        // }
    }
}

/*******************************************************
 * 函数名：cnstrtwinkletest
 * 描述  ：闪动显示中英文字符串测试
 * 参数  ：无
 * 返回值：无
 **********************************************************/
void cnstrtwinkletest()
{
    //字符太多会出现bug
    char str[] = "你好世界！Hellow world!";
    //char *p;
    strstwinkleconfig.cfont = Cnfont8x8;
    strstwinkleconfig.twkspeed = 500;
    strstwinkleconfig.font_color_func = PaletteColor; // SolidColor
    strstwinkleconfig.font_pc_var.pal = myRedWhiteBluePalette_p;
    strstwinkleconfig.font_pc_var.incIndex = 1;
    setTwinkleStrLen(str, strlen(str));
    showStringTwinkle(0, 0, str, strlen(str));
}