/*******************************************************************************
 * Size: 10 px
 * Bpp: 2
 * Opts: --bpp 2 --size 10 --font C:/Users/maik/SquareLine/assets/Lexend-SemiBold.ttf -o C:/Users/maik/SquareLine/assets\ui_font_Lexend_10.c --format lvgl -r 0x20-0xff --symbols ° --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_LEXEND_10
#define UI_FONT_LEXEND_10 1
#endif

#if UI_FONT_LEXEND_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x71, 0xc7, 0xc, 0x30, 0x3, 0x1c,

    /* U+0022 "\"" */
    0x73, 0x19, 0xc9, 0x60,

    /* U+0023 "#" */
    0xd, 0x30, 0x35, 0xc3, 0xff, 0x87, 0x78, 0x1c,
    0xd2, 0xff, 0xd3, 0x9d, 0xd, 0x30,

    /* U+0024 "$" */
    0x2, 0x1, 0xfc, 0x3b, 0xe7, 0x70, 0x3f, 0x40,
    0xbe, 0x16, 0xf7, 0xfe, 0x2f, 0x80, 0x60,

    /* U+0025 "%" */
    0x3c, 0xd, 0x29, 0x8a, 0xa, 0x63, 0x0, 0xf7,
    0x80, 0x1, 0xcf, 0x0, 0xd6, 0x60, 0xb1, 0x98,
    0x30, 0x3d,

    /* U+0026 "&" */
    0xb, 0xd0, 0xe, 0xa0, 0x1c, 0x0, 0x1f, 0x0,
    0x7b, 0x98, 0x71, 0xf4, 0x74, 0xf4, 0x1f, 0xac,

    /* U+0027 "'" */
    0x71, 0x89, 0x0,

    /* U+0028 "(" */
    0x4, 0x1d, 0x34, 0x70, 0xb0, 0xb0, 0x70, 0x34,
    0x2c, 0x9, 0x0,

    /* U+0029 ")" */
    0x50, 0x74, 0x2c, 0xc, 0xd, 0xd, 0xd, 0x2c,
    0x34, 0xa0, 0x0,

    /* U+002A "*" */
    0x18, 0x1f, 0x87, 0xe0, 0x60,

    /* U+002B "+" */
    0xa, 0x0, 0xa0, 0xbf, 0xd0, 0xe0, 0xa, 0x0,
    0x50,

    /* U+002C "," */
    0x70, 0xd3, 0x0,

    /* U+002D "-" */
    0x0, 0x7f, 0x15,

    /* U+002E "." */
    0x71, 0xc0,

    /* U+002F "/" */
    0x0, 0xd0, 0x1c, 0x3, 0x80, 0x70, 0xa, 0x0,
    0xd0, 0x2c, 0x3, 0x40, 0x70, 0x5, 0x0,

    /* U+0030 "0" */
    0x1f, 0x80, 0xe7, 0x87, 0xb, 0x2c, 0x1c, 0xb0,
    0x71, 0xc2, 0xc3, 0xee, 0x7, 0xe0,

    /* U+0031 "1" */
    0x1e, 0xf, 0x81, 0xe0, 0x38, 0xe, 0x3, 0x82,
    0xf4, 0xff,

    /* U+0032 "2" */
    0x2f, 0x47, 0xbc, 0x21, 0xc0, 0x38, 0xb, 0x1,
    0xd0, 0x3e, 0x87, 0xfd,

    /* U+0033 "3" */
    0x7f, 0xc1, 0xb4, 0xe, 0x1, 0xf4, 0x6, 0xc0,
    0xd, 0xb6, 0xc2, 0xf4,

    /* U+0034 "4" */
    0x2, 0xc0, 0x1f, 0x0, 0xfc, 0xb, 0xb0, 0x76,
    0xc2, 0xff, 0xc1, 0x6d, 0x0, 0xb0,

    /* U+0035 "5" */
    0x3f, 0xc3, 0x94, 0x30, 0x7, 0xf4, 0x26, 0xc0,
    0xd, 0x77, 0xc2, 0xf4,

    /* U+0036 "6" */
    0xe, 0x1, 0xc0, 0x38, 0x7, 0xf8, 0xb5, 0xdb,
    0xd, 0x7a, 0xc2, 0xf4,

    /* U+0037 "7" */
    0xbf, 0xc1, 0x7c, 0x3, 0x80, 0x70, 0xb, 0x0,
    0xd0, 0x1c, 0x3, 0x80,

    /* U+0038 "8" */
    0x1f, 0x43, 0x6c, 0x75, 0xc3, 0xf8, 0x76, 0xcb,
    0xd, 0x7a, 0xd2, 0xf4,

    /* U+0039 "9" */
    0x2f, 0x47, 0x6c, 0xa0, 0xdb, 0x1d, 0x3f, 0xc0,
    0x78, 0x7, 0x0, 0xb0,

    /* U+003A ":" */
    0x71, 0xc0, 0x0, 0x71, 0xc0,

    /* U+003B ";" */
    0x70, 0xc0, 0x0, 0x20, 0xd3, 0x14,

    /* U+003C "<" */
    0x1, 0x42, 0xe7, 0xd1, 0xe0, 0x1f, 0x40, 0xa0,
    0x0,

    /* U+003D "=" */
    0x0, 0x7, 0xfd, 0x15, 0x47, 0xfd, 0x0, 0x0,

    /* U+003E ">" */
    0x10, 0x1f, 0x0, 0xb8, 0x1f, 0x2e, 0xc, 0x0,
    0x0,

    /* U+003F "?" */
    0x2f, 0x2e, 0xe0, 0x2c, 0x2d, 0xd, 0x1, 0x0,
    0xc0, 0x70,

    /* U+0040 "@" */
    0x2, 0xfe, 0x0, 0xd0, 0x18, 0x21, 0xec, 0x82,
    0x36, 0xc8, 0x5b, 0x1c, 0x89, 0xb3, 0x88, 0x93,
    0xef, 0x6, 0x0, 0x0, 0x34, 0x14, 0x0, 0xbe,
    0x0,

    /* U+0041 "A" */
    0x7, 0x40, 0x2e, 0x0, 0xfc, 0x7, 0x34, 0x28,
    0xe0, 0xff, 0xc7, 0x57, 0x78, 0xe,

    /* U+0042 "B" */
    0x3f, 0xe0, 0xe7, 0xc3, 0x4b, 0xf, 0xf8, 0x39,
    0x74, 0xd0, 0xd3, 0x9b, 0x4f, 0xf8,

    /* U+0043 "C" */
    0xb, 0xe0, 0xfa, 0xd7, 0x40, 0x2c, 0x0, 0xb0,
    0x1, 0xd0, 0x3, 0xeb, 0x42, 0xf8,

    /* U+0044 "D" */
    0x3f, 0xe0, 0x3a, 0xb8, 0x34, 0x2c, 0x34, 0x1c,
    0x34, 0x1c, 0x34, 0x2c, 0x3a, 0xb8, 0x3f, 0xe0,

    /* U+0045 "E" */
    0x3f, 0xe3, 0x95, 0x34, 0x3, 0xfc, 0x39, 0x43,
    0x40, 0x39, 0x53, 0xfe,

    /* U+0046 "F" */
    0x3f, 0xe3, 0xa9, 0x34, 0x3, 0x40, 0x3f, 0xc3,
    0x94, 0x34, 0x3, 0x40,

    /* U+0047 "G" */
    0xb, 0xe0, 0x3e, 0xb8, 0x74, 0x0, 0xb0, 0x0,
    0xb0, 0xfd, 0x74, 0x5d, 0x3e, 0xbc, 0xb, 0xe0,

    /* U+0048 "H" */
    0x34, 0x2c, 0xd0, 0xb3, 0x42, 0xce, 0xaf, 0x3f,
    0xfc, 0xd0, 0xb3, 0x42, 0xcd, 0xb,

    /* U+0049 "I" */
    0x7f, 0x87, 0x80, 0xd0, 0x34, 0xd, 0x3, 0x41,
    0xe1, 0xfe,

    /* U+004A "J" */
    0xf, 0xf0, 0x7d, 0x2, 0xc0, 0x2c, 0x2, 0xc0,
    0x2c, 0x7b, 0x82, 0xf0,

    /* U+004B "K" */
    0x34, 0x38, 0x34, 0xe0, 0x3b, 0x80, 0x3f, 0x40,
    0x3f, 0xc0, 0x34, 0xe0, 0x34, 0xb0, 0x34, 0x3c,

    /* U+004C "L" */
    0x34, 0x3, 0x40, 0x34, 0x3, 0x40, 0x34, 0x3,
    0x40, 0x3a, 0x93, 0xfe,

    /* U+004D "M" */
    0x38, 0xf, 0x3c, 0x1f, 0x3e, 0x3f, 0x3b, 0xbb,
    0x37, 0xdb, 0x34, 0xcb, 0x34, 0xb, 0x34, 0xb,

    /* U+004E "N" */
    0x38, 0x1c, 0x3d, 0x1c, 0x3f, 0x1c, 0x3b, 0x9c,
    0x36, 0xec, 0x34, 0xfc, 0x34, 0x3c, 0x34, 0x2c,

    /* U+004F "O" */
    0xb, 0xe0, 0x3e, 0xbc, 0x74, 0x1d, 0xb0, 0xe,
    0xb0, 0xe, 0x74, 0x1d, 0x3e, 0xbc, 0xb, 0xe0,

    /* U+0050 "P" */
    0x3f, 0xc0, 0xeb, 0xc3, 0x47, 0xd, 0x2c, 0x3f,
    0xe0, 0xe9, 0x3, 0x40, 0xd, 0x0,

    /* U+0051 "Q" */
    0xb, 0xe0, 0x3e, 0xbc, 0x74, 0x1d, 0xb0, 0xe,
    0xb0, 0x4e, 0x75, 0xed, 0x3e, 0xfc, 0xb, 0xfc,
    0x0, 0x1c, 0x0, 0x0,

    /* U+0052 "R" */
    0x3f, 0xd0, 0xe7, 0xc3, 0x43, 0x4d, 0x1c, 0x3f,
    0xe0, 0xeb, 0x43, 0x4f, 0xd, 0x1d,

    /* U+0053 "S" */
    0x1f, 0xc3, 0x9e, 0x74, 0x3, 0xf4, 0xb, 0xe1,
    0xf, 0xb9, 0xe2, 0xf8,

    /* U+0054 "T" */
    0xbf, 0xf6, 0xf9, 0xb, 0x0, 0xb0, 0xb, 0x0,
    0xb0, 0xb, 0x0, 0xb0,

    /* U+0055 "U" */
    0x34, 0x28, 0xd0, 0xa3, 0x42, 0x8d, 0xa, 0x34,
    0x28, 0xe0, 0xe2, 0xeb, 0x42, 0xf4,

    /* U+0056 "V" */
    0xb0, 0x2c, 0x70, 0x34, 0x38, 0x70, 0x2c, 0xb0,
    0x1d, 0xd0, 0xf, 0xc0, 0xb, 0x80, 0x7, 0x40,

    /* U+0057 "W" */
    0xf0, 0x0, 0xe7, 0xa, 0xd, 0x34, 0xf1, 0xc3,
    0x9f, 0x6c, 0x2e, 0xab, 0x81, 0xf1, 0xf4, 0xf,
    0xf, 0x0, 0xe0, 0xb0,

    /* U+0058 "X" */
    0xb4, 0x38, 0xf3, 0xc1, 0xfd, 0x2, 0xe0, 0xf,
    0x80, 0x7b, 0x43, 0x8f, 0x2c, 0xe,

    /* U+0059 "Y" */
    0x2c, 0xe, 0xe, 0x2c, 0x7, 0x74, 0x3, 0xf0,
    0x1, 0xd0, 0x1, 0xd0, 0x1, 0xd0, 0x1, 0xd0,

    /* U+005A "Z" */
    0x3f, 0xf0, 0xab, 0xc0, 0x2c, 0x0, 0xe0, 0xf,
    0x0, 0xb4, 0x3, 0xd5, 0x1f, 0xfc,

    /* U+005B "[" */
    0x3e, 0x34, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,
    0x34, 0x3e,

    /* U+005C "\\" */
    0x70, 0x3, 0x40, 0x2c, 0x0, 0xc0, 0xa, 0x0,
    0x70, 0x3, 0x80, 0x1c, 0x0, 0xd0,

    /* U+005D "]" */
    0xbd, 0x1d, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd,
    0x1d, 0xbd,

    /* U+005E "^" */
    0xf, 0x1, 0xf4, 0x36, 0xcb, 0xd,

    /* U+005F "_" */
    0x0, 0x2, 0xff, 0xd0, 0x0, 0x0,

    /* U+0060 "`" */
    0x11, 0xd0, 0x0,

    /* U+0061 "a" */
    0x2f, 0xb7, 0x9f, 0xb0, 0xbb, 0xb, 0x79, 0xf2,
    0xff,

    /* U+0062 "b" */
    0x70, 0x1, 0xc0, 0x7, 0xbc, 0x1f, 0x7c, 0x70,
    0x71, 0xc1, 0xc7, 0xdf, 0x1e, 0xf0,

    /* U+0063 "c" */
    0x1f, 0x87, 0x9c, 0xb0, 0xb, 0x0, 0x79, 0xc1,
    0xf8,

    /* U+0064 "d" */
    0x0, 0xb0, 0xb, 0x2f, 0xf7, 0x9f, 0xb0, 0xbb,
    0xb, 0x79, 0xf2, 0xfb,

    /* U+0065 "e" */
    0x1f, 0x87, 0x5d, 0xbf, 0xeb, 0x0, 0x79, 0xc1,
    0xf8,

    /* U+0066 "f" */
    0x1f, 0xf, 0x4b, 0xe0, 0xe0, 0x38, 0xe, 0x3,
    0x80, 0xe0,

    /* U+0067 "g" */
    0x2f, 0xb7, 0x9f, 0xb0, 0xbb, 0xb, 0x79, 0xf2,
    0xff, 0x15, 0xe2, 0xf8,

    /* U+0068 "h" */
    0x70, 0x7, 0x0, 0x7b, 0xc7, 0x9d, 0x70, 0xe7,
    0xe, 0x70, 0xe7, 0xe,

    /* U+0069 "i" */
    0x11, 0xd0, 0xd, 0x34, 0xd3, 0x4d, 0x34,

    /* U+006A "j" */
    0x4, 0xd, 0x0, 0xd, 0xd, 0xd, 0xd, 0xd,
    0xd, 0x2c, 0x38,

    /* U+006B "k" */
    0x70, 0x1, 0xc0, 0x7, 0x1e, 0x1d, 0xe0, 0x7f,
    0x1, 0xfc, 0x7, 0x2c, 0x1c, 0x38,

    /* U+006C "l" */
    0x71, 0xc7, 0x1c, 0x71, 0xc7, 0x1c,

    /* U+006D "m" */
    0x7b, 0xdf, 0x5e, 0x7d, 0xe7, 0xd, 0x2d, 0xc3,
    0x4b, 0x70, 0xd2, 0xdc, 0x34, 0xb0,

    /* U+006E "n" */
    0x7b, 0xc7, 0x9d, 0x70, 0xe7, 0xe, 0x70, 0xe7,
    0xe,

    /* U+006F "o" */
    0x1f, 0x87, 0x9e, 0xb0, 0xbb, 0xb, 0x79, 0xe1,
    0xf8,

    /* U+0070 "p" */
    0x7b, 0xc1, 0xe7, 0xc7, 0x7, 0x1c, 0x1c, 0x7d,
    0xf1, 0xef, 0x7, 0x0, 0x1c, 0x0,

    /* U+0071 "q" */
    0x2f, 0xf7, 0x9f, 0xb0, 0xbb, 0xb, 0x79, 0xf2,
    0xff, 0x0, 0xb0, 0xb,

    /* U+0072 "r" */
    0x7b, 0x1f, 0x87, 0x1, 0xc0, 0x70, 0x1c, 0x0,

    /* U+0073 "s" */
    0x3f, 0x2c, 0x87, 0x90, 0x6d, 0x63, 0x9f, 0xc0,

    /* U+0074 "t" */
    0x14, 0x38, 0xfe, 0x7d, 0x38, 0x38, 0x38, 0x38,

    /* U+0075 "u" */
    0x70, 0xe7, 0xe, 0x70, 0xe7, 0xe, 0x39, 0xe2,
    0xee,

    /* U+0076 "v" */
    0xb0, 0xe7, 0xc, 0x36, 0xc2, 0xf4, 0xf, 0x0,
    0xe0,

    /* U+0077 "w" */
    0xb0, 0xb, 0x1c, 0xb3, 0x83, 0x7c, 0xd0, 0xfe,
    0xf0, 0x2d, 0x78, 0x3, 0xd, 0x0,

    /* U+0078 "x" */
    0x71, 0xd3, 0xf8, 0xf, 0x0, 0xf0, 0x3b, 0xc7,
    0x1d,

    /* U+0079 "y" */
    0xb0, 0xf1, 0xd3, 0x43, 0x9c, 0x7, 0xe0, 0xf,
    0x0, 0x2c, 0x0, 0xd0, 0x7, 0x0,

    /* U+007A "z" */
    0xbf, 0x85, 0xd0, 0xe0, 0x70, 0x39, 0x2f, 0xf0,

    /* U+007B "{" */
    0x1, 0xf, 0x1c, 0x1c, 0x1c, 0xb4, 0x2c, 0x1c,
    0x1c, 0xe, 0x1,

    /* U+007C "|" */
    0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc0,

    /* U+007D "}" */
    0x0, 0xb0, 0x34, 0x38, 0x28, 0xf, 0x2c, 0x38,
    0x38, 0x74, 0x50,

    /* U+007E "~" */
    0x0, 0x7, 0xcc, 0xab, 0xc0, 0x0,

    /* U+00A0 " " */

    /* U+00A1 "¡" */
    0x70, 0xc0, 0xc, 0x31, 0xc7, 0x1c,

    /* U+00A2 "¢" */
    0x6, 0x1, 0xf8, 0x3a, 0xcb, 0x20, 0xb2, 0x7,
    0xa8, 0x2f, 0xc0, 0xb0,

    /* U+00A3 "£" */
    0xf, 0xc0, 0xb6, 0x3, 0x40, 0x2f, 0xe0, 0x1c,
    0x0, 0x70, 0x7, 0xe6, 0x15, 0xb8,

    /* U+00A4 "¤" */
    0x0, 0x47, 0xfc, 0x36, 0x83, 0x28, 0x7f, 0xc1,
    0x4,

    /* U+00A5 "¥" */
    0x2c, 0xe, 0xe, 0x3c, 0x7, 0xb4, 0x2, 0xe0,
    0x7, 0xf8, 0x1, 0xd0, 0x7, 0xf8, 0x1, 0xd0,

    /* U+00A6 "¦" */
    0x30, 0xc3, 0xc, 0x10, 0x43, 0xc, 0x30, 0xc0,

    /* U+00A7 "§" */
    0x2f, 0x83, 0x98, 0x38, 0x3, 0xf8, 0xb1, 0xd7,
    0xec, 0xb, 0x81, 0x2c, 0x7f, 0x40, 0x0,

    /* U+00A8 "¨" */
    0x22, 0x1c, 0xd0,

    /* U+00A9 "©" */
    0xb, 0xe0, 0x34, 0x18, 0x57, 0xc9, 0x8e, 0x42,
    0x8d, 0x2, 0x57, 0xd9, 0x34, 0x18, 0xb, 0xe0,

    /* U+00AA "ª" */
    0x7d, 0xd9, 0x7d,

    /* U+00AB "«" */
    0x0, 0xd, 0x77, 0x32, 0x9c, 0x36, 0x80, 0x10,

    /* U+00AC "¬" */
    0x0, 0x2, 0xff, 0xd1, 0x57, 0x40, 0xd, 0x0,
    0x10,

    /* U+00AD "­" */
    0x0, 0x7f, 0x15,

    /* U+00AE "®" */
    0x2a, 0x14, 0x29, 0xda, 0x76, 0x66, 0x8a, 0x80,

    /* U+00AF "¯" */
    0x3f, 0x0, 0x0,

    /* U+00B0 "°" */
    0x78, 0xcc, 0xcc, 0x78,

    /* U+00B1 "±" */
    0x5, 0x0, 0xb0, 0x7f, 0xe0, 0xb0, 0xb, 0x1,
    0x54, 0x7f, 0xe0,

    /* U+00B2 "²" */
    0x7c, 0xc, 0x34, 0x7c,

    /* U+00B3 "³" */
    0x7c, 0x34, 0xc, 0x78,

    /* U+00B4 "´" */
    0x11, 0xd0, 0x0,

    /* U+00B5 "µ" */
    0x30, 0xe3, 0xe, 0x30, 0xe3, 0xe, 0x39, 0xe3,
    0xfe, 0x30, 0x2, 0x0,

    /* U+00B6 "¶" */
    0x2f, 0xf9, 0xfc, 0xeb, 0xf3, 0x9f, 0xce, 0x2f,
    0x38, 0x2c, 0xe0, 0xb3, 0x82, 0xce,

    /* U+00B7 "·" */
    0x71, 0xc0,

    /* U+00B8 "¸" */
    0x0, 0xc3, 0x58,

    /* U+00B9 "¹" */
    0x70, 0xc3, 0xc,

    /* U+00BA "º" */
    0x3c, 0x9a, 0x7c,

    /* U+00BB "»" */
    0x0, 0x7, 0x30, 0x39, 0xc2, 0x9c, 0x73, 0x40,
    0x10,

    /* U+00BC "¼" */
    0x74, 0x28, 0x34, 0x70, 0x24, 0xd0, 0x25, 0xc0,
    0x3, 0xc, 0xa, 0x3c, 0x1c, 0x7e, 0x24, 0x8,

    /* U+00BD "½" */
    0x74, 0x28, 0x34, 0x30, 0x24, 0xd0, 0x25, 0xc0,
    0x3, 0x6d, 0xa, 0x16, 0xc, 0x1c, 0x28, 0x3e,

    /* U+00BE "¾" */
    0x78, 0x1c, 0x34, 0x34, 0x1c, 0xa0, 0xb4, 0xc0,
    0x3, 0x8d, 0x7, 0x3d, 0xd, 0x7f, 0x18, 0x9,

    /* U+00BF "¿" */
    0xd, 0x3, 0x40, 0x0, 0x74, 0x78, 0x2c, 0xb,
    0x28, 0xfd, 0x4, 0x0,

    /* U+00C0 "À" */
    0x0, 0x0, 0x2d, 0x0, 0x0, 0x1, 0xd0, 0xb,
    0x80, 0x3f, 0x1, 0xcd, 0xa, 0x38, 0x3f, 0xf1,
    0xd5, 0xde, 0x3, 0x80,

    /* U+00C1 "Á" */
    0x0, 0x40, 0x1e, 0x0, 0x0, 0x1, 0xd0, 0xb,
    0x80, 0x3f, 0x1, 0xcd, 0xa, 0x38, 0x3f, 0xf1,
    0xd5, 0xde, 0x3, 0x80,

    /* U+00C2 "Â" */
    0xb, 0x40, 0x21, 0x0, 0x74, 0x2, 0xe0, 0xf,
    0xc0, 0x73, 0x42, 0x8e, 0xf, 0xfc, 0x75, 0x77,
    0x80, 0xe0,

    /* U+00C3 "Ã" */
    0xf, 0xc0, 0x0, 0x0, 0x74, 0x2, 0xe0, 0xf,
    0xc0, 0x73, 0x42, 0x8e, 0xf, 0xfc, 0x75, 0x77,
    0x80, 0xe0,

    /* U+00C4 "Ä" */
    0x1c, 0xd0, 0x22, 0x0, 0x74, 0x2, 0xe0, 0xf,
    0xc0, 0x73, 0x42, 0x8e, 0xf, 0xfc, 0x75, 0x77,
    0x80, 0xe0,

    /* U+00C5 "Å" */
    0x7, 0x40, 0x26, 0x0, 0x74, 0x2, 0xe0, 0xf,
    0xc0, 0x73, 0x42, 0x8e, 0xf, 0xfc, 0x75, 0x77,
    0x80, 0xe0,

    /* U+00C6 "Æ" */
    0x0, 0x1f, 0xfc, 0x0, 0xf9, 0x50, 0xb, 0xe0,
    0x0, 0x73, 0xfd, 0x3, 0x8e, 0x50, 0x2f, 0xf4,
    0x0, 0xe5, 0xe5, 0x4b, 0x3, 0xff,

    /* U+00C7 "Ç" */
    0xb, 0xe0, 0xfa, 0xd7, 0x40, 0x2c, 0x0, 0xb0,
    0x1, 0xd0, 0x3, 0xeb, 0x42, 0xf8, 0x3, 0x40,
    0x7, 0x0, 0x34, 0x0,

    /* U+00C8 "È" */
    0x4, 0x0, 0xb4, 0x0, 0x3, 0xfe, 0x39, 0x53,
    0x40, 0x3f, 0xc3, 0x94, 0x34, 0x3, 0x95, 0x3f,
    0xe0,

    /* U+00C9 "É" */
    0x0, 0x0, 0x74, 0x0, 0x3, 0xfe, 0x39, 0x53,
    0x40, 0x3f, 0xc3, 0x94, 0x34, 0x3, 0x95, 0x3f,
    0xe0,

    /* U+00CA "Ê" */
    0xb, 0x40, 0x44, 0x3f, 0xe3, 0x95, 0x34, 0x3,
    0xfc, 0x39, 0x43, 0x40, 0x39, 0x53, 0xfe,

    /* U+00CB "Ë" */
    0x1c, 0xc1, 0x88, 0x3f, 0xe3, 0x95, 0x34, 0x3,
    0xfc, 0x39, 0x43, 0x40, 0x39, 0x53, 0xfe,

    /* U+00CC "Ì" */
    0x4, 0x7, 0x80, 0x1, 0xfe, 0x1e, 0x3, 0x40,
    0xd0, 0x34, 0xd, 0x7, 0x87, 0xf8,

    /* U+00CD "Í" */
    0x1, 0x3, 0x80, 0x1, 0xfe, 0x1e, 0x3, 0x40,
    0xd0, 0x34, 0xd, 0x7, 0x87, 0xf8,

    /* U+00CE "Î" */
    0x1e, 0x8, 0x47, 0xf8, 0x78, 0xd, 0x3, 0x40,
    0xd0, 0x34, 0x1e, 0x1f, 0xe0,

    /* U+00CF "Ï" */
    0x33, 0x48, 0x97, 0xf8, 0x78, 0xd, 0x3, 0x40,
    0xd0, 0x34, 0x1e, 0x1f, 0xe0,

    /* U+00D0 "Ð" */
    0x3f, 0xe0, 0x3a, 0xb8, 0x34, 0x2c, 0x34, 0x1c,
    0xbd, 0x1c, 0x38, 0x2c, 0x3a, 0xb8, 0x3f, 0xe0,

    /* U+00D1 "Ñ" */
    0xb, 0xe0, 0x0, 0x0, 0x38, 0x1c, 0x3d, 0x1c,
    0x3f, 0x1c, 0x3b, 0x9c, 0x36, 0xec, 0x34, 0xfc,
    0x34, 0x3c, 0x34, 0x2c,

    /* U+00D2 "Ò" */
    0x0, 0x0, 0x3, 0x80, 0x0, 0x40, 0xb, 0xe0,
    0x3e, 0xbc, 0x74, 0x1d, 0xb0, 0xe, 0xb0, 0xe,
    0x74, 0x1d, 0x3e, 0xbc, 0xb, 0xe0,

    /* U+00D3 "Ó" */
    0x0, 0x0, 0x2, 0xc0, 0x1, 0x0, 0xb, 0xe0,
    0x3e, 0xbc, 0x74, 0x1d, 0xb0, 0xe, 0xb0, 0xe,
    0x74, 0x1d, 0x3e, 0xbc, 0xb, 0xe0,

    /* U+00D4 "Ô" */
    0x3, 0xc0, 0x4, 0x10, 0xb, 0xe0, 0x3e, 0xbc,
    0x74, 0x1d, 0xb0, 0xe, 0xb0, 0xe, 0x74, 0x1d,
    0x3e, 0xbc, 0xb, 0xe0,

    /* U+00D5 "Õ" */
    0xb, 0xe0, 0x0, 0x0, 0xb, 0xe0, 0x3e, 0xbc,
    0x74, 0x1d, 0xb0, 0xe, 0xb0, 0xe, 0x74, 0x1d,
    0x3e, 0xbc, 0xb, 0xe0,

    /* U+00D6 "Ö" */
    0xe, 0x70, 0x9, 0x60, 0xb, 0xe0, 0x3e, 0xbc,
    0x74, 0x1d, 0xb0, 0xe, 0xb0, 0xe, 0x74, 0x1d,
    0x3e, 0xbc, 0xb, 0xe0,

    /* U+00D7 "×" */
    0x0, 0x1d, 0xe2, 0xf0, 0xfc, 0x73, 0x80, 0x0,

    /* U+00D8 "Ø" */
    0x0, 0x0, 0xb, 0xec, 0x3e, 0xbc, 0x74, 0x7d,
    0xb0, 0xce, 0xb3, 0xe, 0x7d, 0x1d, 0x3e, 0xbc,
    0x3b, 0xe0, 0x0, 0x0,

    /* U+00D9 "Ù" */
    0x1, 0x0, 0x1e, 0x0, 0x4, 0xd, 0xa, 0x34,
    0x28, 0xd0, 0xa3, 0x42, 0x8d, 0xa, 0x38, 0x38,
    0xba, 0xd0, 0xbd, 0x0,

    /* U+00DA "Ú" */
    0x0, 0x40, 0xf, 0x0, 0x10, 0xd, 0xa, 0x34,
    0x28, 0xd0, 0xa3, 0x42, 0x8d, 0xa, 0x38, 0x38,
    0xba, 0xd0, 0xbd, 0x0,

    /* U+00DB "Û" */
    0x7, 0x80, 0x11, 0x3, 0x42, 0x8d, 0xa, 0x34,
    0x28, 0xd0, 0xa3, 0x42, 0x8e, 0xe, 0x2e, 0xb4,
    0x2f, 0x40,

    /* U+00DC "Ü" */
    0xd, 0xa0, 0x22, 0x43, 0x42, 0x8d, 0xa, 0x34,
    0x28, 0xd0, 0xa3, 0x42, 0x8e, 0xe, 0x2e, 0xb4,
    0x2f, 0x40,

    /* U+00DD "Ý" */
    0x0, 0x0, 0x1, 0xd0, 0x0, 0x0, 0x2c, 0xe,
    0xe, 0x2c, 0x7, 0x74, 0x3, 0xf0, 0x1, 0xd0,
    0x1, 0xd0, 0x1, 0xd0, 0x1, 0xd0,

    /* U+00DE "Þ" */
    0x34, 0x0, 0xe9, 0x3, 0xfe, 0xd, 0x2c, 0x34,
    0xb0, 0xff, 0x83, 0xa4, 0xd, 0x0,

    /* U+00DF "ß" */
    0xf, 0xc0, 0xb7, 0x8b, 0x9c, 0xe, 0x78, 0x38,
    0x70, 0xe0, 0xd3, 0x97, 0xe, 0xf4,

    /* U+00E0 "à" */
    0x8, 0x0, 0xb0, 0x0, 0x2, 0xfb, 0x79, 0xfb,
    0xb, 0xb0, 0xb7, 0x9f, 0x2f, 0xf0,

    /* U+00E1 "á" */
    0x2, 0x0, 0xb0, 0x0, 0x2, 0xfb, 0x79, 0xfb,
    0xb, 0xb0, 0xb7, 0x9f, 0x2f, 0xf0,

    /* U+00E2 "â" */
    0x5, 0x1, 0x98, 0x0, 0x2, 0xfb, 0x79, 0xfb,
    0xb, 0xb0, 0xb7, 0x9f, 0x2f, 0xf0,

    /* U+00E3 "ã" */
    0x1f, 0xc0, 0x0, 0x2f, 0xb7, 0x9f, 0xb0, 0xbb,
    0xb, 0x79, 0xf2, 0xff,

    /* U+00E4 "ä" */
    0x4, 0x42, 0xdc, 0x0, 0x2, 0xfb, 0x79, 0xfb,
    0xb, 0xb0, 0xb7, 0x9f, 0x2f, 0xf0,

    /* U+00E5 "å" */
    0xb, 0x0, 0xb0, 0x0, 0x2, 0xfb, 0x79, 0xfb,
    0xb, 0xb0, 0xb7, 0x9f, 0x2f, 0xf0,

    /* U+00E6 "æ" */
    0x2f, 0xbe, 0x9, 0xb9, 0xd2, 0xff, 0xfa, 0xc7,
    0x0, 0xb7, 0xf6, 0xf, 0x9f, 0xc0,

    /* U+00E7 "ç" */
    0x1f, 0x87, 0x9c, 0xb0, 0xb, 0x0, 0x79, 0xc1,
    0xf8, 0x9, 0x0, 0x70, 0xd, 0x0,

    /* U+00E8 "è" */
    0x8, 0x0, 0xb0, 0x0, 0x1, 0xf8, 0x75, 0xdb,
    0xfe, 0xb0, 0x7, 0x9c, 0x1f, 0x80,

    /* U+00E9 "é" */
    0x2, 0x0, 0xe0, 0x0, 0x1, 0xf8, 0x75, 0xdb,
    0xfe, 0xb0, 0x7, 0x9c, 0x1f, 0x80,

    /* U+00EA "ê" */
    0x5, 0x1, 0x98, 0x0, 0x1, 0xf8, 0x75, 0xdb,
    0xfe, 0xb0, 0x7, 0x9c, 0x1f, 0x80,

    /* U+00EB "ë" */
    0x10, 0x43, 0xac, 0x0, 0x1, 0xf8, 0x75, 0xdb,
    0xfe, 0xb0, 0x7, 0x9c, 0x1f, 0x80,

    /* U+00EC "ì" */
    0x24, 0x1c, 0x0, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c,

    /* U+00ED "í" */
    0x22, 0x80, 0x1c, 0x71, 0xc7, 0x1c, 0x70,

    /* U+00EE "î" */
    0x4, 0x9, 0x80, 0x0, 0x70, 0x1c, 0x7, 0x1,
    0xc0, 0x70, 0x1c, 0x0,

    /* U+00EF "ï" */
    0x11, 0x2d, 0xd0, 0x0, 0x70, 0x1c, 0x7, 0x1,
    0xc0, 0x70, 0x1c, 0x0,

    /* U+00F0 "ð" */
    0x4, 0x0, 0xf8, 0x1b, 0xc1, 0xfc, 0x76, 0xdb,
    0xe, 0xb0, 0xd7, 0xac, 0x1f, 0x40,

    /* U+00F1 "ñ" */
    0xf, 0xc0, 0x0, 0x7b, 0xc7, 0x9d, 0x70, 0xe7,
    0xe, 0x70, 0xe7, 0xe,

    /* U+00F2 "ò" */
    0x8, 0x0, 0xb0, 0x0, 0x1, 0xf8, 0x79, 0xeb,
    0xb, 0xb0, 0xb7, 0x9e, 0x1f, 0x80,

    /* U+00F3 "ó" */
    0x2, 0x0, 0xb0, 0x0, 0x1, 0xf8, 0x79, 0xeb,
    0xb, 0xb0, 0xb7, 0x9e, 0x1f, 0x80,

    /* U+00F4 "ô" */
    0x5, 0x1, 0x98, 0x0, 0x1, 0xf8, 0x79, 0xeb,
    0xb, 0xb0, 0xb7, 0x9e, 0x1f, 0x80,

    /* U+00F5 "õ" */
    0x1f, 0x80, 0x0, 0x1f, 0x87, 0x9e, 0xb0, 0xbb,
    0xb, 0x79, 0xe1, 0xf8,

    /* U+00F6 "ö" */
    0x14, 0x42, 0xdc, 0x0, 0x1, 0xf8, 0x79, 0xeb,
    0xb, 0xb0, 0xb7, 0x9e, 0x1f, 0x80,

    /* U+00F7 "÷" */
    0xa, 0x0, 0x90, 0xbf, 0xe1, 0x54, 0x9, 0x0,
    0xa0,

    /* U+00F8 "ø" */
    0x0, 0x1, 0xfe, 0x7a, 0xeb, 0x3b, 0xb9, 0xb7,
    0xde, 0x7f, 0x80, 0x0,

    /* U+00F9 "ù" */
    0x8, 0x0, 0xb0, 0x0, 0x7, 0xe, 0x70, 0xe7,
    0xe, 0x70, 0xe3, 0x9e, 0x2e, 0xe0,

    /* U+00FA "ú" */
    0x2, 0x0, 0xe0, 0x0, 0x7, 0xe, 0x70, 0xe7,
    0xe, 0x70, 0xe3, 0x9e, 0x2e, 0xe0,

    /* U+00FB "û" */
    0x5, 0x1, 0x98, 0x0, 0x7, 0xe, 0x70, 0xe7,
    0xe, 0x70, 0xe3, 0x9e, 0x2e, 0xe0,

    /* U+00FC "ü" */
    0x14, 0x42, 0xdc, 0x0, 0x7, 0xe, 0x70, 0xe7,
    0xe, 0x70, 0xe3, 0x9e, 0x2e, 0xe0,

    /* U+00FD "ý" */
    0x2, 0x0, 0x38, 0x0, 0x0, 0x2c, 0x3c, 0x74,
    0xd0, 0xe7, 0x1, 0xf8, 0x3, 0xc0, 0xb, 0x0,
    0x34, 0x1, 0xc0, 0x0,

    /* U+00FE "þ" */
    0x70, 0x1, 0xc0, 0x7, 0xbc, 0x1f, 0x7c, 0x70,
    0x71, 0xc1, 0xc7, 0xdf, 0x1e, 0xf0, 0x70, 0x1,
    0xc0, 0x0,

    /* U+00FF "ÿ" */
    0x10, 0x40, 0xeb, 0x0, 0x0, 0x2c, 0x3c, 0x74,
    0xd0, 0xe7, 0x1, 0xf8, 0x3, 0xc0, 0xb, 0x0,
    0x34, 0x1, 0xc0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 49, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 46, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 73, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 39, .adv_w = 148, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 122, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 38, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 76, .adv_w = 61, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 87, .adv_w = 61, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 98, .adv_w = 68, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 103, .adv_w = 95, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 45, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 115, .adv_w = 69, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 118, .adv_w = 40, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 93, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 135, .adv_w = 104, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 88, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 91, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 104, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 94, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 92, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 88, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 95, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 91, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 40, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 45, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 268, .adv_w = 84, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 277, .adv_w = 97, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 285, .adv_w = 84, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 294, .adv_w = 84, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 154, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 329, .adv_w = 111, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 111, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 122, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 102, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 124, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 118, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 140, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 104, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 573, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 599, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 114, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 159, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 675, .adv_w = 109, .box_w = 8, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 108, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 66, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 715, .adv_w = 92, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 729, .adv_w = 66, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 739, .adv_w = 94, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 745, .adv_w = 110, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 751, .adv_w = 80, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 754, .adv_w = 104, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 763, .adv_w = 104, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 87, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 798, .adv_w = 94, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 63, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 829, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 49, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 48, .box_w = 4, .box_h = 11, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 859, .adv_w = 97, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 873, .adv_w = 46, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 879, .adv_w = 152, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 893, .adv_w = 100, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 902, .adv_w = 101, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 911, .adv_w = 104, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 925, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 937, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 945, .adv_w = 78, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 63, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 961, .adv_w = 101, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 970, .adv_w = 95, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 132, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 993, .adv_w = 95, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1002, .adv_w = 97, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1016, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1024, .adv_w = 68, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1035, .adv_w = 46, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1043, .adv_w = 68, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1054, .adv_w = 87, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1060, .adv_w = 49, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1060, .adv_w = 46, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1066, .adv_w = 89, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1078, .adv_w = 101, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1092, .adv_w = 89, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1101, .adv_w = 109, .box_w = 8, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1117, .adv_w = 48, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1125, .adv_w = 91, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1140, .adv_w = 80, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 1143, .adv_w = 126, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1159, .adv_w = 61, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1162, .adv_w = 86, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1170, .adv_w = 107, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1179, .adv_w = 69, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1182, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1190, .adv_w = 68, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1193, .adv_w = 85, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1197, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1208, .adv_w = 57, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1212, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1216, .adv_w = 80, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1219, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1231, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1245, .adv_w = 40, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1247, .adv_w = 80, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1250, .adv_w = 46, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1253, .adv_w = 62, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1256, .adv_w = 87, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1265, .adv_w = 130, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1281, .adv_w = 130, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1297, .adv_w = 133, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1313, .adv_w = 84, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1325, .adv_w = 111, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1345, .adv_w = 111, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1365, .adv_w = 111, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1383, .adv_w = 111, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1401, .adv_w = 111, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1419, .adv_w = 111, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1437, .adv_w = 167, .box_w = 11, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1459, .adv_w = 110, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1479, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1496, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1513, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1528, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1543, .adv_w = 85, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1557, .adv_w = 85, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1571, .adv_w = 85, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1584, .adv_w = 85, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1597, .adv_w = 122, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1613, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1633, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1655, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1677, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1697, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1717, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1737, .adv_w = 83, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1745, .adv_w = 127, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1765, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1785, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1805, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1823, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1841, .adv_w = 109, .box_w = 8, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1863, .adv_w = 104, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1877, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1891, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1905, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1919, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1933, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1945, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1959, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1973, .adv_w = 144, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1987, .adv_w = 87, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2001, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2015, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2029, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2043, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2057, .adv_w = 44, .box_w = 4, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2066, .adv_w = 44, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2073, .adv_w = 44, .box_w = 5, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2085, .adv_w = 44, .box_w = 5, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2097, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2111, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2123, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2137, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2151, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2165, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2177, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2191, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2200, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2212, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2226, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2240, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2254, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2268, .adv_w = 97, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2288, .adv_w = 104, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2306, .adv_w = 97, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 96, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 1,
    0, 2, 0, 3, 0, 4, 0, 5,
    6, 7, 8, 9, 10, 11, 12, 0,
    13, 0, 7, 0, 0, 14, 0, 15,
    16, 17, 18, 19, 20, 21, 22, 23,
    24, 0, 25, 26, 27, 28, 0, 0,
    21, 29, 30, 31, 32, 33, 34, 35,
    36, 37, 38, 39, 40, 41, 0, 0,
    42, 0, 43, 44, 45, 46, 47, 48,
    49, 50, 51, 52, 53, 54, 50, 50,
    44, 44, 55, 56, 57, 58, 59, 60,
    61, 62, 63, 64, 65, 0, 66, 0,
    0, 67, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 70,
    18, 18, 18, 18, 18, 18, 22, 0,
    22, 22, 22, 22, 0, 0, 0, 0,
    21, 0, 21, 21, 21, 21, 21, 0,
    21, 34, 34, 34, 34, 38, 71, 72,
    43, 43, 43, 43, 43, 43, 0, 45,
    47, 47, 47, 47, 51, 51, 51, 51,
    73, 50, 44, 44, 44, 44, 44, 0,
    44, 59, 59, 59, 59, 63, 44, 63
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 0, 0, 0, 0, 2,
    0, 0, 3, 4, 0, 5, 6, 7,
    8, 9, 10, 11, 0, 12, 0, 13,
    14, 15, 0, 0, 0, 16, 0, 0,
    17, 18, 19, 0, 20, 0, 0, 0,
    20, 0, 21, 22, 0, 0, 0, 0,
    20, 0, 20, 0, 23, 24, 25, 26,
    27, 28, 29, 30, 31, 32, 33, 0,
    34, 0, 35, 36, 35, 35, 35, 37,
    38, 36, 0, 39, 36, 36, 40, 40,
    35, 41, 35, 40, 42, 43, 44, 45,
    46, 47, 48, 49, 31, 0, 50, 0,
    0, 51, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 53,
    54, 54, 54, 54, 54, 54, 55, 20,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 20, 20, 20, 20, 0,
    20, 25, 25, 25, 25, 56, 0, 57,
    35, 35, 35, 35, 35, 35, 0, 35,
    35, 35, 35, 35, 0, 0, 0, 0,
    58, 40, 35, 35, 35, 35, 35, 0,
    35, 44, 44, 44, 44, 48, 59, 48
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, -10, -6, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, -5, 0, -5,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    -4, 5, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, -12, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    -16, 0, -19, -13, 0, -19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, -6, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    -19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, -16, 0, -16, -13, 0,
    -19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, -6, 0, -6, 0, 0, 0, 0,
    0, 0, 0, -19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -15, -8,
    -5, -5, -10, -8, 0, 0, 0, 0,
    0, -16, -6, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, -8, 0, 0, 0,
    -5, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, -16, 0, 0, -2,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -16, 0, -13, -19, 0, -2, -3, -4,
    -3, 0, -3, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -10, -5, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, -12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -12, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, -8, -3, -12, -6, 0, -13,
    0, 0, -16, 0, 0, -3, 0, -3,
    -2, 0, 0, 0, 0, -1, -2, -8,
    -7, 0, -4, 0, 0, 0, 0, 0,
    0, 0, -13, -3, -3, 0, 0, 0,
    -3, 0, 0, 0, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -1,
    -1, -2, -4, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, -3, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -2, -2, 0, -5, 0, -5, -1, -6,
    -6, -7, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -4, 0, 0,
    0, -3, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, -2, 0, 0, 0,
    0, 0, -2, -2, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, -13, 0,
    -13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -10, -1, 0, -19,
    -1, 2, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, -2, 0, 0, -2,
    0, -1, -1, -2, 0, -2, -1, 0,
    -2, 0, -1, 0, 0, 0, 0, -10,
    -18, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, -2, 0, 0, -4, 0, -2, -2,
    0, -4, 0, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, -11,
    0, -8, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -12, -5, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, -8, 0, -8,
    -8, 0, -6, -6, -6, 0, -8, -6,
    -3, 0, -6, -3, 6, 0, 0, 0,
    -12, 0, 0, -8, -8, 0, 0, 0,
    0, 0, 0, -14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, -5, -2, 0, -2, -1,
    -1, 0, 3, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, -1, -1, -1,
    0, -2, -6, -6, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 3, 0, -7,
    0, 0, 0, 0, -12, 0, -10, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    -13, -3, -12, -12, 0, -19, 0, 0,
    -16, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -4, -1, 0,
    -6, 3, 0, 0, 0, 0, 0, 0,
    -19, 0, -3, 0, 0, 0, 0, 0,
    -16, 0, -16, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -10, 0,
    0, -12, 0, 0, 0, 0, 1, -2,
    0, -2, 0, -8, 0, 0, -2, 0,
    1, -2, 0, 0, 0, 0, 2, -1,
    2, 2, 0, 2, 0, 0, 0, 0,
    0, -10, 0, 0, 1, -2, 0, 0,
    0, -5, 0, 0, 0, -3, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, -2, -2, 0, -5, 0,
    -5, -1, -6, -6, -7, 0, -8, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    -4, 0, 0, 0, -3, 0, -6, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -5,
    0, -3, -1, -5, 0, 0, -8, 0,
    0, -6, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, -9, 0, 0, -16, -16, -16, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, -5, 0, -13, 0, 5,
    0, 2, 2, 0, 2, 0, 0, 0,
    0, 0, -16, 0, 0, -7, 0, -10,
    -3, -16, 0, -16, -2, -11, -2, -8,
    -11, 0, 0, 0, 0, -8, -18, 2,
    0, -16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -2, -2, 0, 0, 0, 0, -2, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    -3, 0, -2, 0, 0, 0, 0, -8,
    0, 0, -19, 0, -16, -13, 0, 0,
    0, 0, 0, 0, 0, 0, 1, -1,
    -12, -5, 0, -16, -2, 2, 0, 0,
    0, 0, 0, 0, -16, 0, 0, -5,
    -10, 0, 0, -3, 0, -3, -2, -2,
    0, -4, 0, 0, 0, 0, -1, -16,
    -1, -2, -3, -12, -20, 0, 0, -10,
    0, 0, -5, 0, 0, -13, 0, -13,
    -13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, -1, 0, -13, -2,
    2, 0, 0, 0, 0, 0, 0, -11,
    0, 0, 0, -4, 0, 0, -3, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, -11, 0, 0, 0, -6, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, -2, 0, -2, 0, 0, 0,
    0, 0, -13, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -4, -3, 0, -4, 0, -13, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    -8, 0, 0, -19, 0, -19, -19, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, -6, 0, -19, -4, 2, -2,
    0, 0, 0, 0, 0, -16, 0, 0,
    0, -13, 0, 0, -13, 0, -4, -3,
    -6, 0, -3, -2, -2, -3, -2, -2,
    -16, 0, 0, 0, -13, 0, 0, 0,
    -13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, -8,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, -10, 0, -16, 0, -16, -11,
    -13, -19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -3, -6, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, -10,
    0, -6, -6, 0, -13, 0, 0, -15,
    0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    -1, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, -3, 0, 0, 0, -10, -2, -4,
    -2, 0, -8, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, -2, -1, 0, -2, 0, 0,
    0, 0, 0, 3, 0, -8, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, -4, -2, -3, -6, -2, 0,
    -8, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, -2, -3, -3,
    -3, -2, -4, 0, 0, 0, 0, 0,
    -6, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, -2, -2, -1,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, -3, -2, -2, -6, 0,
    0, -6, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, -2, -2,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 5,
    5, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 10, 0, 9, 8,
    8, 8, 8, 0, 0, 6, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 1, 0, 0,
    0, 0, -3, 0, 8, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -2, 0, 0, -1, 0,
    0, 0, 0, 0, -2, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, -2, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, 0, -5, 0, 0, -4,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -6, 0, 0, -4, -1,
    0, -3, -1, 0, 0, -1, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, -4, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -4, 0,
    -5, -3, 0, -5, 0, 0, 0, 0,
    0, -2, 0, 0, -2, -2, 0, 0,
    0, 0, -1, -4, -2, 0, -2, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    -2, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, -2, 0, 0, -2, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    3, -11, 0, -18, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, -2, 0, 0, 0,
    -2, 0, 0, -5, 0, 0, 0, -4,
    0, 0, -2, -2, 0, 0, 0, 3,
    0, 8, 8, 0, 0, 0, -5, 0,
    0, 0, -5, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, -7,
    0, -1, 0, -1, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, -4,
    -1, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, -2,
    -2, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, -5, 0, 1, -6, 0, -6,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, -4, 0, 0, 0, 0,
    -2, 0, 0, 0, -4, -2, -3, -3,
    0, 0, -3, -2, 0, 0, -2, 0,
    0, 0, -1, 8, 0, 8, 0, 0,
    0, 0, -3, 0, 0, -2, -4, 0,
    -2, 0, -1, 0, 0, -5, 0, 0,
    -6, 0, -6, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, -2, 0, 0, 0, -3,
    -2, -1, -3, 0, 0, 0, -2, 0,
    0, -2, 0, 0, 0, -1, 8, 0,
    6, 0, 0, 0, 0, -3, 0, 0,
    0, -1, 0, -2, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, -2, -1,
    0, 0, 0, -3, 0, -6, -1, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    -1, 0, -1, 0, 0, 0, 0, 0,
    -6, 0, -1, 0, 0, 0, -3, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    -6, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, -2, 0, 0, 0, -3, -2, -2,
    -3, 0, 0, 0, -2, 0, 0, -2,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, -4,
    0, -2, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, -2, 0, 0, -6, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, -8, 0, 0, 0, 0, 0,
    0, 0, -8, -4, 0, -8, 0, -16,
    0, -16, -11, -13, -19, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, -3, -6, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, -8, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    -8, 0, -16, 0, -16, -11, -13, -19,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    -3, -6, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, -5, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 2, 0, 0, -1, -16, 0,
    -16, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -10, 0, 0, -12,
    0, 0, 0, 0, 1, -2, 0, -2,
    0, -3, 0, -9, -2, 0, 1, -2,
    0, 0, 0, 0, 2, -1, 0, 2,
    0, 2, 0, 0, 3, 4, -3, -10,
    0, 0, 1, -2, 0, 0, 0, -4,
    -3, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, 0, -4, -2,
    -3, -6, -2, 0, -1, 0, -5, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -3, -2, -4, 0,
    2, 0, 0, 0, -6, -3, 0, 0,
    0, 0, -5, -2, 0, 0, -3, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -2, -2, 0, -5,
    0, -5, -1, -6, -6, -7, 0, -8,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 2, -3, -3, 0, -6,
    0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 73,
    .right_class_cnt     = 59,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 2,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Lexend_10 = {
#else
lv_font_t ui_font_Lexend_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_LEXEND_10*/

