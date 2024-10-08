/**
 * @file Pixfont.h
 * @author your name (you@domain.com)
 * @brief 5.Cnfont.h、Pixfont.h 、Image.h、MyPalette.h中方便为中文字库、英文字库、图片、调色板相关数据。
 * @version 0.1
 * @date 2024-08-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef __PIXFONT_H__
#define __PIXFONT_H__

/*字体文件*/
/*2. pgmspace.h 头文件
pgmspace.h 是Arduino平台中的一个特殊头文件，主要用于处理存储在程序存储器（Program Memory）中的数据。
程序存储器是一种只读存储器，通常用于存储程序代码和常量数据，这样可以节省RAM（随机访问存储器）的使用。

PROGMEM 关键字: pgmspace.h 头文件中定义了 PROGMEM 关键字，用于将变量存储在程序存储器中，而不是RAM中。
这对于存储大型的只读数据（如字体、图像等）非常有用。
读取程序存储器中的数据: pgmspace.h 还提供了一些函数（如 pgm_read_byte、pgm_read_word 等），
用于从程序存储器中读取数据。
*/
#include <pgmspace.h>

#define ________ 0x00
#define _______X 0x01
#define ______X_ 0x02
#define ______XX 0x03
#define _____X__ 0x04
#define _____X_X 0x05
#define _____XX_ 0x06
#define _____XXX 0x07
#define ____X___ 0x08
#define ____X__X 0x09
#define ____X_X_ 0x0A
#define ____X_XX 0x0B
#define ____XX__ 0x0C
#define ____XX_X 0x0D
#define ____XXX_ 0x0E
#define ____XXXX 0x0F
#define ___X____ 0x10
#define ___X___X 0x11
#define ___X__X_ 0x12
#define ___X__XX 0x13
#define ___X_X__ 0x14
#define ___X_X_X 0x15
#define ___X_XX_ 0x16
#define ___X_XXX 0x17
#define ___XX___ 0x18
#define ___XX__X 0x19
#define ___XX_X_ 0x1A
#define ___XX_XX 0x1B
#define ___XXX__ 0x1C
#define ___XXX_X 0x1D
#define ___XXXX_ 0x1E
#define ___XXXXX 0x1F
#define __X_____ 0x20
#define __X____X 0x21
#define __X___X_ 0x22
#define __X___XX 0x23
#define __X__X__ 0x24
#define __X__X_X 0x25
#define __X__XX_ 0x26
#define __X__XXX 0x27
#define __X_X___ 0x28
#define __X_X__X 0x29
#define __X_X_X_ 0x2A
#define __X_X_XX 0x2B
#define __X_XX__ 0x2C
#define __X_XX_X 0x2D
#define __X_XXX_ 0x2E
#define __X_XXXX 0x2F
#define __XX____ 0x30
#define __XX___X 0x31
#define __XX__X_ 0x32
#define __XX__XX 0x33
#define __XX_X__ 0x34
#define __XX_X_X 0x35
#define __XX_XX_ 0x36
#define __XX_XXX 0x37
#define __XXX___ 0x38
#define __XXX__X 0x39
#define __XXX_X_ 0x3A
#define __XXX_XX 0x3B
#define __XXXX__ 0x3C
#define __XXXX_X 0x3D
#define __XXXXX_ 0x3E
#define __XXXXXX 0x3F
#define _X______ 0x40
#define _X_____X 0x41
#define _X____X_ 0x42
#define _X____XX 0x43
#define _X___X__ 0x44
#define _X___X_X 0x45
#define _X___XX_ 0x46
#define _X___XXX 0x47
#define _X__X___ 0x48
#define _X__X__X 0x49
#define _X__X_X_ 0x4A
#define _X__X_XX 0x4B
#define _X__XX__ 0x4C
#define _X__XX_X 0x4D
#define _X__XXX_ 0x4E
#define _X__XXXX 0x4F
#define _X_X____ 0x50
#define _X_X___X 0x51
#define _X_X__X_ 0x52
#define _X_X__XX 0x53
#define _X_X_X__ 0x54
#define _X_X_X_X 0x55
#define _X_X_XX_ 0x56
#define _X_X_XXX 0x57
#define _X_XX___ 0x58
#define _X_XX__X 0x59
#define _X_XX_X_ 0x5A
#define _X_XX_XX 0x5B
#define _X_XXX__ 0x5C
#define _X_XXX_X 0x5D
#define _X_XXXX_ 0x5E
#define _X_XXXXX 0x5F
#define _XX_____ 0x60
#define _XX____X 0x61
#define _XX___X_ 0x62
#define _XX___XX 0x63
#define _XX__X__ 0x64
#define _XX__X_X 0x65
#define _XX__XX_ 0x66
#define _XX__XXX 0x67
#define _XX_X___ 0x68
#define _XX_X__X 0x69
#define _XX_X_X_ 0x6A
#define _XX_X_XX 0x6B
#define _XX_XX__ 0x6C
#define _XX_XX_X 0x6D
#define _XX_XXX_ 0x6E
#define _XX_XXXX 0x6F
#define _XXX____ 0x70
#define _XXX___X 0x71
#define _XXX__X_ 0x72
#define _XXX__XX 0x73
#define _XXX_X__ 0x74
#define _XXX_X_X 0x75
#define _XXX_XX_ 0x76
#define _XXX_XXX 0x77
#define _XXXX___ 0x78
#define _XXXX__X 0x79
#define _XXXX_X_ 0x7A
#define _XXXX_XX 0x7B
#define _XXXXX__ 0x7C
#define _XXXXX_X 0x7D
#define _XXXXXX_ 0x7E
#define _XXXXXXX 0x7F
#define X_______ 0x80
#define X______X 0x81
#define X_____X_ 0x82
#define X_____XX 0x83
#define X____X__ 0x84
#define X____X_X 0x85
#define X____XX_ 0x86
#define X____XXX 0x87
#define X___X___ 0x88
#define X___X__X 0x89
#define X___X_X_ 0x8A
#define X___X_XX 0x8B
#define X___XX__ 0x8C
#define X___XX_X 0x8D
#define X___XXX_ 0x8E
#define X___XXXX 0x8F
#define X__X____ 0x90
#define X__X___X 0x91
#define X__X__X_ 0x92
#define X__X__XX 0x93
#define X__X_X__ 0x94
#define X__X_X_X 0x95
#define X__X_XX_ 0x96
#define X__X_XXX 0x97
#define X__XX___ 0x98
#define X__XX__X 0x99
#define X__XX_X_ 0x9A
#define X__XX_XX 0x9B
#define X__XXX__ 0x9C
#define X__XXX_X 0x9D
#define X__XXXX_ 0x9E
#define X__XXXXX 0x9F
#define X_X_____ 0xA0
#define X_X____X 0xA1
#define X_X___X_ 0xA2
#define X_X___XX 0xA3
#define X_X__X__ 0xA4
#define X_X__X_X 0xA5
#define X_X__XX_ 0xA6
#define X_X__XXX 0xA7
#define X_X_X___ 0xA8
#define X_X_X__X 0xA9
#define X_X_X_X_ 0xAA
#define X_X_X_XX 0xAB
#define X_X_XX__ 0xAC
#define X_X_XX_X 0xAD
#define X_X_XXX_ 0xAE
#define X_X_XXXX 0xAF
#define X_XX____ 0xB0
#define X_XX___X 0xB1
#define X_XX__X_ 0xB2
#define X_XX__XX 0xB3
#define X_XX_X__ 0xB4
#define X_XX_X_X 0xB5
#define X_XX_XX_ 0xB6
#define X_XX_XXX 0xB7
#define X_XXX___ 0xB8
#define X_XXX__X 0xB9
#define X_XXX_X_ 0xBA
#define X_XXX_XX 0xBB
#define X_XXXX__ 0xBC
#define X_XXXX_X 0xBD
#define X_XXXXX_ 0xBE
#define X_XXXXXX 0xBF
#define XX______ 0xC0
#define XX_____X 0xC1
#define XX____X_ 0xC2
#define XX____XX 0xC3
#define XX___X__ 0xC4
#define XX___X_X 0xC5
#define XX___XX_ 0xC6
#define XX___XXX 0xC7
#define XX__X___ 0xC8
#define XX__X__X 0xC9
#define XX__X_X_ 0xCA
#define XX__X_XX 0xCB
#define XX__XX__ 0xCC
#define XX__XX_X 0xCD
#define XX__XXX_ 0xCE
#define XX__XXXX 0xCF
#define XX_X____ 0xD0
#define XX_X___X 0xD1
#define XX_X__X_ 0xD2
#define XX_X__XX 0xD3
#define XX_X_X__ 0xD4
#define XX_X_X_X 0xD5
#define XX_X_XX_ 0xD6
#define XX_X_XXX 0xD7
#define XX_XX___ 0xD8
#define XX_XX__X 0xD9
#define XX_XX_X_ 0xDA
#define XX_XX_XX 0xDB
#define XX_XXX__ 0xDC
#define XX_XXX_X 0xDD
#define XX_XXXX_ 0xDE
#define XX_XXXXX 0xDF
#define XXX_____ 0xE0
#define XXX____X 0xE1
#define XXX___X_ 0xE2
#define XXX___XX 0xE3
#define XXX__X__ 0xE4
#define XXX__X_X 0xE5
#define XXX__XX_ 0xE6
#define XXX__XXX 0xE7
#define XXX_X___ 0xE8
#define XXX_X__X 0xE9
#define XXX_X_X_ 0xEA
#define XXX_X_XX 0xEB
#define XXX_XX__ 0xEC
#define XXX_XX_X 0xED
#define XXX_XXX_ 0xEE
#define XXX_XXXX 0xEF
#define XXXX____ 0xF0
#define XXXX___X 0xF1
#define XXXX__X_ 0xF2
#define XXXX__XX 0xF3
#define XXXX_X__ 0xF4
#define XXXX_X_X 0xF5
#define XXXX_XX_ 0xF6
#define XXXX_XXX 0xF7
#define XXXXX___ 0xF8
#define XXXXX__X 0xF9
#define XXXXX_X_ 0xFA
#define XXXXX_XX 0xFB
#define XXXXXX__ 0xFC
#define XXXXXX_X 0xFD
#define XXXXXXX_ 0xFE
#define XXXXXXXX 0xFF
// 每个编码的字符位图
const unsigned char apple4x6_bitmap[] PROGMEM = {
    //  0 $00 'char0'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    ________,
    X_X_____,
    ________,
    X_X_____,
    ________,
    //  32 $20 'space'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    ________,
    ________,
    ________,
    ________,
    ________,
    //  33 $21 'exclam'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    _X______,
    _X______,
    ________,
    _X______,
    ________,
    //  34 $22 'quotedbl'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    X_X_____,
    ________,
    ________,
    ________,
    ________,
    //  35 $23 'numbersign'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    XXXX____,
    X_X_____,
    XXXX____,
    X_X_____,
    ________,
    //  36 $24 'dollar'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    XXX_____,
    XX______,
    __X_____,
    XXX_____,
    _X______,
    //  37 $25 'percent'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    __X_____,
    _X______,
    X_______,
    __X_____,
    ________,
    //  38 $26 'ampersand'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    _X______,
    X_X_____,
    _X_X____,
    ________,
    //  39 $27 'quotesingle'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    _X______,
    ________,
    ________,
    ________,
    ________,
    //  40 $28 'parenleft'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    _X______,
    _X______,
    _X______,
    __X_____,
    //  41 $29 'parenright'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    _X______,
    _X______,
    _X______,
    _X______,
    X_______,
    //  42 $2a 'asterisk'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    _X______,
    XXX_____,
    _X______,
    X_X_____,
    ________,
    //  43 $2b 'plus'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    _X______,
    XXX_____,
    _X______,
    _X______,
    ________,
    //  44 $2c 'comma'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    ________,
    ________,
    ________,
    _X______,
    X_______,
    //  45 $2d 'hyphen'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    ________,
    XXX_____,
    ________,
    ________,
    ________,
    //  46 $2e 'period'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    ________,
    ________,
    ________,
    _X______,
    ________,
    //  47 $2f 'slash'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    __X_____,
    _X______,
    X_______,
    X_______,
    ________,
    //  48 $30 'zero'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    XXX_____,
    X_X_____,
    _X______,
    ________,
    //  49 $31 'one'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    XX______,
    _X______,
    _X______,
    XXX_____,
    ________,
    //  50 $32 'two'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    __X_____,
    _X______,
    XXX_____,
    ________,
    //  51 $33 'three'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XXX_____,
    __X_____,
    _X______,
    __X_____,
    XX______,
    ________,
    //  52 $34 'four'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    X_X_____,
    XXX_____,
    __X_____,
    __X_____,
    ________,
    //  53 $35 'five'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XXX_____,
    X_______,
    XX______,
    __X_____,
    XX______,
    ________,
    //  54 $36 'six'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    X_______,
    XX______,
    X_X_____,
    _X______,
    ________,
    //  55 $37 'seven'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XXX_____,
    __X_____,
    _X______,
    X_______,
    X_______,
    ________,
    //  56 $38 'eight'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    X_X_____,
    _X______,
    X_X_____,
    XX______,
    ________,
    //  57 $39 'nine'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    _XX_____,
    __X_____,
    XX______,
    ________,
    //  58 $3a 'colon'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _X______,
    ________,
    ________,
    _X______,
    ________,
    //  59 $3b 'semicolon'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _X______,
    ________,
    ________,
    _X______,
    X_______,
    //  60 $3c 'less'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    X_______,
    _X______,
    __X_____,
    ________,
    //  61 $3d 'equal'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    XXX_____,
    ________,
    XXX_____,
    ________,
    ________,
    //  62 $3e 'greater'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    _X______,
    __X_____,
    _X______,
    X_______,
    ________,
    //  63 $3f 'question'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    __X_____,
    _X______,
    ________,
    _X______,
    ________,
    //  64 $40 'at'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    X_X_____,
    X_X_____,
    X_______,
    _XX_____,
    ________,
    //  65 $41 'A'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    XXX_____,
    X_X_____,
    X_X_____,
    ________,
    //  66 $42 'B'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    X_X_____,
    XX______,
    X_X_____,
    XX______,
    ________,
    //  67 $43 'C'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    X_______,
    X_X_____,
    _X______,
    ________,
    //  68 $44 'D'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    X_X_____,
    X_X_____,
    X_X_____,
    XX______,
    ________,
    //  69 $45 'E'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XXX_____,
    X_______,
    XX______,
    X_______,
    XXX_____,
    ________,
    //  70 $46 'F'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XXX_____,
    X_______,
    XX______,
    X_______,
    X_______,
    ________,
    //  71 $47 'G'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    X_______,
    X_X_____,
    X_X_____,
    _XX_____,
    ________,
    //  72 $48 'H'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    X_X_____,
    XXX_____,
    X_X_____,
    X_X_____,
    ________,
    //  73 $49 'I'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XXX_____,
    _X______,
    _X______,
    _X______,
    XXX_____,
    ________,
    //  74 $4a 'J'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    __X_____,
    __X_____,
    X_X_____,
    _X______,
    ________,
    //  75 $4b 'K'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    X_X_____,
    XX______,
    X_X_____,
    X_X_____,
    ________,
    //  76 $4c 'L'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    X_______,
    X_______,
    X_______,
    XXX_____,
    ________,
    //  77 $4d 'M'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    XXX_____,
    XXX_____,
    X_X_____,
    X_X_____,
    ________,
    //  78 $4e 'N'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    X_X_____,
    XXX_____,
    X_X_____,
    X_______,
    ________,
    //  79 $4f 'O'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    X_X_____,
    X_X_____,
    _X______,
    ________,
    //  80 $50 'P'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    X_X_____,
    XX______,
    X_______,
    X_______,
    ________,
    //  81 $51 'Q'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    X_X_____,
    X_X_____,
    _X______,
    __X_____,
    //  82 $52 'R'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    X_X_____,
    XX______,
    X_X_____,
    X_X_____,
    ________,
    //  83 $53 'S'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    X_______,
    _X______,
    __X_____,
    XX______,
    ________,
    //  84 $54 'T'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XXX_____,
    _X______,
    _X______,
    _X______,
    _X______,
    ________,
    //  85 $55 'U'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    X_X_____,
    X_X_____,
    X_X_____,
    XXX_____,
    ________,
    //  86 $56 'V'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    X_X_____,
    X_X_____,
    XXX_____,
    _X______,
    ________,
    //  87 $57 'W'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    X_X_____,
    XXX_____,
    XXX_____,
    X_X_____,
    ________,
    //  88 $58 'X'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    X_X_____,
    _X______,
    X_X_____,
    X_X_____,
    ________,
    //  89 $59 'Y'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    X_X_____,
    _X______,
    _X______,
    _X______,
    ________,
    //  90 $5a 'Z'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XXX_____,
    __X_____,
    _X______,
    X_______,
    XXX_____,
    ________,
    //  91 $5b 'bracketleft'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    _X______,
    _X______,
    _X______,
    _XX_____,
    ________,
    //  92 $5c 'backslash'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    X_______,
    _X______,
    __X_____,
    __X_____,
    ________,
    //  93 $5d 'bracketright'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    _X______,
    _X______,
    _X______,
    XX______,
    ________,
    //  94 $5e 'asciicircum'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    ________,
    ________,
    ________,
    ________,
    //  95 $5f 'underscore'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    ________,
    ________,
    ________,
    ________,
    XXX_____,
    //  96 $60 'grave'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    __X_____,
    ________,
    ________,
    ________,
    ________,
    //  97 $61 'a'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _XX_____,
    X_X_____,
    X_X_____,
    _XX_____,
    ________,
    //  98 $62 'b'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    XX______,
    X_X_____,
    X_X_____,
    XX______,
    ________,
    //  99 $63 'c'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _XX_____,
    X_______,
    X_______,
    _XX_____,
    ________,
    // 100 $64 'd'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _XX_____,
    X_X_____,
    X_X_____,
    _XX_____,
    ________,
    // 101 $65 'e'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _X______,
    X_X_____,
    XX______,
    _XX_____,
    ________,
    // 102 $66 'f'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    XXX_____,
    _X______,
    _X______,
    ________,
    // 103 $67 'g'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _XX_____,
    X_X_____,
    _XX_____,
    __X_____,
    XX______,
    // 104 $68 'h'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    XX______,
    X_X_____,
    X_X_____,
    X_X_____,
    ________,
    // 105 $69 'i'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    ________,
    XX______,
    _X______,
    XXX_____,
    ________,
    // 106 $6a 'j'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    ________,
    __X_____,
    __X_____,
    __X_____,
    XX______,
    // 107 $6b 'k'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    X_X_____,
    XX______,
    X_X_____,
    X_X_____,
    ________,
    // 108 $6c 'l'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    _X______,
    _X______,
    _X______,
    XXX_____,
    ________,
    // 109 $6d 'm'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    X_X_____,
    XXX_____,
    X_X_____,
    X_X_____,
    ________,
    // 110 $6e 'n'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    XX______,
    X_X_____,
    X_X_____,
    X_X_____,
    ________,
    // 111 $6f 'o'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _X______,
    X_X_____,
    X_X_____,
    _X______,
    ________,
    // 112 $70 'p'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    XX______,
    X_X_____,
    XX______,
    X_______,
    X_______,
    // 113 $71 'q'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _XX_____,
    X_X_____,
    X_X_____,
    _XX_____,
    __X_____,
    // 114 $72 'r'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    X_X_____,
    XX______,
    X_______,
    X_______,
    ________,
    // 115 $73 's'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _XX_____,
    XX______,
    __X_____,
    XX______,
    ________,
    // 116 $74 't'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    XXX_____,
    _X______,
    _X______,
    __X_____,
    ________,
    // 117 $75 'u'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    X_X_____,
    X_X_____,
    X_X_____,
    _XX_____,
    ________,
    // 118 $76 'v'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    X_X_____,
    X_X_____,
    X_X_____,
    _X______,
    ________,
    // 119 $77 'w'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    X_X_____,
    X_X_____,
    XXX_____,
    X_X_____,
    ________,
    // 120 $78 'x'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    X_X_____,
    _X______,
    _X______,
    X_X_____,
    ________,
    // 121 $79 'y'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    X_X_____,
    X_X_____,
    _XX_____,
    __X_____,
    XX______,
    // 122 $7a 'z'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    XXX_____,
    __X_____,
    _X______,
    XXX_____,
    ________,
    // 123 $7b 'braceleft'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    XX______,
    _X______,
    _X______,
    __X_____,
    // 124 $7c 'bar'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    _X______,
    _X______,
    _X______,
    _X______,
    ________,
    // 125 $7d 'braceright'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    _X______,
    _XX_____,
    _X______,
    _X______,
    X_______,
    // 126 $7e 'asciitilde'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X_X____,
    X_X_____,
    ________,
    ________,
    ________,
    ________,
    // 160 $a0 'space'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    ________,
    ________,
    ________,
    ________,
    ________,
    // 161 $a1 'exclamdown'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    ________,
    _X______,
    _X______,
    _X______,
    ________,
    // 162 $a2 'cent'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    XXX_____,
    X_______,
    XXX_____,
    _X______,
    ________,
    // 163 $a3 'sterling'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    _XX_____,
    _X______,
    X_X_____,
    ________,
    // 164 $a4 'currency'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    X__X____,
    _XX_____,
    _XX_____,
    X__X____,
    ________,
    // 165 $a5 'yen'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    _X______,
    XXX_____,
    _X______,
    _X______,
    ________,
    // 166 $a6 'brokenbar'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    _X______,
    ________,
    _X______,
    _X______,
    ________,
    // 167 $a7 'section'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    XX______,
    X_X_____,
    _XX_____,
    __X_____,
    XX______,
    // 168 $a8 'dieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    ________,
    ________,
    ________,
    ________,
    ________,
    // 169 $a9 'copyright'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    X__X____,
    XX_X____,
    XX_X____,
    X__X____,
    _XX_____,
    // 170 $aa 'ordfeminine'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    X_X_____,
    _XX_____,
    ________,
    XXX_____,
    ________,
    // 171 $ab 'guillemotleft'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _X_X____,
    X_X_____,
    _X_X____,
    ________,
    ________,
    // 172 $ac 'logicalnot'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    ________,
    XXX_____,
    __X_____,
    ________,
    ________,
    // 173 $ad 'hyphen'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    ________,
    XXX_____,
    ________,
    ________,
    ________,
    // 174 $ae 'registered'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    XXXX____,
    XX_X____,
    _XX_____,
    ________,
    ________,
    // 175 $af 'macron'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XXX_____,
    ________,
    ________,
    ________,
    ________,
    ________,
    // 176 $b0 'degree'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    _X______,
    ________,
    ________,
    ________,
    // 177 $b1 'plusminus'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    XXX_____,
    _X______,
    ________,
    XXX_____,
    ________,
    // 178 $b2 'twosuperior'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    _X______,
    X_______,
    XX______,
    ________,
    ________,
    // 179 $b3 'threesuperior'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    _X______,
    X_______,
    _X______,
    X_______,
    ________,
    // 180 $b4 'acute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    ________,
    ________,
    ________,
    ________,
    // 181 $b5 'mu'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    X_X_____,
    X_X_____,
    X_X_____,
    XX______,
    X_______,
    // 182 $b6 'paragraph'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XXX____,
    XX_X____,
    XX_X____,
    _X_X____,
    _X_X____,
    ________,
    // 183 $b7 'periodcentered'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    ________,
    _X______,
    ________,
    ________,
    ________,
    // 184 $b8 'cedilla'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    ________,
    ________,
    __X_____,
    _X______,
    ________,
    // 185 $b9 'onesuperior'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    XX______,
    _X______,
    _X______,
    ________,
    ________,
    // 186 $ba 'ordmasculine'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    _X______,
    ________,
    XXX_____,
    ________,
    // 187 $bb 'guillemotright'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    X_X_____,
    _X_X____,
    X_X_____,
    ________,
    ________,
    // 188 $bc 'onequarter'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    X_______,
    X_______,
    _X_X____,
    _XXX____,
    ___X____,
    // 189 $bd 'onehalf'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    X_______,
    X_XX____,
    ___X____,
    __X_____,
    __XX____,
    // 190 $be 'threequarters'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    _X______,
    X_______,
    _X_X____,
    X_XX____,
    ___X____,
    // 191 $bf 'questiondown'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    ________,
    _X______,
    X_______,
    _XX_____,
    ________,
    // 192 $c0 'Agrave'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    _X______,
    X_X_____,
    XXX_____,
    X_X_____,
    ________,
    // 193 $c1 'Aacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    X_X_____,
    XXX_____,
    X_X_____,
    ________,
    // 194 $c2 'Acircumflex'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    _X______,
    X_X_____,
    XXX_____,
    X_X_____,
    ________,
    // 195 $c3 'Atilde'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    XX______,
    X_X_____,
    XXX_____,
    X_X_____,
    ________,
    // 196 $c4 'Adieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    _X______,
    X_X_____,
    XXX_____,
    X_X_____,
    ________,
    // 197 $c5 'Aring'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    _X______,
    X_X_____,
    XXX_____,
    X_X_____,
    ________,
    // 198 $c6 'AE'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XXX____,
    X_X_____,
    XXXX____,
    X_X_____,
    X_XX____,
    ________,
    // 199 $c7 'Ccedilla'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    X_______,
    X_X_____,
    _X______,
    X_______,
    // 200 $c8 'Egrave'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    XXX_____,
    XX______,
    X_______,
    XXX_____,
    ________,
    // 201 $c9 'Eacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    XXX_____,
    XX______,
    X_______,
    XXX_____,
    ________,
    // 202 $ca 'Ecircumflex'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    XXX_____,
    XX______,
    X_______,
    XXX_____,
    ________,
    // 203 $cb 'Edieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    XXX_____,
    XX______,
    X_______,
    XXX_____,
    ________,
    // 204 $cc 'Igrave'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    XXX_____,
    _X______,
    _X______,
    XXX_____,
    ________,
    // 205 $cd 'Iacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    XXX_____,
    _X______,
    _X______,
    XXX_____,
    ________,
    // 206 $ce 'Icircumflex'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    XXX_____,
    _X______,
    _X______,
    XXX_____,
    ________,
    // 207 $cf 'Idieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    _X______,
    _X______,
    _X______,
    XXX_____,
    ________,
    // 208 $d0 'Eth'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XXX_____,
    _X_X____,
    XX_X____,
    _X_X____,
    XXX_____,
    ________,
    // 209 $d1 'Ntilde'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X_X____,
    X_X_____,
    XXX_____,
    XXX_____,
    X_X_____,
    ________,
    // 210 $d2 'Ograve'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    _X______,
    X_X_____,
    X_X_____,
    _X______,
    ________,
    // 211 $d3 'Oacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    X_X_____,
    X_X_____,
    _X______,
    ________,
    // 212 $d4 'Ocircumflex'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    _X______,
    X_X_____,
    X_X_____,
    _X______,
    ________,
    // 213 $d5 'Otilde'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XXX____,
    XXX_____,
    X_X_____,
    X_X_____,
    _X______,
    ________,
    // 214 $d6 'Odieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    _X______,
    X_X_____,
    X_X_____,
    _X______,
    ________,
    // 215 $d7 'multiply'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    X_X_____,
    _X______,
    X_X_____,
    ________,
    ________,
    // 216 $d8 'Oslash'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    X_X_____,
    XXX_____,
    X_X_____,
    XX______,
    ________,
    // 217 $d9 'Ugrave'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    _X______,
    X_X_____,
    X_X_____,
    XXX_____,
    ________,
    // 218 $da 'Uacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    X_X_____,
    X_X_____,
    XXX_____,
    ________,
    // 219 $db 'Ucircumflex'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    ________,
    X_X_____,
    X_X_____,
    XXX_____,
    ________,
    // 220 $dc 'Udieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    ________,
    X_X_____,
    X_X_____,
    XXX_____,
    ________,
    // 221 $dd 'Yacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    ________,
    X_X_____,
    _X______,
    _X______,
    ________,
    // 222 $de 'Thorn'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    XX______,
    X_X_____,
    XX______,
    X_______,
    ________,
    // 223 $df 'germandbls'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    XX______,
    X_X_____,
    XXX_____,
    X_______,
    // 224 $e0 'agrave'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    _X______,
    _XX_____,
    X_X_____,
    _XX_____,
    ________,
    // 225 $e1 'aacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    _XX_____,
    X_X_____,
    _XX_____,
    ________,
    // 226 $e2 'acircumflex'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _XX_____,
    ________,
    _XX_____,
    X_X_____,
    _XX_____,
    ________,
    // 227 $e3 'atilde'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X_X____,
    X_X_____,
    _XX_____,
    X_X_____,
    _XX_____,
    ________,
    // 228 $e4 'adieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    ________,
    _XX_____,
    X_X_____,
    _XX_____,
    ________,
    // 229 $e5 'aring'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    ________,
    _XX_____,
    X_X_____,
    _XX_____,
    ________,
    // 230 $e6 'ae'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _XXX____,
    X_XX____,
    X_X_____,
    _XXX____,
    ________,
    // 231 $e7 'ccedilla'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _X______,
    X_X_____,
    X_______,
    _XX_____,
    _X______,
    // 232 $e8 'egrave'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    _X______,
    X_X_____,
    XX______,
    _XX_____,
    ________,
    // 233 $e9 'eacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    X_X_____,
    XX______,
    _XX_____,
    ________,
    // 234 $ea 'ecircumflex'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XX______,
    _X______,
    X_X_____,
    XX______,
    _XX_____,
    ________,
    // 235 $eb 'edieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    _X______,
    X_X_____,
    XX______,
    _XX_____,
    ________,
    // 236 $ec 'igrave'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    _X______,
    _X______,
    _X______,
    XXX_____,
    ________,
    // 237 $ed 'iacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    XX______,
    _X______,
    _X______,
    XXX_____,
    ________,
    // 238 $ee 'icircumflex'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    X_X_____,
    _X______,
    _X______,
    XXX_____,
    ________,
    // 239 $ef 'idieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    ________,
    XX______,
    _X______,
    XXX_____,
    ________,
    // 240 $f0 'eth'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    _X______,
    _XX_____,
    X_X_____,
    _X______,
    ________,
    // 241 $f1 'ntilde'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X_X____,
    X_X_____,
    XX______,
    X_X_____,
    X_X_____,
    ________,
    // 242 $f2 'ograve'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    _X______,
    _X______,
    X_X_____,
    _X______,
    ________,
    // 243 $f3 'oacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    _X______,
    X_X_____,
    _X______,
    ________,
    // 244 $f4 'ocircumflex'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    ________,
    _X______,
    X_X_____,
    _X______,
    ________,
    // 245 $f5 'otilde'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    XXX_____,
    ________,
    _X______,
    X_X_____,
    _X______,
    ________,
    // 246 $f6 'odieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    ________,
    _X______,
    X_X_____,
    _X______,
    ________,
    // 247 $f7 'divide'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    ________,
    XXX_____,
    ________,
    _X______,
    ________,
    // 248 $f8 'oslash'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    ________,
    _XX_____,
    X_X_____,
    X_X_____,
    XX______,
    ________,
    // 249 $f9 'ugrave'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    _X______,
    X_X_____,
    X_X_____,
    _XX_____,
    ________,
    // 250 $fa 'uacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    X_X_____,
    X_X_____,
    _XX_____,
    ________,
    // 251 $fb 'ucircumflex'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    _X______,
    ________,
    X_X_____,
    X_X_____,
    _XX_____,
    ________,
    // 252 $fc 'udieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    ________,
    X_X_____,
    X_X_____,
    _XX_____,
    ________,
    // 253 $fd 'yacute'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    __X_____,
    _X______,
    X_X_____,
    XXX_____,
    __X_____,
    XX______,
    // 254 $fe 'thorn'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_______,
    X_______,
    XX______,
    X_X_____,
    XX______,
    X_______,
    // 255 $ff 'ydieresis'
    //  width 4, bbx 0, bby -1, bbw 4, bbh 6
    X_X_____,
    ________,
    X_X_____,
    XXX_____,
    __X_____,
    XX______,
};

const unsigned char apple5x7_bitmap[] PROGMEM = {
//   0 $00 'char0'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	X_X_X___,
	________,
	X___X___,
	________,
	X_X_X___,
	________,
//  32 $20 'space'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	________,
	________,
	________,
	________,
//  33 $21 'exclam'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	__X_____,
	________,
//  34 $22 'quotedbl'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	_X_X____,
	_X_X____,
	________,
	________,
	________,
	________,
//  35 $23 'numbersign'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	_X_X____,
	XXXXX___,
	_X_X____,
	XXXXX___,
	_X_X____,
	________,
//  36 $24 'dollar'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	_XXX____,
	X_X_____,
	_XXX____,
	__X_X___,
	_XXX____,
	________,
//  37 $25 'percent'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X_______,
	X__X____,
	__X_____,
	_X______,
	X__X____,
	___X____,
	________,
//  38 $26 'ampersand'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	_X______,
	X_X_____,
	_X______,
	X_X_____,
	_X_X____,
	________,
//  39 $27 'quotesingle'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
	________,
	________,
//  40 $28 'parenleft'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X______,
	_X______,
	_X______,
	_X______,
	__X_____,
	________,
//  41 $29 'parenright'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_X______,
	________,
//  42 $2a 'asterisk'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	_X_X____,
	__X_____,
	_XXX____,
	__X_____,
	_X_X____,
	________,
//  43 $2b 'plus'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	__X_____,
	__X_____,
	XXXXX___,
	__X_____,
	__X_____,
	________,
//  44 $2c 'comma'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	________,
	__XX____,
	__X_____,
	_X______,
//  45 $2d 'hyphen'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	XXXX____,
	________,
	________,
	________,
//  46 $2e 'period'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	________,
	_XX_____,
	_XX_____,
	________,
//  47 $2f 'slash'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	___X____,
	__X_____,
	_X______,
	X_______,
	________,
	________,
//  48 $30 'zero'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X_X____,
	_X_X____,
	_X_X____,
	_X_X____,
	__X_____,
	________,
//  49 $31 'one'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
//  50 $32 'two'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	___X____,
	__X_____,
	_X______,
	XXXX____,
	________,
//  51 $33 'three'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXXX____,
	___X____,
	_XX_____,
	___X____,
	X__X____,
	_XX_____,
	________,
//  52 $34 'four'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_XX_____,
	X_X_____,
	XXXX____,
	__X_____,
	__X_____,
	________,
//  53 $35 'five'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXXX____,
	X_______,
	XXX_____,
	___X____,
	X__X____,
	_XX_____,
	________,
//  54 $36 'six'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X_______,
	XXX_____,
	X__X____,
	X__X____,
	_XX_____,
	________,
//  55 $37 'seven'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXXX____,
	___X____,
	__X_____,
	__X_____,
	_X______,
	_X______,
	________,
//  56 $38 'eight'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	_XX_____,
	X__X____,
	X__X____,
	_XX_____,
	________,
//  57 $39 'nine'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	_XXX____,
	___X____,
	_XX_____,
	________,
//  58 $3a 'colon'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	_XX_____,
	_XX_____,
	________,
	_XX_____,
	_XX_____,
	________,
//  59 $3b 'semicolon'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	_XX_____,
	_XX_____,
	________,
	_XX_____,
	_X______,
	X_______,
//  60 $3c 'less'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	___X____,
	__X_____,
	_X______,
	__X_____,
	___X____,
	________,
//  61 $3d 'equal'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	XXXX____,
	________,
	XXXX____,
	________,
	________,
//  62 $3e 'greater'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	_X______,
	__X_____,
	___X____,
	__X_____,
	_X______,
	________,
//  63 $3f 'question'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X_X____,
	___X____,
	__X_____,
	________,
	__X_____,
	________,
//  64 $40 'at'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X_XX____,
	X_XX____,
	X_______,
	_XX_____,
	________,
//  65 $41 'A'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	XXXX____,
	X__X____,
	X__X____,
	________,
//  66 $42 'B'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXX_____,
	X__X____,
	XXX_____,
	X__X____,
	X__X____,
	XXX_____,
	________,
//  67 $43 'C'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X_______,
	X_______,
	X__X____,
	_XX_____,
	________,
//  68 $44 'D'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXX_____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	XXX_____,
	________,
//  69 $45 'E'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXXX____,
	X_______,
	XXX_____,
	X_______,
	X_______,
	XXXX____,
	________,
//  70 $46 'F'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXXX____,
	X_______,
	XXX_____,
	X_______,
	X_______,
	X_______,
	________,
//  71 $47 'G'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X_______,
	X_XX____,
	X__X____,
	_XXX____,
	________,
//  72 $48 'H'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	X__X____,
	XXXX____,
	X__X____,
	X__X____,
	X__X____,
	________,
//  73 $49 'I'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
//  74 $4a 'J'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	___X____,
	___X____,
	___X____,
	___X____,
	X__X____,
	_XX_____,
	________,
//  75 $4b 'K'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	X_X_____,
	XX______,
	XX______,
	X_X_____,
	X__X____,
	________,
//  76 $4c 'L'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X_______,
	X_______,
	X_______,
	X_______,
	X_______,
	XXXX____,
	________,
//  77 $4d 'M'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	XXXX____,
	XXXX____,
	X__X____,
	X__X____,
	X__X____,
	________,
//  78 $4e 'N'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	XX_X____,
	XX_X____,
	X_XX____,
	X_XX____,
	X__X____,
	________,
//  79 $4f 'O'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	________,
//  80 $50 'P'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXX_____,
	X__X____,
	X__X____,
	XXX_____,
	X_______,
	X_______,
	________,
//  81 $51 'Q'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	X__X____,
	XX_X____,
	_XX_____,
	___X____,
//  82 $52 'R'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXX_____,
	X__X____,
	X__X____,
	XXX_____,
	X_X_____,
	X__X____,
	________,
//  83 $53 'S'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	_X______,
	__X_____,
	X__X____,
	_XX_____,
	________,
//  84 $54 'T'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
//  85 $55 'U'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	________,
//  86 $56 'V'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	_XX_____,
	________,
//  87 $57 'W'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	X__X____,
	X__X____,
	XXXX____,
	XXXX____,
	X__X____,
	________,
//  88 $58 'X'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	X__X____,
	_XX_____,
	_XX_____,
	X__X____,
	X__X____,
	________,
//  89 $59 'Y'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	_X_X____,
	_X_X____,
	__X_____,
	__X_____,
	__X_____,
	________,
//  90 $5a 'Z'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXXX____,
	___X____,
	__X_____,
	_X______,
	X_______,
	XXXX____,
	________,
//  91 $5b 'bracketleft'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	_X______,
	_X______,
	_X______,
	_X______,
	_XXX____,
	________,
//  92 $5c 'backslash'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	X_______,
	_X______,
	__X_____,
	___X____,
	________,
	________,
//  93 $5d 'bracketright'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	___X____,
	___X____,
	___X____,
	___X____,
	_XXX____,
	________,
//  94 $5e 'asciicircum'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X_X____,
	________,
	________,
	________,
	________,
	________,
//  95 $5f 'underscore'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	________,
	________,
	XXXX____,
	________,
//  96 $60 'grave'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	__X_____,
	________,
	________,
	________,
	________,
	________,
//  97 $61 'a'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_XXX____,
	X__X____,
	X_XX____,
	_X_X____,
	________,
//  98 $62 'b'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X_______,
	X_______,
	XXX_____,
	X__X____,
	X__X____,
	XXX_____,
	________,
//  99 $63 'c'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_XX_____,
	X_______,
	X_______,
	_XX_____,
	________,
// 100 $64 'd'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	___X____,
	___X____,
	_XXX____,
	X__X____,
	X__X____,
	_XXX____,
	________,
// 101 $65 'e'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_XX_____,
	X_XX____,
	XX______,
	_XX_____,
	________,
// 102 $66 'f'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X_X____,
	_X______,
	XXX_____,
	_X______,
	_X______,
	________,
// 103 $67 'g'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_XXX____,
	X__X____,
	_XX_____,
	X_______,
	_XXX____,
// 104 $68 'h'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X_______,
	X_______,
	XXX_____,
	X__X____,
	X__X____,
	X__X____,
	________,
// 105 $69 'i'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	________,
	_XX_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
// 106 $6a 'j'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	___X____,
	________,
	___X____,
	___X____,
	___X____,
	_X_X____,
	__X_____,
// 107 $6b 'k'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X_______,
	X_______,
	X_X_____,
	XX______,
	X_X_____,
	X__X____,
	________,
// 108 $6c 'l'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
// 109 $6d 'm'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	X_X_____,
	XXXX____,
	X__X____,
	X__X____,
	________,
// 110 $6e 'n'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	XXX_____,
	X__X____,
	X__X____,
	X__X____,
	________,
// 111 $6f 'o'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_XX_____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 112 $70 'p'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	XXX_____,
	X__X____,
	X__X____,
	XXX_____,
	X_______,
// 113 $71 'q'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_XXX____,
	X__X____,
	X__X____,
	_XXX____,
	___X____,
// 114 $72 'r'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	XXX_____,
	X__X____,
	X_______,
	X_______,
	________,
// 115 $73 's'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_XXX____,
	XX______,
	__XX____,
	XXX_____,
	________,
// 116 $74 't'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	_X______,
	XXX_____,
	_X______,
	_X______,
	__XX____,
	________,
// 117 $75 'u'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	X__X____,
	X__X____,
	X__X____,
	_XXX____,
	________,
// 118 $76 'v'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_X_X____,
	_X_X____,
	_X_X____,
	__X_____,
	________,
// 119 $77 'w'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	X__X____,
	X__X____,
	XXXX____,
	XXXX____,
	________,
// 120 $78 'x'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	X__X____,
	_XX_____,
	_XX_____,
	X__X____,
	________,
// 121 $79 'y'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	X__X____,
	X__X____,
	_X_X____,
	__X_____,
	_X______,
// 122 $7a 'z'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	XXXX____,
	__X_____,
	_X______,
	XXXX____,
	________,
// 123 $7b 'braceleft'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	___X____,
	__X_____,
	_XX_____,
	__X_____,
	__X_____,
	___X____,
	________,
// 124 $7c 'bar'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
// 125 $7d 'braceright'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	__X_____,
	__XX____,
	__X_____,
	__X_____,
	_X______,
	________,
// 126 $7e 'asciitilde'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	X_X_____,
	________,
	________,
	________,
	________,
	________,
// 160 $a0 'space'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 161 $a1 'exclamdown'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	________,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
// 162 $a2 'cent'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	__X_____,
	_XXX____,
	X_X_____,
	X_X_____,
	_XXX____,
	__X_____,
// 163 $a3 'sterling'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	__XX____,
	_X______,
	XXX_____,
	_X______,
	X_XX____,
	________,
// 164 $a4 'currency'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	X___X___,
	_XXX____,
	_X_X____,
	_XXX____,
	X___X___,
	________,
// 165 $a5 'yen'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	_X_X____,
	__X_____,
	_XXX____,
	__X_____,
	__X_____,
	________,
// 166 $a6 'brokenbar'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	__X_____,
	__X_____,
	________,
	__X_____,
	__X_____,
	________,
// 167 $a7 'section'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__XX____,
	_X______,
	_XX_____,
	_X_X____,
	__XX____,
	___X____,
	_XX_____,
// 168 $a8 'dieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	________,
	________,
	________,
	________,
	________,
	________,
// 169 $a9 'copyright'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	X___X___,
	X_X_X___,
	XX__X___,
	X_X_X___,
	X___X___,
	_XXX____,
// 170 $aa 'ordfeminine'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X_X_____,
	_XX_____,
	________,
	________,
	________,
	________,
// 171 $ab 'guillemotleft'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_X__X___,
	X__X____,
	_X__X___,
	________,
	________,
// 172 $ac 'logicalnot'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	XXXX____,
	___X____,
	________,
	________,
// 173 $ad 'hyphen'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	_XXX____,
	________,
	________,
	________,
// 174 $ae 'registered'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	X___X___,
	XXX_X___,
	XX__X___,
	XX__X___,
	X___X___,
	_XXX____,
// 175 $af 'macron'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXXX____,
	________,
	________,
	________,
	________,
	________,
	________,
// 176 $b0 'degree'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X_X____,
	__X_____,
	________,
	________,
	________,
	________,
// 177 $b1 'plusminus'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	__X_____,
	XXXXX___,
	__X_____,
	__X_____,
	XXXXX___,
	________,
// 178 $b2 'twosuperior'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	__X_____,
	_X______,
	_XX_____,
	________,
	________,
	________,
// 179 $b3 'threesuperior'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	_XX_____,
	__X_____,
	_XX_____,
	________,
	________,
	________,
// 180 $b4 'acute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X______,
	________,
	________,
	________,
	________,
	________,
// 181 $b5 'mu'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	X__X____,
	X__X____,
	X__X____,
	XXX_____,
	X_______,
// 182 $b6 'paragraph'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	XX_X____,
	XX_X____,
	_X_X____,
	_X_X____,
	_X_X____,
	________,
// 183 $b7 'periodcentered'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_XX_____,
	_XX_____,
	________,
	________,
	________,
// 184 $b8 'cedilla'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	________,
	________,
	__X_____,
	_X______,
// 185 $b9 'onesuperior'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_XX_____,
	__X_____,
	_XXX____,
	________,
	________,
	________,
// 186 $ba 'ordmasculine'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	X_X_____,
	_X______,
	________,
	________,
	________,
	________,
// 187 $bb 'guillemotright'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	X__X____,
	_X__X___,
	X__X____,
	________,
	________,
// 188 $bc 'onequarter'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X_______,
	X_______,
	X_______,
	X__X____,
	__XX____,
	_XXX____,
	___X____,
// 189 $bd 'onehalf'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X_______,
	X_______,
	X_______,
	X_XX____,
	___X____,
	__X_____,
	__XX____,
// 190 $be 'threequarters'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XX______,
	XX______,
	_X______,
	XX_X____,
	__XX____,
	_XXX____,
	___X____,
// 191 $bf 'questiondown'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	________,
	__X_____,
	_X______,
	_X_X____,
	__X_____,
	________,
// 192 $c0 'Agrave'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	XXXX____,
	X__X____,
	X__X____,
	________,
// 193 $c1 'Aacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	XXXX____,
	X__X____,
	X__X____,
	________,
// 194 $c2 'Acircumflex'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	XXXX____,
	X__X____,
	X__X____,
	________,
// 195 $c3 'Atilde'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	XXXX____,
	X__X____,
	X__X____,
	________,
// 196 $c4 'Adieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	_XX_____,
	X__X____,
	XXXX____,
	X__X____,
	X__X____,
	________,
// 197 $c5 'Aring'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	_XX_____,
	X__X____,
	XXXX____,
	X__X____,
	X__X____,
	________,
// 198 $c6 'AE'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	X_X_____,
	X_XX____,
	XXX_____,
	X_X_____,
	X_XX____,
	________,
// 199 $c7 'Ccedilla'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X_______,
	X_______,
	X__X____,
	_XX_____,
	_X______,
// 200 $c8 'Egrave'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXXX____,
	X_______,
	XXX_____,
	X_______,
	X_______,
	XXXX____,
	________,
// 201 $c9 'Eacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXXX____,
	X_______,
	XXX_____,
	X_______,
	X_______,
	XXXX____,
	________,
// 202 $ca 'Ecircumflex'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXXX____,
	X_______,
	XXX_____,
	X_______,
	X_______,
	XXXX____,
	________,
// 203 $cb 'Edieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXXX____,
	X_______,
	XXX_____,
	X_______,
	X_______,
	XXXX____,
	________,
// 204 $cc 'Igrave'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
// 205 $cd 'Iacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
// 206 $ce 'Icircumflex'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
// 207 $cf 'Idieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
// 208 $d0 'Eth'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	XXX_____,
	_X_X____,
	XX_X____,
	_X_X____,
	_X_X____,
	XXX_____,
	________,
// 209 $d1 'Ntilde'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X_XX____,
	X__X____,
	XX_X____,
	X_XX____,
	X_XX____,
	X__X____,
	________,
// 210 $d2 'Ograve'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 211 $d3 'Oacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 212 $d4 'Ocircumflex'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 213 $d5 'Otilde'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 214 $d6 'Odieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	_XX_____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 215 $d7 'multiply'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	X__X____,
	_XX_____,
	_XX_____,
	X__X____,
	________,
// 216 $d8 'Oslash'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XXX____,
	X_XX____,
	X_XX____,
	XX_X____,
	XX_X____,
	XXX_____,
	________,
// 217 $d9 'Ugrave'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 218 $da 'Uacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 219 $db 'Ucircumflex'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 220 $dc 'Udieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X__X____,
	________,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 221 $dd 'Yacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	_X_X____,
	_X_X____,
	__X_____,
	__X_____,
	__X_____,
	________,
// 222 $de 'Thorn'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X_______,
	XXX_____,
	X__X____,
	XXX_____,
	X_______,
	X_______,
	________,
// 223 $df 'germandbls'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	X__X____,
	X_X_____,
	X__X____,
	X__X____,
	X_X_____,
	________,
// 224 $e0 'agrave'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	__X_____,
	_XXX____,
	X__X____,
	X_XX____,
	_X_X____,
	________,
// 225 $e1 'aacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X______,
	_XXX____,
	X__X____,
	X_XX____,
	_X_X____,
	________,
// 226 $e2 'acircumflex'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X_X____,
	_XXX____,
	X__X____,
	X_XX____,
	_X_X____,
	________,
// 227 $e3 'atilde'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	X_X_____,
	_XXX____,
	X__X____,
	X_XX____,
	_X_X____,
	________,
// 228 $e4 'adieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	________,
	_XXX____,
	X__X____,
	X_XX____,
	_X_X____,
	________,
// 229 $e5 'aring'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	_XX_____,
	_XXX____,
	X__X____,
	X_XX____,
	_X_X____,
	________,
// 230 $e6 'ae'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_XXX____,
	X_XX____,
	X_X_____,
	_XXX____,
	________,
// 231 $e7 'ccedilla'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	__XX____,
	_X______,
	_X______,
	__XX____,
	__X_____,
// 232 $e8 'egrave'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	__X_____,
	_XX_____,
	X_XX____,
	XX______,
	_XX_____,
	________,
// 233 $e9 'eacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X______,
	_XX_____,
	X_XX____,
	XX______,
	_XX_____,
	________,
// 234 $ea 'ecircumflex'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	X_X_____,
	_XX_____,
	X_XX____,
	XX______,
	_XX_____,
	________,
// 235 $eb 'edieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	X_X_____,
	________,
	_XX_____,
	X_XX____,
	XX______,
	_XX_____,
	________,
// 236 $ec 'igrave'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	__X_____,
	_XX_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
// 237 $ed 'iacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X______,
	_XX_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
// 238 $ee 'icircumflex'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X_X____,
	_XX_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
// 239 $ef 'idieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	________,
	_XX_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
// 240 $f0 'eth'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	__XX____,
	_XX_____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 241 $f1 'ntilde'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	X_X_____,
	XXX_____,
	X__X____,
	X__X____,
	X__X____,
	________,
// 242 $f2 'ograve'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	__X_____,
	_XX_____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 243 $f3 'oacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X______,
	_XX_____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 244 $f4 'ocircumflex'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	________,
	_XX_____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 245 $f5 'otilde'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	X_X_____,
	_XX_____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 246 $f6 'odieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	________,
	_XX_____,
	X__X____,
	X__X____,
	_XX_____,
	________,
// 247 $f7 'divide'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	_XX_____,
	________,
	XXXX____,
	________,
	_XX_____,
	________,
// 248 $f8 'oslash'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	_XXX____,
	X_XX____,
	XX_X____,
	XXX_____,
	________,
// 249 $f9 'ugrave'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X______,
	__X_____,
	X__X____,
	X__X____,
	X__X____,
	_XXX____,
	________,
// 250 $fa 'uacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X______,
	X__X____,
	X__X____,
	X__X____,
	_XXX____,
	________,
// 251 $fb 'ucircumflex'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_XX_____,
	________,
	X__X____,
	X__X____,
	X__X____,
	_XXX____,
	________,
// 252 $fc 'udieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	________,
	X__X____,
	X__X____,
	X__X____,
	_XXX____,
	________,
// 253 $fd 'yacute'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	__X_____,
	_X______,
	X__X____,
	X__X____,
	_X_X____,
	__X_____,
	_X______,
// 254 $fe 'thorn'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	________,
	X_______,
	XXX_____,
	X__X____,
	X__X____,
	XXX_____,
	X_______,
// 255 $ff 'ydieresis'
//	width 5, bbx 0, bby -1, bbw 5, bbh 7
	_X_X____,
	________,
	X__X____,
	X__X____,
	_X_X____,
	__X_____,
	_X______,
};


/// character encoding for each index entry
const unsigned char apple_index[] PROGMEM = {
    0,
    32,
    33,
    34,
    35,
    36,
    37,
    38,
    39,
    40,
    41,
    42,
    43,
    44,
    45,
    46,
    47,
    48,
    49,
    50,
    51,
    52,
    53,
    54,
    55,
    56,
    57,
    58,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68,
    69,
    70,
    71,
    72,
    73,
    74,
    75,
    76,
    77,
    78,
    79,
    80,
    81,
    82,
    83,
    84,
    85,
    86,
    87,
    88,
    89,
    90,
    91,
    92,
    93,
    94,
    95,
    96,
    97,
    98,
    99,
    100,
    101,
    102,
    103,
    104,
    105,
    106,
    107,
    108,
    109,
    110,
    111,
    112,
    113,
    114,
    115,
    116,
    117,
    118,
    119,
    120,
    121,
    122,
    123,
    124,
    125,
    126,
    160,
    161,
    162,
    163,
    164,
    165,
    166,
    167,
    168,
    169,
    170,
    171,
    172,
    173,
    174,
    175,
    176,
    177,
    178,
    179,
    180,
    181,
    182,
    183,
    184,
    185,
    186,
    187,
    188,
    189,
    190,
    191,
    192,
    193,
    194,
    195,
    196,
    197,
    198,
    199,
    200,
    201,
    202,
    203,
    204,
    205,
    206,
    207,
    208,
    209,
    210,
    211,
    212,
    213,
    214,
    215,
    216,
    217,
    218,
    219,
    220,
    221,
    222,
    223,
    224,
    225,
    226,
    227,
    228,
    229,
    230,
    231,
    232,
    233,
    234,
    235,
    236,
    237,
    238,
    239,
    240,
    241,
    242,
    243,
    244,
    245,
    246,
    247,
    248,
    249,
    250,
    251,
    252,
    253,
    254,
    255,
};

const unsigned char apple6x10_bitmap[] PROGMEM = {
//   0 $00 'char0'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_X_X___,
	________,
	X___X___,
	________,
	X___X___,
	________,
	X_X_X___,
	________,
	________,
//  32 $20 'space'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
//  33 $21 'exclam'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	__X_____,
	________,
	________,
//  34 $22 'quotedbl'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	_X_X____,
	_X_X____,
	________,
	________,
	________,
	________,
	________,
	________,
//  35 $23 'numbersign'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	_X_X____,
	XXXXX___,
	_X_X____,
	XXXXX___,
	_X_X____,
	_X_X____,
	________,
	________,
//  36 $24 'dollar'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_XXX____,
	X_X_____,
	_XXX____,
	__X_X___,
	_XXX____,
	__X_____,
	________,
	________,
//  37 $25 'percent'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X__X___,
	X_X_X___,
	_X_X____,
	__X_____,
	_X_X____,
	X_X_X___,
	X__X____,
	________,
	________,
//  38 $26 'ampersand'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X______,
	X_X_____,
	X_X_____,
	_X______,
	X_X_X___,
	X__X____,
	_XX_X___,
	________,
	________,
//  39 $27 'quotesingle'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
	________,
	________,
	________,
	________,
//  40 $28 'parenleft'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	___X____,
	__X_____,
	_X______,
	_X______,
	_X______,
	__X_____,
	___X____,
	________,
	________,
//  41 $29 'parenright'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X______,
	__X_____,
	___X____,
	___X____,
	___X____,
	__X_____,
	_X______,
	________,
	________,
//  42 $2a 'asterisk'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	X___X___,
	_X_X____,
	XXXXX___,
	_X_X____,
	X___X___,
	________,
	________,
	________,
//  43 $2b 'plus'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	__X_____,
	XXXXX___,
	__X_____,
	__X_____,
	________,
	________,
	________,
//  44 $2c 'comma'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	__XX____,
	__X_____,
	_X______,
	________,
//  45 $2d 'hyphen'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	XXXXX___,
	________,
	________,
	________,
	________,
	________,
//  46 $2e 'period'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	__X_____,
	_XXX____,
	__X_____,
	________,
//  47 $2f 'slash'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	____X___,
	____X___,
	___X____,
	__X_____,
	_X______,
	X_______,
	X_______,
	________,
	________,
//  48 $30 'zero'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_X_X____,
	X___X___,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,
	________,
	________,
//  49 $31 'one'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_XX_____,
	X_X_____,
	__X_____,
	__X_____,
	__X_____,
	XXXXX___,
	________,
	________,
//  50 $32 'two'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	____X___,
	__XX____,
	_X______,
	X_______,
	XXXXX___,
	________,
	________,
//  51 $33 'three'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	____X___,
	___X____,
	__XX____,
	____X___,
	X___X___,
	_XXX____,
	________,
	________,
//  52 $34 'four'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	___X____,
	__XX____,
	_X_X____,
	X__X____,
	XXXXX___,
	___X____,
	___X____,
	________,
	________,
//  53 $35 'five'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	X_______,
	X_XX____,
	XX__X___,
	____X___,
	X___X___,
	_XXX____,
	________,
	________,
//  54 $36 'six'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XX____,
	_X______,
	X_______,
	X_XX____,
	XX__X___,
	X___X___,
	_XXX____,
	________,
	________,
//  55 $37 'seven'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	____X___,
	___X____,
	___X____,
	__X_____,
	_X______,
	_X______,
	________,
	________,
//  56 $38 'eight'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X___X___,
	_XXX____,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
//  57 $39 'nine'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X__XX___,
	_XX_X___,
	____X___,
	___X____,
	_XX_____,
	________,
	________,
//  58 $3a 'colon'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	_XXX____,
	__X_____,
	________,
	__X_____,
	_XXX____,
	__X_____,
	________,
//  59 $3b 'semicolon'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	_XXX____,
	__X_____,
	________,
	__XX____,
	__X_____,
	_X______,
	________,
//  60 $3c 'less'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	____X___,
	___X____,
	__X_____,
	_X______,
	__X_____,
	___X____,
	____X___,
	________,
	________,
//  61 $3d 'equal'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	XXXXX___,
	________,
	XXXXX___,
	________,
	________,
	________,
	________,
//  62 $3e 'greater'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X______,
	__X_____,
	___X____,
	____X___,
	___X____,
	__X_____,
	_X______,
	________,
	________,
//  63 $3f 'question'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	___X____,
	__X_____,
	__X_____,
	________,
	__X_____,
	________,
	________,
//  64 $40 'at'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X__XX___,
	X_X_X___,
	X_XX____,
	X_______,
	_XXX____,
	________,
	________,
//  65 $41 'A'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_X_X____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
//  66 $42 'B'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXX____,
	_X__X___,
	_X__X___,
	_XXX____,
	_X__X___,
	_X__X___,
	XXXX____,
	________,
	________,
//  67 $43 'C'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X_______,
	X_______,
	X_______,
	X___X___,
	_XXX____,
	________,
	________,
//  68 $44 'D'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	XXXX____,
	________,
	________,
//  69 $45 'E'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
//  70 $46 'F'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	X_______,
	________,
	________,
//  71 $47 'G'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X_______,
	X_______,
	X__XX___,
	X___X___,
	_XXX____,
	________,
	________,
//  72 $48 'H'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	X___X___,
	________,
	________,
//  73 $49 'I'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
//  74 $4a 'J'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XXX___,
	___X____,
	___X____,
	___X____,
	___X____,
	X__X____,
	_XX_____,
	________,
	________,
//  75 $4b 'K'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X__X____,
	X_X_____,
	XX______,
	X_X_____,
	X__X____,
	X___X___,
	________,
	________,
//  76 $4c 'L'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	X_______,
	X_______,
	X_______,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
//  77 $4d 'M'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	XX_XX___,
	X_X_X___,
	X___X___,
	X___X___,
	X___X___,
	________,
	________,
//  78 $4e 'N'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	XX__X___,
	X_X_X___,
	X__XX___,
	X___X___,
	X___X___,
	________,
	________,
//  79 $4f 'O'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
//  80 $50 'P'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXX____,
	X___X___,
	X___X___,
	XXXX____,
	X_______,
	X_______,
	X_______,
	________,
	________,
//  81 $51 'Q'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X_X_X___,
	_XXX____,
	____X___,
	________,
//  82 $52 'R'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXX____,
	X___X___,
	X___X___,
	XXXX____,
	X_X_____,
	X__X____,
	X___X___,
	________,
	________,
//  83 $53 'S'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X_______,
	_XXX____,
	____X___,
	X___X___,
	_XXX____,
	________,
	________,
//  84 $54 'T'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
//  85 $55 'U'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
//  86 $56 'V'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	X___X___,
	_X_X____,
	_X_X____,
	_X_X____,
	__X_____,
	________,
	________,
//  87 $57 'W'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	X___X___,
	X_X_X___,
	X_X_X___,
	XX_XX___,
	X___X___,
	________,
	________,
//  88 $58 'X'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,
	_X_X____,
	X___X___,
	X___X___,
	________,
	________,
//  89 $59 'Y'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
//  90 $5a 'Z'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXXX___,
	____X___,
	___X____,
	__X_____,
	_X______,
	X_______,
	XXXXX___,
	________,
	________,
//  91 $5b 'bracketleft'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	_XXX____,
	________,
	________,
//  92 $5c 'backslash'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	X_______,
	_X______,
	__X_____,
	___X____,
	____X___,
	____X___,
	________,
	________,
//  93 $5d 'bracketright'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	_XXX____,
	________,
	________,
//  94 $5e 'asciicircum'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_X_X____,
	X___X___,
	________,
	________,
	________,
	________,
	________,
	________,
//  95 $5f 'underscore'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	XXXXX___,
	________,
//  96 $60 'grave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	___X____,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
//  97 $61 'a'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
//  98 $62 'b'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	X_______,
	X_XX____,
	XX__X___,
	X___X___,
	XX__X___,
	X_XX____,
	________,
	________,
//  99 $63 'c'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	X___X___,
	X_______,
	X___X___,
	_XXX____,
	________,
	________,
// 100 $64 'd'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	____X___,
	____X___,
	_XX_X___,
	X__XX___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 101 $65 'e'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	X___X___,
	XXXXX___,
	X_______,
	_XXX____,
	________,
	________,
// 102 $66 'f'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XX____,
	_X__X___,
	_X______,
	XXXX____,
	_X______,
	_X______,
	_X______,
	________,
	________,
// 103 $67 'g'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
    ________,
	________,
	_XXXX___,
	X___X___,
	X___X___,
	_XXXX___,
	____X___,
	X___X___,
	_XXX____,
	________,
// 104 $68 'h'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	X_______,
	X_XX____,
	XX__X___,
	X___X___,
	X___X___,
	X___X___,
	________,
	________,
// 105 $69 'i'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 106 $6a 'j'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	____X___,
	________,
    ___XX___,
	____X___,
	____X___,
	____X___,
	_X__X___,
	__XX____,
    ________,
// 107 $6b 'k'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	X_______,
	X___X___,
	X__X____,
	XXX_____,
	X__X____,
	X___X___,
	________,
	________,
// 108 $6c 'l'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 109 $6d 'm'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	XX_X____,
	X_X_X___,
	X_X_X___,
	X_X_X___,
	X___X___,
	________,
	________,
// 110 $6e 'n'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X_XX____,
	XX__X___,
	X___X___,
	X___X___,
	X___X___,
	________,
	________,
// 111 $6f 'o'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 112 $70 'p'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
    ________,
	________,
	X_XX____,
	XX__X___,
	X___X___,
	XX__X___,
	X_XX____,
	X_______,
	X_______,
	________,
// 113 $71 'q'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
    ________,
	_XX_X___,
	X__XX___,
	X___X___,
	X__XX___,
	_XX_X___,
	____X___,
	____X___,
	________,
// 114 $72 'r'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X_XX____,
	XX__X___,
	X_______,
	X_______,
	X_______,
	________,
	________,
// 115 $73 's'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	X_______,
	_XXX____,
	____X___,
	XXXX____,
	________,
	________,
// 116 $74 't'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X______,
	_X______,
	XXXX____,
	_X______,
	_X______,
	_X__X___,
	__XX____,
	________,
	________,
// 117 $75 'u'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 118 $76 'v'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	X___X___,
	_X_X____,
	_X_X____,
	__X_____,
	________,
	________,
// 119 $77 'w'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	X___X___,
	X_X_X___,
	X_X_X___,
	_X_X____,
	________,
	________,
// 120 $78 'x'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	_X_X____,
	__X_____,
	_X_X____,
	X___X___,
	________,
	________,
// 121 $79 'y'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
    ________,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	____X___,
	X___X___,
	_XXX____,
	________,
// 122 $7a 'z'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	XXXXX___,
	___X____,
	__X_____,
	_X______,
	XXXXX___,
	________,
	________,
// 123 $7b 'braceleft'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	___XX___,
	__X_____,
	___X____,
	_XX_____,
	___X____,
	__X_____,
	___XX___,
	________,
	________,
// 124 $7c 'bar'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
// 125 $7d 'braceright'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XX_____,
	___X____,
	__X_____,
	___XX___,
	__X_____,
	___X____,
	_XX_____,
	________,
	________,
// 126 $7e 'asciitilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X__X___,
	X_X_X___,
	X__X____,
	________,
	________,
	________,
	________,
	________,
	________,
// 160 $a0 'space'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 161 $a1 'exclamdown'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	________,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
// 162 $a2 'cent'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	_XXXX___,
	X_X_____,
	X_X_____,
	X_X_____,
	_XXXX___,
	__X_____,
	________,
// 163 $a3 'sterling'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XX____,
	_X__X___,
	_X______,
	XXX_____,
	_X______,
	_X__X___,
	X_XX____,
	________,
	________,
// 164 $a4 'currency'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	_XXX____,
	_X_X____,
	_XXX____,
	X___X___,
	________,
	________,
// 165 $a5 'yen'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,
	XXXXX___,
	__X_____,
	__X_____,
	__X_____,
	________,
// 166 $a6 'brokenbar'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	__X_____,
	__X_____,
	________,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
// 167 $a7 'section'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X_______,
	XXX_____,
	X__X____,
	_X__X___,
	__XXX___,
	____X___,
	_XXX____,
	________,
// 168 $a8 'dieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 169 $a9 'copyright'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X_X_X___,
	XX__X___,
	X_X_X___,
	X___X___,
	_XXX____,
	________,
	________,
// 170 $aa 'ordfeminine'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XXX___,
	_X__X___,
	_X_XX___,
	__X_X___,
	________,
	_XXXX___,
	________,
	________,
	________,
// 171 $ab 'guillemotleft'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	__X__X__,
	_X__X___,
	X__X____,
	_X__X___,
	__X__X__,
	________,
	________,
// 172 $ac 'logicalnot'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	_XXXX___,
	____X___,
	________,
	________,
	________,
	________,
// 173 $ad 'hyphen'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	_XXXX___,
	________,
	________,
	________,
	________,
	________,
// 174 $ae 'registered'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	XXX_X___,
	XX__X___,
	XX__X___,
	X___X___,
	_XXX____,
	________,
	________,
// 175 $af 'macron'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	XXXXX___,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 176 $b0 'degree'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	_X_X____,
	__X_____,
	________,
	________,
	________,
	________,
	________,
	________,
// 177 $b1 'plusminus'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	__X_____,
	XXXXX___,
	__X_____,
	__X_____,
	XXXXX___,
	________,
	________,
// 178 $b2 'twosuperior'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__XX____,
	_X__X___,
	___X____,
	__X_____,
	_XXXX___,
	________,
	________,
	________,
	________,
	________,
// 179 $b3 'threesuperior'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_XXX____,
	____X___,
	__XX____,
	____X___,
	_XXX____,
	________,
	________,
	________,
	________,
	________,
// 180 $b4 'acute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 181 $b5 'mu'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	X___X___,
	X___X___,
	XX__X___,
	X_XX____,
	X_______,
	________,
// 182 $b6 'paragraph'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXXX___,
	XXX_X___,
	XXX_X___,
	_XX_X___,
	__X_X___,
	__X_X___,
	__X_X___,
	________,
	________,
// 183 $b7 'periodcentered'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	__X_____,
	________,
	________,
	________,
	________,
	________,
// 184 $b8 'cedilla'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	___X____,
	__X_____,
// 185 $b9 'onesuperior'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_XX_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
	________,
	________,
	________,
// 186 $ba 'ordmasculine'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XX____,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	_XXXX___,
	________,
	________,
	________,
// 187 $bb 'guillemotright'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X__X____,
	_X__X___,
	__X__X__,
	_X__X___,
	X__X____,
	________,
	________,
// 188 $bc 'onequarter'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	XX______,
	_X______,
	_X______,
	XXX__X__,
	____XX__,
	___X_X__,
	__XXXX__,
	_____X__,
	________,
// 189 $bd 'onehalf'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	XX______,
	_X______,
	_X______,
	XXX_X___,
	___X_X__,
	_____X__,
	____X___,
	___XXX__,
	________,
// 190 $be 'threequarters'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	XX______,
	__X_____,
	_X______,
	__X_____,
	XX__X___,
	___XX___,
	__X_X___,
	_XXXX___,
	____X___,
	________,
// 191 $bf 'questiondown'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__X_____,
	________,
	__X_____,
	__X_____,
	_X______,
	X___X___,
	_XXX____,
	________,
	________,
// 192 $c0 'Agrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 193 $c1 'Aacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 194 $c2 'Acircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 195 $c3 'Atilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X__X___,
	X_XX____,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 196 $c4 'Adieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 197 $c5 'Aring'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	_XXX____,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	________,
	________,
// 198 $c6 'AE'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	__XXXX__,
	_X_X____,
	X__X____,
	X__XXX__,
	XXXX____,
	X__X____,
	X__XXX__,
	________,
	________,
// 199 $c7 'Ccedilla'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X_______,
	X_______,
	X_______,
	X___X___,
	_XXX____,
	__X_____,
	_X______,
// 200 $c8 'Egrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
// 201 $c9 'Eacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
// 202 $ca 'Ecircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
// 203 $cb 'Edieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	XXXXX___,
	________,
	________,
// 204 $cc 'Igrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 205 $cd 'Iacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 206 $ce 'Icircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 207 $cf 'Idieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	________,
	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 208 $d0 'Eth'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XXXX____,
	_X__X___,
	_X__X___,
	XXX_X___,
	_X__X___,
	_X__X___,
	XXXX____,
	________,
	________,
// 209 $d1 'Ntilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_X___,
	_X_X____,
	X___X___,
	XX__X___,
	X_X_X___,
	X__XX___,
	X___X___,
	X___X___,
	________,
	________,
// 210 $d2 'Ograve'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 211 $d3 'Oacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 212 $d4 'Ocircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 213 $d5 'Otilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_X___,
	_X_X____,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 214 $d6 'Odieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 215 $d7 'multiply'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	X___X___,
	_X_X____,
	__X_____,
	_X_X____,
	X___X___,
	________,
	________,
// 216 $d8 'Oslash'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X__XX___,
	X__XX___,
	X_X_X___,
	XX__X___,
	XX__X___,
	_XXX____,
	________,
	________,
// 217 $d9 'Ugrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 218 $da 'Uacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 219 $db 'Ucircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 220 $dc 'Udieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X_X____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 221 $dd 'Yacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
// 222 $de 'Thorn'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	X_______,
	XXXX____,
	X___X___,
	XXXX____,
	X_______,
	X_______,
	X_______,
	________,
	________,
// 223 $df 'germandbls'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_XXX____,
	X___X___,
	X__X____,
	X_X_____,
	X__X____,
	X___X___,
	X_XX____,
	________,
	________,
// 224 $e0 'agrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 225 $e1 'aacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 226 $e2 'acircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 227 $e3 'atilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_X___,
	_X_X____,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 228 $e4 'adieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 229 $e5 'aring'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	__X_____,
	_XXX____,
	____X___,
	_XXXX___,
	X___X___,
	_XXXX___,
	________,
	________,
// 230 $e6 'ae'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXXX___,
	___X_X__,
	_XXXXX__,
	X__X____,
	_XXXXX__,
	________,
	________,
// 231 $e7 'ccedilla'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXX____,
	X___X___,
	X_______,
	X___X___,
	_XXX____,
	__X_____,
	_X______,
// 232 $e8 'egrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	________,
	_XXX____,
	X___X___,
	XXXXX___,
	X_______,
	_XXX____,
	________,
	________,
// 233 $e9 'eacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	________,
	_XXX____,
	X___X___,
	XXXXX___,
	X_______,
	_XXX____,
	________,
	________,
// 234 $ea 'ecircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	_XXX____,
	X___X___,
	XXXXX___,
	X_______,
	_XXX____,
	________,
	________,
// 235 $eb 'edieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	_XXX____,
	X___X___,
	XXXXX___,
	X_______,
	_XXX____,
	________,
	________,
// 236 $ec 'igrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 237 $ed 'iacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X______,
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 238 $ee 'icircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 239 $ef 'idieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	_XXX____,
	________,
	________,
// 240 $f0 'eth'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	XX______,
	__XX____,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 241 $f1 'ntilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_X___,
	_X_X____,
	________,
	X_XX____,
	XX__X___,
	X___X___,
	X___X___,
	X___X___,
	________,
	________,
// 242 $f2 'ograve'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 243 $f3 'oacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 244 $f4 'ocircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 245 $f5 'otilde'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_X___,
	_X_X____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 246 $f6 'odieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,
	________,
	________,
// 247 $f7 'divide'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	__X_____,
	________,
	XXXXX___,
	________,
	__X_____,
	________,
	________,
	________,
// 248 $f8 'oslash'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	________,
	_XXXX___,
	X__XX___,
	X_X_X___,
	XX__X___,
	XXXX____,
	________,
	________,
// 249 $f9 'ugrave'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	_X______,
	__X_____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 250 $fa 'uacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	___X____,
	__X_____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 251 $fb 'ucircumflex'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	__X_____,
	_X_X____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 252 $fc 'udieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	X___X___,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	________,
	________,
// 253 $fd 'yacute'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	___X____,
	__X_____,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	____X___,
	X___X___,
	_XXX____,
// 254 $fe 'thorn'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	________,
	X_______,
	XXXX____,
	X___X___,
	X___X___,
	X___X___,
	XXXX____,
	X_______,
	X_______,
// 255 $ff 'ydieresis'
//	width 6, bbx 0, bby -2, bbw 6, bbh 10
	________,
	_X_X____,
	________,
	X___X___,
	X___X___,
	X__XX___,
	_XX_X___,
	____X___,
	X___X___,
	_XXX____,
};


/// character encoding for each index entry
 const unsigned char apple6x10_index[] PROGMEM = {
//const unsigned int apple6x10_index[] PROGMEM = {
	0,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
	93,
	94,
	95,
	96,
	97,
	98,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	120,
	121,
	122,
	123,
	124,
	125,
	126,
	160,
	161,
	162,
	163,
	164,
	165,
	166,
	167,
	168,
	169,
	170,
	171,
	172,
	173,
	174,
	175,
	176,
	177,
	178,
	179,
	180,
	181,
	182,
	183,
	184,
	185,
	186,
	187,
	188,
	189,
	190,
	191,
	192,
	193,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205,
	206,
	207,
	208,
	209,
	210,
	211,
	212,
	213,
	214,
	215,
	216,
	217,
	218,
	219,
	220,
	221,
	222,
	223,
	224,
	225,
	226,
	227,
	228,
	229,
	230,
	231,
	232,
	233,
	234,
	235,
	236,
	237,
	238,
	239,
	240,
	241,
	242,
	243,
	244,
	245,
	246,
	247,
	248,
	249,
	250,
	251,
	252,
	253,
	254,
	255,
	// 256,
	// 257,
	// 258,
	// 259,
	// 260,
	// 261,
	// 262,
	// 263,
	// 264,
	// 265,
	// 266,
	// 267,
	// 268,
	// 269,
	// 270,
	// 271,
	// 272,
	// 273,
	// 274,
	// 275,
	// 276,
	// 277,
	// 278,
	// 279,
	// 280,
	// 281,
	// 282,
	// 283,
	// 284,
	// 285,
	// 286,
	// 287,
	// 288,
	// 289,
	// 290,
	// 291,
	// 292,
	// 293,
	// 294,
	// 295,
	// 296,
	// 297,
	// 298,
	// 299,
	// 300,
	// 301,
	// 302,
	// 303,
	// 304,
	// 305,
	// 306,
	// 307,
	// 308,
	// 309,
	// 310,
	// 311,
	// 312,
	// 313,
	// 314,
	// 315,
	// 316,
	// 317,
	// 318,
	// 319,

};

const unsigned char Pix5x7_bitmap[] PROGMEM ={
    ________,
    X_X_____,
    ________,
    X_X_____,
    ________,
    X_X_____,
    ________,

    ________,
    ________,
    ________,
    ________,
    ________,
    ________,
    ________,

    _XXX____,
    X___X___,
    X___X___,
    X___X___,
    X___X___,
    X___X___,
    _XXX____,

    __X_____,
    XXX_____,
    __X_____,
    __X_____,
    __X_____,
    __X_____,
    XXXXX___,

    _XXX____,
    X___X___,
    ____X___,
    ___X____,
    __X_____,
    _X______,
    XXXXX___,

    _XXX____,
    X___X___,
    ____X___,
    __XX____,
    ____X___,
    X___X___,
    _XXX____,

    ____X___,
    ___XX___,
    __X_X___,
    _X__X___,
    XXXXX___,
    ____X___,
    ____X___,

    XXXXX___,
    X_______,
    X_______,
    XXXX____,
    ____X___,
    X___X___,
    _XXX____,

    _XXX____,
    X___X___,
    X_______,
    XXXX____,
    X___X___,
    X___X___,
    _XXX____,

    XXXXX___,
    ____X___,
    ___X____,
    __X_____,
    _X______,
    _X______,
    _X______,

    _XXX____,
    X___X___,
    X___X___,
    _XXX____,
    X___X___,
    X___X___,
    _XXX____,

    _XXX____,
    X___X___,
    X___X___,
    _XXXX___,
    ____X___,
    X___X___,
    _XXX____,

    _XXX____,
    X___X___,
    X___X___,
    XXXXX___,
    X___X___,
    X___X___,
    X___X___,

    XXXX____,
    X___X___,
    X___X___,
    XXXX____,
    X___X___,
    X___X___,
    XXXX____,

    _XXX____,
    X___X___,
    X_______,
    X_______,
    X_______,
    X___X___,
    _XXX____,

    XXXX____,
    X___X___,
    X___X___,
    X___X___,
    X___X___,
    X___X___,
    XXXX____,

    XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	XXXXX___,

	XXXXX___,
	X_______,
	X_______,
	XXXX____,
	X_______,
	X_______,
	X_______,

    _XXX____,
	X___X___,
	X_______,
	X_XXX___,
	X___X___,
	X___X___,
	_XXXX___,

    X___X___,
	X___X___,
	X___X___,
	XXXXX___,
	X___X___,
	X___X___,
	X___X___,

	_XXX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	XXXXX___,

    _XXXX___,
	____X___,
	____X___,
	____X___,
	____X___,
	X___X___,
	_XXX____,

	X___X___,
	X__X____,
	X_X_____,
	XX______,
	X_X_____,
	X__X____,
	X___X___,

	X_______,
	X_______,
	X_______,
	X_______,
	X_______,
	X_______,
	XXXXX___,

    XX_XX___,
	X_X_X___,
	X_X_X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,

    X___X___,
	X___X___,
	XX__X___,
	X_X_X___,
	X__XX___,
	X___X___,
	X___X___,

	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,

	XXXX____,
	X___X___,
	X___X___,
	XXXX____,
	X_______,
	X_______,
	X_______,

	_XXX____,
	X___X___,
	X___X___,
	X___X___,
	X_X_X___,
	X__X____,
	_XX_X___,

	XXXX____,
	X___X___,
	X___X___,
	XXXX____,
	X_X_____,
	X__X____,
	X___X___,

    _XXX____,
	X___X___,
	X_______,
	_XXX____,
	____X___,
	X___X___,
	_XXX____,

	XXXXX___,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,

	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_XXX____,

	X___X___,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,

	X___X___,
	X___X___,
	X_X_X___,
	X_X_X___,
	X_X_X___,
	X_X_X___,
	_X_X____,

	X___X___,
	_X_X____,
	__X_____,
	__X_____,
	__X_____,
	_X_X____,
	X___X___,

	X___X___,
	X___X___,
    X___X___,
	_X_X____,
	__X_____,
	__X_____,
	__X_____,

	XXXXX___,
	____X___,
	___X____,
	__X_____,
	_X______,
	X_______,
	XXXXX___,

	________,
	_XX_____,
    ___X____,
	_XXX____,
	X__X____,
	X__X____,
	_XX_____,

	X_______,
	X_______,
	XXX_____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,

	________,
	_XX_____,
	X__X____,
	X_______,
	X_______,
	X__X____,
	_XX_____,

	___X____,
	___X____,
	_XXX____,
	X__X____,
    X__X____,
	X__X____,
	_XX_____,

	________,
	_XX_____,
	X__X____,
    X__X____,
	XXXX____,
	X_______,
	_XX_____,

	__XX____,
	_X______,
    _X______,
    XXX_____,
	_X______,
	_X______,
	_X______,

	________,
	_XX_____,
	X__X____,
	X__X____,
	_XXX____,
	___X____,
	_XX_____,

	X_______,
	X_______,
	XXX_____,
	X__X____,
    X__X____,
	X__X____,
	X__X____,

	__X_____,
	________,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
    ___X____,

    ___X____,
	________,
	__XX____,
	___X____,
	___X____,
	X__X____,
	_XX_____,

	X_______,
	X_______,
	X__X____,
	X_X_____,
	XX______,
	X_X_____,
	X__X____,

	XX______,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	__X_____,

    ________,
	_X_X____,
	X_X_X___,
	X_X_X___,
	X_X_X___,
    X_X_X___,
    X_X_X___,

    ________,
	_XX_____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,

    ________,
	_XX_____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,

	________,
	_XX_____,
	X__X____,
	X__X____,
	XXX_____,
	X_______,
	X_______,

    ________,
	_XX_____,
	X__X____,
	X__X____,
	_XXX____,
	___X____,
	___X____,

    ________,
	X_XX____,
	XX______,
	X_______,
	X_______,
	X_______,
    X_______,

    ________,
	_XX_____,
	X__X____,
	_X______,
	__X_____,
	X__X____,
	_XX_____,

	________,
	_X______,
	_X______,
	XXXX____,
	_X______,
	_X______,
	__XX____,

	________,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	X__X____,
	_XX_____,

	________,
	X___X___,
	X___X___,
	X___X___,
	X___X___,
	_X_X____,
	__X_____,

    ________,
	X___X___,
	X_X_X___,
	X_X_X___,
	X_X_X___,
	X_X_X___,
	_X_X____,

    ________,
	X___X___,
	_X_X____,
    __X_____,
	__X_____,
	_X_X____,
	X___X___,

    ________,
	X__X____,
	X__X____,
	X__X____,
    _XXX____,
    ___X____,
    _XX_____,

	________,
	XXXX____,
	___X____,
	__X_____,
	_X______,
	X_______,
	XXXX____,

    _XXX____,
    X___X___,
    ____X___,
    __XX____,
    _X______,
    ________,
    _X______,

    __X_____,
    __X_____,
    __X_____,
    __X_____,
    __X_____,
    ________,
    __X_____,

    _XX_____,
    X__X____,
    X_X_____,
    _X______,
    X_X_X___,
    X__X____,
    _XX_X___,

    _XXX____,
    X___X___,
    X__XX___,
    X_X_X___,
    X_X_X___,
    X__X____,
    _X______,

    _XXX____,
    X_X_X___,
    X_X_____,
    _XXX____,
    __X_X___,
    X_X_X___,
    _XXX____,

    __XX____,
    _X__X___,
    _X______,
    XXXX____,
    _X______,
    _X__X___,
    __XX____,
};

const unsigned char Pix5x7_index[] PROGMEM ={
    0,
    32,
    48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
    97,
    98,
    99,
    100,
    101,
    102,
    103,
    104,
    105,
    106,
    107,
    108,
    109,
    110,
    111,
    112,
    113,
    114,
    115,
    116,
    117,
    118,
    119,
    120,
    121,
    122,
    63,
    33,
    38,
    64,
    24,
    155,
};

const unsigned char Atari8x8_bitmap[] PROGMEM= {

    ________,
    X_X_X_X_,
    ________,
    X_X_X_X_,
    ________,
    X_X_X_X_,
    ________,
    X_X_X_X_,

    ________,
    ________,
    ________,
    ________,
    ________,
    ________,
    ________,
    ________,

    ___XXX__,  
    __X__XX_,
    _XX___XX,
    _XX___XX,
    _XX___XX,
    __XX__XX,
    ___XXXX_,
    ________,

    ____XX__,  
    ___XXX__,
    ____XX__,
    ____XX__,
    ____XX__,
    ____XX__,
    __XXXXXX,
    ________,

    __XXXXX_,  
    _XX___XX,
    _____XXX,
    ___XXXX_,
    __XXXX__,
    _XXX____,
    _XXXXXXX,
    ________,

    __XXXXXX,  
    _____XX_,
    ____XX__,
    __XXXXX_,
    ______XX,
    _XX___XX,
    __XXXXX_,
    ________,

    _____XX_,  
    ___XXXX_,
    __XX_XX_,
    _XX__XX_,
    _XXXXXXX,
    _____XX_,
    _____XX_,
    ________,

    _XXXXXX_,  
    _XX_____,
    _XXXXXX_,
    ______XX,
    ______XX,
    _XX___XX,
    __XXXXX_,
    ________,

    ___XXXX_,  
    __XX____,
    _XX_____,
    _XXXXXX_,
    _XX___XX,
    _XX___XX,
    __XXXXX_,
    ________,

    _XXXXXXX,  
    _XX___XX,
    _____XX_,
    ____XX__,
    ___XX___,
    ___XX___,
    ___XX___,
    ________,

    __XXXX__,  
    _XX___X_,
    _XXX__X_,
    __XXXX__,
    _X__XXXX,
    _X____XX,
    __XXXXX_,
    ________,

    __XXXXX_,  
    _XX___XX,
    _XX___XX,
    __XXXXXX,
    ______XX,
    _____XX_,
    __XXXX__,
    ________,

    ___XXX__,
    __XX_XX_,
    _XX___XX,
    _XX___XX,
    _XXXXXXX,
    _XX___XX,
    _XX___XX,
    ________,

    _XXXXXX_,
    _XX___XX,
    _XX___XX,
    _XXXXXX_,
    _XX___XX,
    _XX___XX,
    _XXXXXX_,
    ________,

    ___XXXX_,
    __XX__XX,
    _XX_____,
    _XX_____,
    _XX_____,
    __XX__XX,
    ___XXXX_,
    ________,

    _XXXXX__,
    _XX__XX_,
    _XX___XX,
    _XX___XX,
    _XX___XX,
    _XX__XX_,
    _XXXXX__,
    ________,    
    
    __XXXXXX,
    __XX____,
    __XX____,
    __XXXXX_,
    __XX____,
    __XX____,
    __XXXXXX,
    ________,  

    _XXXXXXX,
    _XX_____,
    _XX_____,
    _XXXXXX_,
    _XX_____,
    _XX_____,
    _XX_____,
    ________,   

    ___XXXXX,
    __XX____,
    _XX_____,
    _XX__XXX,
    _XX___XX,
    __XX__XX,
    ___XXXXX,
    ________,   

    _XX___XX,
    _XX___XX,
    _XX___XX,
    _XXXXXXX,
    _XX___XX,
    _XX___XX,
    _XX___XX,
    ________,   

    __XXXXXX,  
    ____XX__,
    ____XX__,
    ____XX__,
    ____XX__,
    ____XX__,
    __XXXXXX,
    ________,

    ______XX,  
    ______XX,
    ______XX,
    ______XX,
    ______XX,
    _XX___XX,
    __XXXXX_,
    ________,

    _XX___XX,  
    _XX__XX_,
    _XX_XX__,
    _XXXX___,
    _XXXXX__,
    _XX_XXX_,
    _XX__XXX,
    ________,

    __XX____,  
    __XX____,
    __XX____,
    __XX____,
    __XX____,
    __XX____,
    __XXXXXX,
    ________,

    _XX___XX,  
    _XXX_XXX,
    _XXXXXXX,
    _XXXXXXX,
    _XX_X_XX,
    _XX___XX,
    _XX___XX,
    ________,

    _XX___XX,  
    _XXX__XX,
    _XXXX_XX,
    _XXXXXXX,
    _XX_XXXX,
    _XX__XXX,
    _XX___XX,
    ________,

    __XXXXX_,  
    _XX___XX,
    _XX___XX,
    _XX___XX,
    _XX___XX,
    _XX___XX,
    __XXXXX_,
    ________,

    _XXXXXX_,  
    _XX___XX,
    _XX___XX,
    _XX___XX,
    _XXXXXX_,
    _XX_____,
    _XX_____,
    ________,

    __XXXXX_,  
    _XX___XX,
    _XX___XX,
    _XX___XX,
    _XX_XXXX,
    _XX__XX_,
    __XXXX_X,
    ________,

    _XXXXXX_,  
    _XX___XX,
    _XX___XX,
    _XX__XXX,
    _XXXXX__,
    _XX_XXX_,
    _XX__XXX,
    ________,

    __XXXX__,  
    _XX__XX_,
    _XX_____,
    __XXXXX_,
    ______XX,
    _XX___XX,
    __XXXXX_,
    ________,

    __XXXXXX,  
    ____XX__,
    ____XX__,
    ____XX__,
    ____XX__,
    ____XX__,
    ____XX__,
    ________,

    _XX___XX,  
    _XX___XX,
    _XX___XX,
    _XX___XX,
    _XX___XX,
    _XX___XX,
    __XXXXX_,
    ________,

    _XX___XX,  
    _XX___XX,
    _XX___XX,
    _XXX_XXX,
    __XXXXX_,
    ___XXX__,
    ____X___,
    ________,

    _XX___XX,  
    _XX___XX,
    _XX_X_XX,
    _XXXXXXX,
    _XXXXXXX,
    _XXX_XXX,
    _XX___XX,
    ________,

    _XX___XX,  
    _XXX_XXX,
    __XXXXX_,
    ___XXX__,
    __XXXXX_,
    _XXX_XXX,
    _XX___XX,
    ________,

    __XX__XX,  
    __XX__XX,
    __XX__XX,
    ___XXXX_,
    ____XX__,
    ____XX__,
    ____XX__,
    ________,

    _XXXXXXX,  
    _____XXX,
    ____XXX_,
    ___XXX__,
    __XXX___,
    _XXX____,
    _XXXXXXX,
    ________,
};

const unsigned char Atari8x8_index[] PROGMEM ={
    0,
    32,
    48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
};

const unsigned char Undertale8x8_bitmap[] PROGMEM = {
    ________,
    X_X_X_X_,
    ________,
    X_X_X_X_,
    ________,
    X_X_X_X_,
    ________,
    X_X_X_X_,

    ________,
    ________,
    ________,
    ________,
    ________,
    ________,
    ________,
    ________,


    __XXX___,
    __X_X___,
    __X_X___,
    __X_X___,
    __XXX___,
    __X_X___,
    __XXX___,
    ________,

    _XXXXX__,
    _X_X_X__,
    _X_X_X__,
    _XXXXX__,
    ________,
    ________,
    ________,
    ________,

    _XXXXX__,
    XX_X_XX_,
    X_____X_,
    XX_X_XX_,
    X_____X_,
    XX_X_XX_,
    _XXXXX__,
    ________,

    _XXXXXX_,
    XX____X_,
    X_X_XXX_,
    XX___XX_,
    XXX_X_X_,
    X____XX_,
    XXXXXX__,
    ________,

    XXXXXXX_,
    X__XX_X_,
    X_XX_XX_,
    XXX_XXX_,
    XX_XX_X_,
    X_XX__X_,
    XXXXXXX_,
    ________,

    _XXXXX__,
    _X___X__,
    XX_X_XX_,
    X___X_X_,
    X_XX_XX_,
    X___X_X_,
    XXXXXXX_,
    ________,

    __XXX___,
    __X_X___,
    __X_X___,
    __XXX___,
    ________,
    ________,
    ________,
    ________,

    ___XXX__,
    __XX_X__,
    __X_XX__,
    __X_X___,
    __X_XX__,
    __XX_X__,
    ___XXX__,
    ________,

    __XXX___,
    __X_XX__,
    __XX_X__,
    ___X_X__,
    __XX_X__,
    __X_XX__,
    __XXX___,
    ________,

    XXX_XXX_,
    X_XXX_X_,
    XX_X_XX_,
    X_____X_,
    XX_X_XX_,
    X_XXX_X_,
    XXX_XXX_,
    ________,

    __XXX___,
    __X_X___,
    XXX_XXX_,
    X_____X_,
    XXX_XXX_,
    __X_X___,
    __XXX___,
    ________,

    ________,
    ________,
    ________,
    XXX_____,
    X_XX____,
    XX_X____,
    _XXX____,
    ________,

    ________,
    ________,
    XXXXXXX_,
    X_____X_,
    XXXXXXX_,
    ________,
    ________,
    ________,

    ________,
    ________,
    ________,
    ________,
    __XXX___,
    __X_X___,
    __XXX___,
    ________,

    ___XXX__,
    ___X_X__,
    __XX_X__,
    _XX_XX__,
    _X_XX___,
    _X_X____,
    _XXX____,
    ________,

    XXXXXXX_,
    X_____X_,
    X_XXX_X_,
    X_XXX_X_,
    X_XXX_X_,
    X_____X_,
    XXXXXXX_,
    ________,

    __XXXX__,
    __X__X__,
    __XX_X__,
    ___X_X__,
    ___X_X__,
    ___X_X__,
    ___XXX__,
    ________,

    XXXXXXX_,
    X_____X_,
    XXXXX_X_,
    X_____X_,
    X_XXXXX_,
    X_____X_,
    XXXXXXX_,
    ________,

    XXXXXXX_,
    X_____X_,
    XXXXX_X_,
    X_____X_,
    XXXXX_X_,
    X_____X_,
    XXXXXXX_,
    ________,

    XXX_XXX_,
    X_X_X_X_,
    X_XXX_X_,
    X_____X_,
    XXXXX_X_,
    ____X_X_,
    ____XXX_,
    ________,

    XXXXXXX_,
    X_____X_,
    X_XXXXX_,
    X_____X_,
    XXXXX_X_,
    X_____X_,
    XXXXXXX_,
    ________,

    XXXXXXX_,
    X_____X_,
    X_XXXXX_,
    X_____X_,
    X_XXX_X_,
    X_____X_,
    XXXXXXX_,
    ________,

    XXXXXXX_,
    X_____X_,
    X_XXX_X_,
    XXX_X_X_,
    ____X_X_,
    ____X_X_,
    ____XXX_,
    ________,

    XXXXXXX_,
    X_____X_,
    X_XXX_X_,
    X_____X_,
    X_XXX_X_,
    X_____X_,
    XXXXXXX_,
    ________,

    XXXXXXX_,
    X_____X_,
    X_XXX_X_,
    X_____X_,
    XXXXX_X_,
    X_____X_,
    XXXXXXX_,
    ________,

    ________,
    __XXX___,
    __X_X___,
    __XXX___,
    __X_X___,
    __XXX___,
    ________,
    ________,

    ________,
    __XXX___,
    __X_X___,
    __XXX___,
    __X_X___,
    __X_X___,
    __XXX___,
    ________,

    ___XXX__,
    __XX_X__,
    _XX_XX__,
    _X_XX___,
    _XX_XX__,
    __XX_X__,
    ___XXX__,
    ________,

    ________,
    XXXXXXX_,
    X_____X_,
    XXXXXXX_,
    X_____X_,
    XXXXXXX_,
    ________,
    ________,

    _XXX____,
    _X_XX___,
    _XX_XX__,
    __XX_X__,
    _XX_XX__,
    _X_XX___,
    _XXX____,
    ________,

    _XXXXX__,
    XX___XX_,
    X_XXX_X_,
    XXX__XX_,
    __XXXX__,
    __X_X___,
    __XXX___,
    ________,

    _XXXXX__,
    XX___XX_,
    X_X_X_X_,
    X_X___X_,
    X_XXX_X_,
    XX__XXX_,
    _XXXX___,
    ________,

    _XXXXX__,
    XX___XX_,
    X_XXX_X_,
    X_____X_,
    X_XXX_X_,
    X_X_X_X_,
    XXX_XXX_,
    ________,

    XXXXXX__,
    X____XX_,
    X_XXX_X_,
    X____XX_,
    X_XXX_X_,
    X____XX_,
    XXXXXX__,
    ________,

    _XXXXXX_,
    XX____X_,
    X_XXXXX_,
    X_X_____,
    X_XXXXX_,
    XX____X_,
    _XXXXXX_,
    ________,

    XXXXXX__,
    X____XX_,
    X_XXX_X_,
    X_X_X_X_,
    X_XXX_X_,
    X____XX_,
    XXXXXX__,
    ________,

    XXXXXXX_,
    X_____X_,
    X_XXXXX_,
    X_____X_,
    X_XXXXX_,
    X_____X_,
    XXXXXXX_,
    ________,

    XXXXXXX_,
    X_____X_,
    X_XXXXX_,
    X_____X_,
    X_XXXXX_,
    X_X_____,
    XXX_____,
    ________,

    XXXXXXX_,
    X_____X_,
    X_XXXXX_,
    X_X___X_,
    X_XXX_X_,
    X_____X_,
    XXXXXXX_,
    ________,

    XXX_XXX_,
    X_X_X_X_,
    X_XXX_X_,
    X_____X_,
    X_XXX_X_,
    X_X_X_X_,
    XXX_XXX_,
    ________,

    _XXXXX__,
    _X___X__,
    _XX_XX__,
    __X_X___,
    _XX_XX__,
    _X___X__,
    _XXXXX__,
    ________,

    __XXXXX_,
    __X___X_,
    __XX_XX_,
    XXXX_X__,
    X_XX_X__,
    XX__XX__,
    _XXXX___,
    ________,

    XXX_XXX_,
    X_XXX_X_,
    X_XX_XX_,
    X___XX__,
    X_XX_XX_,
    X_XXX_X_,
    XXX_XXX_,
    ________,

    XXX_____,
    X_X_____,
    X_X_____,
    X_X_XXX_,
    X_XXX_X_,
    X_____X_,
    XXXXXXX_,
    ________,

    XXX_XXX_,
    X_XXX_X_,
    X__X__X_,
    X_X_X_X_,
    X_XXX_X_,
    X_XXX_X_,
    XXX_XXX_,
    ________,

    XXX_XXX_,
    X_XXX_X_,
    X__XX_X_,
    X_X_X_X_,
    X_XX__X_,
    X_XXX_X_,
    XXX_XXX_,
    ________,

    _XXXXX__,
    XX___XX_,
    X_XXX_X_,
    X_X_X_X_,
    X_XXX_X_,
    XX___XX_,
    _XXXXX__,
    ________,

    XXXXXX__,
    X____XX_,
    X_XXX_X_,
    X_XXX_X_,
    X____XX_,
    X_XXXX__,
    XXX_____,
    ________,

    _XXXXX__,
    XX___XX_,
    X_XXX_X_,
    X_X_X_X_,
    X_XX_XX_,
    XX__X_X_,
    _XXXXXX_,
    ________,

    XXXXXX__,
    X_____X_,
    X_XXX_X_,
    X_____X_,
    X_X_XXX_,
    X_XX__X_,
    XXXXXXX_,
    ________,

    _XXXXXX_,
    XX____X_,
    X_XXXXX_,
    XX___XX_,
    XXXXX_X_,
    X____XX_,
    XXXXXX__,
    ________,

    XXXXXXX_,
    X_____X_,
    XXX_XXX_,
    __X_X___,
    __X_X___,
    __X_X___,
    __XXX___,
    ________,

    XXX_XXX_,
    X_X_X_X_,
    X_X_X_X_,
    X_X_X_X_,
    X_XXX_X_,
    XX___XX_,
    _XXXXX__,
    ________,

    XXX_XXX_,
    X_X_X_X_,
    X_X_X_X_,
    X_XXX_X_,
    XX_X_XX_,
    _XX_XX__,
    __XXX___,
    ________,

    XXX_XXX_,
    X_XXX_X_,
    X_XXX_X_,
    X_X_X_X_,
    X__X__X_,
    X_XXX_X_,
    XXX_XXX_,
    ________,

    XXX_XXX_,
    X_XXX_X_,
    XX_X_XX_,
    _XX_XX__,
    XX_X_XX_,
    X_XXX_X_,
    XXX_XXX_,
    ________,

    XXX_XXX_,
    X_XXX_X_,
    XX_X_XX_,
    _XX_XX__,
    __X_X___,
    __X_X___,
    __XXX___,
    ________,

    XXXXXXX_,
    X_____X_,
    XXXX_XX_,
    _XX_XX__,
    XX_XXXX_,
    X_____X_,
    XXXXXXX_,
    ________,

    __XXXX__,
    __X__X__,
    __X_XX__,
    __X_X___,
    __X_XX__,
    __X__X__,
    __XXXX__,
    ________,

    _XXX____,
    _X_X____,
    _X_XX___,
    _XX_XX__,
    __XX_X__,
    ___X_X__,
    ___XXX__,
    ________,

    __XXXX__,
    __X__X__,
    __XX_X__,
    ___X_X__,
    __XX_X__,
    __X__X__,
    __XXXX__,
    ________,

    __XXX___,
    _XX_XX__,
    _X_X_X__,
    _XXXXX__,
    ________,
    ________,
    ________,
    ________,

    ________,
    ________,
    ________,
    ________,
    XXXXXXX_,
    X_____X_,
    XXXXXXX_,
    ________,

    __XXX___,
    __X_XX__,
    __XX_X__,
    ___XXX__,
    ________,
    ________,
    ________,
    ________,

    XXXXXX__,
    X____XX_,
    XXXXX_X_,
    XX____X_,
    X_XXX_X_,
    XX____X_,
    _XXXXXX_,
    ________,

    XXX_____,
    X_XXXX__,
    X____XX_,
    X_XXX_X_,
    X_XXX_X_,
    X____XX_,
    XXXXXX__,
    ________,

    _XXXXX__,
    XX___XX_,
    X_XXX_X_,
    X_X_XXX_,
    X_XXX_X_,
    XX___XX_,
    _XXXXX__,
    ________,

    ____XXX_,
    _XXXX_X_,
    XX____X_,
    X_XXX_X_,
    X_XXX_X_,
    XX____X_,
    _XXXXXX_,
    ________,

    _XXXXX__,
    XX___XX_,
    X_XXX_X_,
    X____XX_,
    X_XXXXX_,
    XX____X_,
    _XXXXXX_,
    ________,

    __XXXX__,
    _XX__XX_,
    XX_XX_X_,
    X___XXX_,
    XX_XX___,
    _X_X____,
    _XXX____,
    ________,

    _XXXXX__,
    XX___XX_,
    X_XXX_X_,
    XX____X_,
    XXXXX_X_,
    X____XX_,
    XXXXXX__,
    ________,

    XXX_____,
    X_X_____,
    X_XXXX__,
    X____XX_,
    X_XXX_X_,
    X_X_X_X_,
    XXX_XXX_,
    ________,

    __XXX___,
    __X_X___,
    __XXX___,
    __X_X___,
    __X_X___,
    __X_X___,
    __XXX___,
    ________,

    ___XXX__,
    ___X_X__,
    ___XXX__,
    ___X_X__,
    _XXX_X__,
    _X__XX__,
    _XXXX___,
    ________,

    XXX_____,
    X_X_XXX_,
    X_X_X_X_,
    X_XXX_X_,
    X____XX_,
    X_XXX_X_,
    XXX_XXX_,
    ________,

    __XXX___,
    __X_X___,
    __X_X___,
    __X_X___,
    __X_XX__,
    __XX_X__,
    ___XXX__,
    ________,

    XXXXXX__,
    X____XX_,
    X_X_X_X_,
    X_X_X_X_,
    X_X_X_X_,
    X_X_X_X_,
    XXXXXXX_,
    ________,

    XXXXXX__,
    X____XX_,
    X_XXX_X_,
    X_X_X_X_,
    X_X_X_X_,
    X_X_X_X_,
    XXX_XXX_,
    ________,

    _XXXXX__,
    XX___XX_,
    X_XXX_X_,
    X_X_X_X_,
    X_XXX_X_,
    XX___XX_,
    _XXXXX__,
    ________,

    XXXXXX__,
    X____XX_,
    X_XXX_X_,
    X____XX_,
    X_XXXX__,
    X_X_____,
    XXX_____,
    ________,

    _XXXXXX_,
    XX____X_,
    X_XXX_X_,
    X_XXX_X_,
    XX____X_,
    _XXXX_X_,
    ____XXX_,
    ________,

    XXXXXX__,
    X_X__XX_,
    X__XX_X_,
    X_XXXXX_,
    X_X_____,
    X_X_____,
    XXX_____,
    ________,

    _XXXXX__,
    XX___X__,
    X_XXXX__,
    XX___XX_,
    _XXXX_X_,
    _X___XX_,
    _XXXXX__,
    ________,

    _XXX____,
    XX_XXX__,
    X____XX_,
    XX_XXXX_,
    _X_XX_X_,
    _XX__XX_,
    __XXXX__,
    ________,

    XXXXXX__,
    X_XX_X__,
    X_XX_X__,
    X_XX_X__,
    X_XX_XX_,
    XX____X_,
    _XXXXXX_,
    ________,

    XXX_XXX_,
    X_X_X_X_,
    X_X_X_X_,
    X_XXX_X_,
    X_X__XX_,
    X__XXX__,
    XXXX____,
    ________,

    XXXXXXX_,
    X_X_X_X_,
    X_X_X_X_,
    X_X_X_X_,
    X_X_X_X_,
    X____XX_,
    XXXXXX__,
    ________,

    XXX_XXX_,
    X_XXX_X_,
    XX_X_XX_,
    _XX_XX__,
    XX_X_XX_,
    X_XXX_X_,
    XXX_XXX_,
    ________,

    XXX_XXX_,
    X_X_X_X_,
    X_XXX_X_,
    XX____X_,
    _XXXX_X_,
    _X___XX_,
    _XXXXX__,
    ________,

    XXXXXXX_,
    X_____X_,
    XXXXX_X_,
    XX___XX_,
    X_XXXXX_,
    X_____X_,
    XXXXXXX_,
    ________,

    __XXXX__,
    __X__X__,
    _XX_XX__,
    _X__X___,
    _XX_XX__,
    __X__X__,
    __XXXX__,
    ________,

    __XXX___,
    __X_X___,
    __X_X___,
    __X_X___,
    __X_X___,
    __X_X___,
    __XXX___,
    ________,

    _XXXX___,
    _X__X___,
    _XX_XX__,
    __X__X__,
    _XX_XX__,
    _X__X___,
    _XXXX___,
    ________,

    _XXXXX__,
    XX_X_X__,
    X_X_XX__,
    XXXXX___,
    ________,
    ________,
    ________,
    ________,
};


const unsigned char Undertale8x8_index[] PROGMEM = {
    0,
    32,
    33,
    34,
    35,
    36,
    37,
    38,
    39,
    40,
    41,
    42,
    43,
    44,
    45,
    46,
    47,
    48,
    49,
    50,
    51,
    52,
    53,
    54,
    55,
    56,
    57,
    58,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68,
    69,
    70,
    71,
    72,
    73,
    74,
    75,
    76,
    77,
    78,
    79,
    80,
    81,
    82,
    83,
    84,
    85,
    86,
    87,
    88,
    89,
    90,
    91,
    92,
    93,
    94,
    95,
    96,
    97,
    98,
    99,
    100,
    101,
    102,
    103,
    104,
    105,
    106,
    107,
    108,
    109,
    110,
    111,
    112,
    113,
    114,
    115,
    116,
    117,
    118,
    119,
    120,
    121,
    122,
    123,
    124,
    125,
    126,
};

const unsigned char Blodnum8x8_bitmap[] = {
    ________,
    X_X_X_X_,
    ________,
    X_X_X_X_,
    ________,
    X_X_X_X_,
    ________,
    X_X_X_X_,

    ________,
    ________,
    ________,
    ________,
    ________,
    ________,
    ________,
    ________,

    __XXXX__,
    _XXXXXX_,
    _XX__XX_,
    _XX__XX_,
    _XX__XX_,
    _XX__XX_,
    _XXXXXX_,
    __XXXX__,

    ___XX___,
    __XXX___,
    __XXX___,
    ___XX___,
    ___XX___,
    ___XX___,
    __XXXX__,
    __XXXX__,

    __XXXX__,
    _XXXXXX_,
    _XX__XX_,
    _____XX_,
    ___XXX__,
    __XXX___,
    _XXXXXX_,
    _XXXXXX_,

    __XXXX__,
    _XXXXXX_,
    _XX__XX_,
    ____XX__,
    ____XXX_,
    _XX__XX_,
    _XXXXXX_,
    __XXXX__,

    __XXXX__,
    __XXXX__,
    _XX_XX__,
    _XX_XX__,
    XXXXXXX_,
    XXXXXXX_,
    ____XX__,
    ____XX__,

    _XXXXX__,
    _XXXXX__,
    _XX_____,
    _XXXXX__,
    _XXXXXX_,
    _____XX_,
    _XXXXXX_,
    _XXXXX__,

    __XXXX__,
    _XXXXX__,
    _XX_____,
    _XXXXX__,
    _XXXXXX_,
    _XX__XX_,
    _XXXXXX_,
    __XXXX__,

    _XXXXXX_,
    _XXXXXX_,
    _____XX_,
    ____XX__,
    ____XX__,
    ___XX___,
    ___XX___,
    ___XX___,

    __XXXX__,
    _XXXXXX_,
    _XX__XX_,
    __XXXX__,
    _XXXXXX_,
    _XX__XX_,
    _XXXXXX_,
    __XXXX__,

    __XXXX__,
    _XXXXXX_,
    _XX__XX_,
    _XXXXXX_,
    __XXXXX_,
    _____XX_,
    __XXXXX_,
    __XXXX__,
};

const unsigned char Blodnum8x8_index[] PROGMEM = {
    0,
    32,
    48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
};

const unsigned char Clock3x5_bitmap[] PROGMEM = {
    _X______,
    ________,
    _X______,
    ________,
    _X______,

    ________,
    ________,
    ________,
    ________,
    ________,

    XXX_____,
    X_X_____,
    X_X_____,
    X_X_____,
    XXX_____,

    _X______,
    XX______,
    _X______,
    _X______,
    XXX_____,

    XXX_____,
    __X_____,
    XXX_____,
    X_______,
    XXX_____,

    XXX_____,
    __X_____,
    XXX_____,
    __X_____,
    XXX_____,

    X_X_____,
    X_X_____,
    XXX_____,
    __X_____,
    __X_____,

    XXX_____,
    X_______,
    XXX_____,
    __X_____,
    XXX_____,

    XXX_____,
    X_______,
    XXX_____,
    X_X_____,
    XXX_____,

    XXX_____,
    __X_____,
    __X_____,
    __X_____,
    __X_____,

    XXX_____,
    X_X_____,
    XXX_____,
    X_X_____,
    XXX_____,

    XXX_____,
    X_X_____,
    XXX_____,
    __X_____,
    XXX_____,

    ________,
    X_______,
    ________,
    X_______,
    ________,

};

const unsigned char Clock3x5_index[] PROGMEM = {
    0,
    32,
    48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
    58,
};

const unsigned char Clock3x4_bitmap[] PROGMEM = {
    X_X_____,
    ________,
    X_X_____,
    ________,

    ________,
    ________,
    ________,
    ________,

    XXX_____,
    X_X_____,
    X_X_____,
    XXX_____,

    _X______,
    XX______,
    _X______,
    XXX_____,

    XX______,
    __X_____,
    _X______,
    XXX_____,

    XX______,
    _XX_____,
    __X_____,
    XX______,

    _XX_____,
    X_X_____,
    XXX_____,
    __X_____,

    XXX_____,
    XX______,
    __X_____,
    XXX_____,

    _X______,
    X_______,
    XXX_____,
    XXX_____,

    XXX_____,
    __X_____,
    _X______,
    _X______,

    XXX_____,
    XXX_____,
    X_X_____,
    XXX_____,

    XXX_____,
    XXX_____,
    __X_____,
    _X______,
};

const unsigned char Clock3x4_index[] PROGMEM = {
    0,
    32,
    48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
};

#endif
