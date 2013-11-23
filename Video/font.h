/*
** 8 x 8 Simple Character Font 
**
** 6/21/07 v1.4 LDJ 
*/ 

#define F_OFFS  0x20    // initial offset
#define F_SIZE  96      // define only the first 96 characters

const char Font8x8[] __attribute__ ((aligned (4))) = {
// 20 - SPACE
    0x00,       // 0b 0000000,
    0x00,       // 0b 0000000,
    0x00,       // 0b 0000000,
    0x00,       // 0b 0000000,
    0x00,       // 0b 0000000,
    0x00,       // 0b 0000000,
    0x00,       // 0b 0000000,
    0x00,       // 0b 0000000,
// 1 - !
    0x18,       // 0b 0011000,
    0x18,       // 0b 0011000,
    0x18,       // 0b 0011000,
    0x18,       // 0b 0011000,
    0x18,       // 0b 0011000,
    0x00,       // 0b 0000000,
    0x18,       // 0b 0011000,
    0x00,       // 0b 0000000,
// 2 - "
    0x36,       // 0b 0110110,
    0x24,       // 0b 0100100,
    0x48,       // 0b 1001000,
    0x00,       // 0b 0000000,
    0x00,       // 0b 0000000,
    0x00,       // 0b 0000000,
    0x00,       // 0b 0000000,
    0x00,       // 0b 0000000,
// 3 - #
    0x00,       // 0b 0000 0000
    0x24,       // 0b 0010 0100
    0xfe,       // 0b 1111 1110
    0x28,       // 0b 0010 1000
    0xfe,       // 0b 1111 1110
    0x28,       // 0b 0010 1000
    0x48,       // 0b 0100 1000
    0x00,       // 0b 0000 0000
// 4 - $
    0x10,       // 0b 0001 0000,
    0x78,       // 0b 0111 1000,
    0x90,       // 0b 1001 0000,
    0x7c,       // 0b 0111 1100,
    0x12,       // 0b 0001 0010,
    0x92,       // 0b 1001 0010,
    0x7c,       // 0b 0111 1100,
    0x10,       // 0b 0001 0000,
// 5 - %
    0x20,       // 0b 0010 0000,
    0x52,       // 0b 0101 0010,
    0x24,       // 0b 0010 0100,
    0x08,       // 0b 0000 1000,
    0x14,       // 0b 0001 0100,
    0x2a,       // 0b 0010 1010,
    0x44,       // 0b 0100 0100,
    0,
// 6 - &
    0x00,       // 0b 0000 0000,
    0x1c,       // 0b 0001 1100,
    0x20,       // 0b 0010 0000,
    0x60,       // 0b 0110 0000,
    0x94,       // 0b 1001 0100,
    0x88,       // 0b 1000 1000,
    0x78,       // 0b 0111 0110,
    0,
// 7 - '
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
// 8 - (
    0x10,       // 0b 0001 0000,
    0x20,       // 0b 0010 0000,
    0x40,       // 0b 0100 0000,
    0x40,       // 0b 0100 0000,
    0x40,       // 0b 0100 0000,
    0x20,       // 0b 0010 0000,
    0x10,       // 0b 0001 0000,
    0x00,       // 0b 0000 0000,
// 9 - )
    0x20,       // 0b 0010 0000,
    0x10,       // 0b 0001 0000,
    0x08,       // 0b 0000 1000,
    0x08,       // 0b 0000 1000,
    0x08,       // 0b 0000 1000,
    0x10,       // 0b 0001 0000,
    0x20,       // 0b 0010 0000,
    0x00,       // 0b 0000 0000,
// A - *
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x20,       // 0b 0010 0000,
    0xf8,       // 0b 1111 1000,
    0x20,       // 0b 0010 0000,
    0x50,       // 0b 0101 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
// B - +
    0x00,       // 0b 0000 0000,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0xfc,       // 0b 1111 1100,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
// C - ,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x60,       // 0b 0110 0000,
    0x60,       // 0b 0110 0000,
    0x80,       // 0b 1000 0000,
    0x00,       // 0b 0000 0000,
// D - -
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0xfc,       // 0b 1111 1100,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
// E - .
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x00,       // 0b 0000 0000,
// F - /
    0x02,       // 0b 0000 0010,
    0x04,       // 0b 0000 0100,
    0x08,       // 0b 0000 1000,
    0x10,       // 0b 0001 0000,
    0x20,       // 0b 0010 0000,
    0x40,       // 0b 0100 0000,
    0x80,       // 0b 1000 0000,
    0x00,       // 0b 0000 0000,

// 30 - 0
    0x7c,       // 0b 0111 1100,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0x7c,       // 0b 0111 1100,
    0,
// 1
    0x30,       // 0b 0011 0000,
    0x70,       // 0b 0111 0000,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x78,       // 0b 0111 1000,
    0,
// 2
    0x7c,       // 0b 0111 1100,
    0x82,       // 0b 1000 0010,
    0x04,       // 0b 0000 0100,
    0x08,       // 0b 0000 1000,
    0x10,       // 0b 0001 0000,
    0x22,       // 0b 0010 0010,
    0xfe,       // 0b 1111 1110,
    0,
// 3
    0x7c,       // 0b 0111 1100,
    0x82,       // 0b 1000 0010,
    0x02,       // 0b 0000 0010,
    0x1c,       // 0b 0001 1100,
    0x02,       // 0b 0000 0010,
    0x82,       // 0b 1000 0010,
    0x7c,       // 0b 0111 1100,
    0,
// 4
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xd0,       // 0b 1101 0000,
    0xfe,       // 0b 1111 1110,
    0x10,       // 0b 0001 0000,
    0x10,       // 0b 0001 0000,
    0,
// 5
    0xfe,       // 0b 1111 1110,
    0xc2,       // 0b 1100 0010,
    0xc0,       // 0b 1100 0000,
    0xfc,       // 0b 1111 1100,
    0x02,       // 0b 0000 0010,
    0x82,       // 0b 1000 0010,
    0x7c,       // 0b 0111 1100,
    0,
// 6
    0x7c,       // 0b 0111 1100,
    0xc2,       // 0b 1100 0010,
    0xc0,       // 0b 1100 0000,
    0xfc,       // 0b 1111 1100,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0x7c,       // 0b 0111 1100,
    0,
// 7
    0xfe,       // 0b 1111 1110,
    0x8c,       // 0b 1000 1100,
    0x0c,       // 0b 0000 1100,
    0x18,       // 0b 0001 1000,
    0x30,       // 0b 0011 0000,
    0x60,       // 0b 0110 0000,
    0x60,       // 0b 0110 0000,
    0,

// 8
    0x7c,       // 0b 0111 1100,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0x7c,       // 0b 0111 1100,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0x7c,       // 0b 0111 1100,
    0,
// 9
    0x7c,       // 0b 0111 1100,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0x7e,       // 0b 0111 1110,
    0x04,       // 0b 0000 0100,
    0x08,       // 0b 0000 1000,
    0x70,       // 0b 0111 0000,
    0,
// A - :
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x60,       // 0b 0110 0000,
    0x60,       // 0b 0110 0000,
    0x00,       // 0b 0000 0000,
    0x60,       // 0b 0110 0000,
    0x60,       // 0b 0110 0000,
    0,
// B - ;
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x60,       // 0b 0110 0000,
    0x60,       // 0b 0110 0000,
    0x00,       // 0b 0000 0000,
    0x60,       // 0b 0110 0000,
    0xc0,       // 0b 1100 0000,
    0,
// C - <
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x30,       // 0b 0011 0000,
    0x40,       // 0b 0100 0000,
    0x80,       // 0b 1000 0000,
    0x40,       // 0b 0100 0000,
    0x30,       // 0b 0011 0000,
    0,
// D - =
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0xfe,       // 0b 1111 1110,
    0x00,       // 0b 0000 0000,
    0xfe,       // 0b 1111 1110,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0,
// E - >
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x60,       // 0b 0110 0000,
    0x10,       // 0b 0001 0000,
    0x08,       // 0b 0000 1000,
    0x10,       // 0b 0001 0000,
    0x60,       // 0b 0110 0000,
    0,
// F - ?
    0x7c,       // 0b 0111 1100,
    0x82,       // 0b 1000 0010,
    0x04,       // 0b 0000 0100,
    0x08,       // 0b 0000 1000,
    0x30,       // 0b 0011 0000,
    0x00,       // 0b 0000 0000,
    0x30,       // 0b 0011 0000,
    0,

// 40 - @
    0x7c,       // 0b 0111 1100,
    0x82,       // 0b 1000 0010,
    0x9a,       // 0b 1001 1010,
    0xa2,       // 0b 1010 0010,
    0x9c,       // 0b 1001 1100,
    0x82,       // 0b 1000 0010,
    0x7c,       // 0b 0111 1100,
    0,
// 1 - A
    0x38,       // 0b 0011 1000,
    0x64,       // 0b 0110 0100,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xfe,       // 0b 1111 1110,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0,
// 2 - B
    0xfc,       // 0b 1111 1100,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xfc,       // 0b 1111 1100,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xfc,       // 0b 1111 1100,
    0,
// 3 - C
    0x3c,       // 0b 0011 1100,
    0xc2,       // 0b 1100 0010,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xc2,       // 0b 1100 0010,
    0x7c,       // 0b 0111 1100,
    0,

// 4 - D
    0xf8,       // 0b 1111 1000,
    0xc4,       // 0b 1100 0100,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc4,       // 0b 1100 0100,
    0xf8,       // 0b 1111 1000,
    0,
// 5 - E
    0xfe,       // 0b 1111 1110,
    0xc2,       // 0b 1100 0010,
    0xc0,       // 0b 1100 0000,
    0xf8,       // 0b 1111 1000,
    0xc0,       // 0b 1100 0000,
    0xc2,       // 0b 1100 0010,
    0xfe,       // 0b 1111 1110,
    0,
// 6 - F
    0xfe,       // 0b 1111 1110,
    0xc2,       // 0b 1100 0010,
    0xc0,       // 0b 1100 0000,
    0xf8,       // 0b 1111 1000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0,
// 7 - G
    0x3c,       // 0b 0011 1100,
    0xc2,       // 0b 1100 0010,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xce,       // 0b 1100 1110,
    0xc2,       // 0b 1100 0010,
    0x7c,       // 0b 0111 1100,
    0,

// 8 - H
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xfe,       // 0b 1111 1110,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0,
// 9 - I
    0x78,       // 0b 0111 1000,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x78,       // 0b 0111 1000,
    0,
// A - J
    0x3c,       // 0b 0011 1100,
    0x18,       // 0b 0001 1000,
    0x18,       // 0b 0001 1000,
    0x18,       // 0b 0001 1000,
    0x18,       // 0b 0001 1000,
    0x98,       // 0b 1001 1000,
    0x70,       // 0b 0111 0000,
    0,
// B - K
    0xc6,       // 0b 1100 0110,
    0xc4,       // 0b 1100 0100,
    0xc8,       // 0b 1100 1000,
    0xf0,       // 0b 1111 0000,
    0xc8,       // 0b 1100 1000,
    0xc4,       // 0b 1100 0100,
    0xc6,       // 0b 1100 0110,
    0,
// C - L
    0xe0,       // 0b 1110 0000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0010,
    0xfe,       // 0b 1111 1110,
    0,
// D - M
    0xc2,       // 0b 1100 0010,
    0xc6,       // 0b 1100 0110,
    0xea,       // 0b 1110 1010,
    0xd2,       // 0b 1101 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0x00,       // 0b 0000 0000,
// E - N
    0xc6,       // 0b 1100 0110,
    0xe2,       // 0b 1110 0010,
    0xd2,       // 0b 1101 0010,
    0xd2,       // 0b 1101 0010,
    0xca,       // 0b 1100 1010,
    0xc6,       // 0b 1100 0110,
    0xc2,       // 0b 1100 0010,
    0,
//F -  O
    0x3c,       // 0b 0011 1100,
    0x42,       // 0b 0100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0x7c,       // 0b 0111 1100,
    0,

// 50 - P
    0xfc,       // 0b 1111 1100,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xfc,       // 0b 1111 1100,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0,
// 1 - Q
    0x3c,       // 0b 0011 1100,
    0x42,       // 0b 0100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc4,       // 0b 1100 0100,
    0x7e,       // 0b 0111 1110,
    0,
// 2 - R
    0xfc,       // 0b 1111 1100,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xfc,       // 0b 1111 1100,
    0xd0,       // 0b 1101 0000,
    0xc8,       // 0b 1100 1000,
    0xc6,       // 0b 1100 0110,
    0,
// 3 - S
    0x7c,       // 0b 0111 1100,
    0xc2,       // 0b 1100 0010,
    0xc0,       // 0b 1100 0000,
    0x7c,       // 0b 0111 1100,
    0x06,       // 0b 0000 0110,
    0x86,       // 0b 1000 0010,
    0xfc,       // 0b 1111 1100,
    0,
// 4 - T
    0xfe,       // 0b 1111 1110,
    0xb2,       // 0b 1011 0010,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x30,       // 0b 0011 0000,
    0x78,       // 0b 0111 1000,
    0,
// 5 - U
    0xc6,       // 0b 1100 0110,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0x7c,       // 0b 0111 1100,
    0,
// 6 - V
    0xc6,       // 0b 1100 0110,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0x62,       // 0b 0110 0010,
    0x64,       // 0b 0110 0100,
    0x38,       // 0b 0011 1000,
    0x30,       // 0b 0011 0000,
    0,
// 7 - W
    0xc6,       // 0b 1100 0110,
    0xc2,       // 0b 1100 0010,
    0xc2,       // 0b 1100 0010,
    0xd2,       // 0b 1101 0010,
    0xd2,       // 0b 1101 0010,
    0x54,       // 0b 0101 0100,
    0x28,       // 0b 0010 1000,
    0,
// 8 - X
    0xc6,       // 0b 1100 0110,
    0x44,       // 0b 0100 0100,
    0x28,       // 0b 0010 1000,
    0x10,       // 0b 0001 0000,
    0x10,       // 0b 0001 0000,
    0x28,       // 0b 0010 1000,
    0xc6,       // 0b 1100 0110,
    0,
//9 -  Y
    0xc6,       // 0b 1100 0110,
    0x44,       // 0b 0100 0100,
    0x28,       // 0b 0010 1000,
    0x10,       // 0b 0001 0000,
    0x10,       // 0b 0001 0000,
    0x10,       // 0b 0001 0000,
    0x38,       // 0b 0011 1000,
    0,
// A - Z
    0xfc,       // 0b 1111 1100,
    0x88,       // 0b 1000 1000,
    0x10,       // 0b 0001 0000,
    0x28,       // 0b 0010 1000,
    0x30,       // 0b 0011 0000,
    0x44,       // 0b 0100 0100,
    0xfc,       // 0b 1111 1100,
    0,
// B - [
    0x00,       // 0b 0000 0000,
    0xf0,       // 0b 1111 0000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xc0,       // 0b 1100 0000,
    0xf0,       // 0b 1111 0000,
    0x00,       // 0b 0000 0000,
/* C - backslash
    0x80,       // 0b 1000 0000,
    0xc0,       // 0b 1100 0000,
    0x60,       // 0b 0110 0000,
    0x30,       // 0b 0011 0000,
    0x18,       // 0b 0001 1000,
    0x08,       // 0b 0000 1000,
    0x06,       // 0b 0000 1100,
    0,
*/
// C - single cube
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x10,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0,
// D - ]
    0x3c,       // 0b 0011 1100,
    0x0c,       // 0b 0000 1100,
    0x0c,       // 0b 0000 1100,
    0x0c,       // 0b 0000 1100,
    0x0c,       // 0b 0000 1100,
    0x0c,       // 0b 0000 1100,
    0x3c,       // 0b 0011 1100,
    0,
// E - ^
    0x10,       // 0b 0001 0000,
    0x28,       // 0b 0010 1000,
    0x44,       // 0b 0100 0100,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0,
// F - _
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0xfe,       // 0b 1111 1110,
    0,
// 60 - ` heart
    0x00,       // 0b 0000 0000,
    0x6c,       // 0b 0110 1100,
    0x92,       // 0b 1001 0010,
    0x44,       // 0b 0100 0100,
    0x28,       // 0b 0010 1000,
    0x10,       // 0b 0001 0000,
    0x00,       // 0b 0000 0000,
    0,
// 1 - a
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x38,       // 0b 0011 1000,
    0x04,       // 0b 0000 0100,
    0x3e,       // 0b 0011 1110,
    0x42,       // 0b 0100 0010,
    0x3a,       // 0b 0011 1010,
    0,
// 2 - b
    0x80,       // 0b 1000 0000,
    0x80,       // 0b 1000 0000,
    0x80,       // 0b 1000 0000,
    0xfc,       // 0b 1111 1100,
    0x82,       // 0b 1000 0010,
    0x82,       // 0b 1000 0010,
    0xbc,       // 0b 1011 1100,
    0,
// 3 - c
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x7c,       // 0b 0111 1100,
    0x80,       // 0b 1000 0000,
    0x80,       // 0b 1000 0000,
    0x80,       // 0b 1000 0000,
    0x7c,       // 0b 0111 1100,
    0,

// 4 - d
    0x02,       // 0b 0000 0010,
    0x02,       // 0b 0000 0010,
    0x3e,       // 0b 0011 1110,
    0x42,       // 0b 0100 0010,
    0x42,       // 0b 0100 0010,
    0x46,       // 0b 0100 0110,
    0x3a,       // 0b 0011 1010,
    0,
// 5 - e
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x3c,       // 0b 0011 1100,
    0x42,       // 0b 0100 0010,
    0x7c,       // 0b 0111 1100,
    0x40,       // 0b 0100 0000,
    0x3c,       // 0b 0011 1100,
    0,
// 6 - f
    0x78,       // 0b 0111 1000,
    0x80,       // 0b 1000 0000,
    0x80,       // 0b 1000 0000,
    0xf0,       // 0b 1111 0000,
    0x80,       // 0b 1000 0000,
    0x80,       // 0b 1000 0000,
    0x80,       // 0b 1000 0000,
    0,
// 7 - g
    0x00,       // 0b 0000 0000,
    0x7c,       // 0b 0111 1100,
    0x82,       // 0b 1000 0010,
    0x82,       // 0b 1000 0010,
    0x7e,       // 0b 0111 1110,
    0x02,       // 0b 0000 0010,
    0x7c,       // 0b 0111 1100,
    0,

// 8 - h
    0x80,       // 0b 1000 0000,
    0x80,       // 0b 1000 0000,
    0xb8,       // 0b 1011 1000,
    0xc4,       // 0b 1100 0100,
    0x82,       // 0b 1000 0010,
    0x82,       // 0b 1000 0010,
    0x82,       // 0b 1000 0010,
    0,
// 9 - i
    0x00,       // 0b 0000 0000,
    0x10,       // 0b 0001 0000,
    0x00,       // 0b 0000 0000,
    0x30,       // 0b 0011 0000,
    0x10,       // 0b 0001 0000,
    0x10,       // 0b 0001 0000,
    0x30,       // 0b 0011 1000,
    0,
// A - j
    0x00,       // 0b 0000 0000,
    0x08,       // 0b 0000 1000,
    0x00,       // 0b 0000 0000,
    0x18,       // 0b 0001 1000,
    0x08,       // 0b 0000 1000,
    0x08,       // 0b 0000 1000,
    0x08,       // 0b 0000 1000,
    0x70,       // 0b 0111 0000,
// B - k
    0x40,       // 0b 0100 0000,
    0x48,       // 0b 0100 1000,
    0x50,       // 0b 0101 0000,
    0x60,       // 0b 0110 0000,
    0x50,       // 0b 0101 0000,
    0x48,       // 0b 0100 1000,
    0x44,       // 0b 0100 0100,
    0,
// C - l
    0x30,       // 0b 0011 00000,
    0x10,       // 0b 0001 00000,
    0x10,       // 0b 0001 00000,
    0x10,       // 0b 0001 00000,
    0x10,       // 0b 0001 00000,
    0x10,       // 0b 0001 00000,
    0x38,       // 0b 0011 10000,
    0,
// D - m
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0xec,       // 0b 1110 1100,
    0x92,       // 0b 1001 0010,
    0x92,       // 0b 1001 0010,
    0x92,       // 0b 1001 0010,
    0x92,       // 0b 1001 0010,
    0,
// E - n
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0xd8,       // 0b 1101 1000,
    0x64,       // 0b 0110 0100,
    0x44,       // 0b 0100 0100,
    0x44,       // 0b 0100 0100,
    0x44,       // 0b 0100 0100,
    0,
// 4F - o
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x3c,       // 0b 0011 1100,
    0x42,       // 0b 0100 0010,
    0x42,       // 0b 0100 0010,
    0x42,       // 0b 0100 0010,
    0x3c,       // 0b 0011 1100,
    0,
// 0 - p
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x5c,       // 0b 0101 1100,
    0x62,       // 0b 0110 0010,
    0x42,       // 0b 0100 0010,
    0x62,       // 0b 0110 0010,
    0x5c,       // 0b 0101 1100,
    0x40,       // 0b 0100 0000,
// 1 - q
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x76,       // 0b 0111 0110,
    0x88,       // 0b 1000 1000,
    0x88,       // 0b 1000 1000,
    0x88,       // 0b 1000 1000,
    0x78,       // 0b 0111 1000,
    0x1c,       // 0b 0001 1100,
// 2 - r
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x5c,       // 0b 0101 1100,
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0,
// 3 - s
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x3e,       // 0b 0011 1110,
    0x40,       // 0b 0100 0000,
    0x3c,       // 0b 0011 1100,
    0x02,       // 0b 0000 0010,
    0x7c,       // 0b 0111 1100,
    0,
// 4 - t
    0x20,       // 0b 0010 0000,
    0x78,       // 0b 0111 1000,
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0x22,       // 0b 0010 0010,
    0x1c,       // 0b 0001 1100,
    0,
// 5 - u
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x44,       // 0b 0100 0100,
    0x44,       // 0b 0100 0100,
    0x44,       // 0b 0100 0100,
    0x44,       // 0b 0100 0100,
    0x3a,       // 0b 0011 1010,
    0,
// 6 - v
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x44,       // 0b 0100 0100,
    0x44,       // 0b 0100 0100,
    0x44,       // 0b 0100 0100,
    0x28,       // 0b 0010 1000,
    0x10,       // 0b 0001 0000,
    0,
// 7 - w
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x82,       // 0b 1000 0010,
    0x92,       // 0b 1001 0010,
    0x92,       // 0b 1001 0010,
    0x92,       // 0b 1001 0010,
    0x6c,       // 0b 0110 1100,
    0,
// 8 - x
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0xcc,       // 0b 1100 1100,
    0x30,       // 0b 0011 0000,
    0x20,       // 0b 0010 0000,
    0x50,       // 0b 0101 0000,
    0x8c,       // 0b 1000 1100,
    0,
// 9 - y
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x44,       // 0b 0100 0100,
    0x28,       // 0b 0010 1000,
    0x10,       // 0b 0001 0000,
    0x10,       // 0b 0001 0000,
    0x10,       // 0b 0001 0000,
    0,
// A - z
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x7e,       // 0b 0111 1110,
    0x14,       // 0b 0100 0100,
    0x18,       // 0b 0001 1000,
    0x32,       // 0b 0011 0010,
    0x7e,       // 0b 0111 1110,
    0,
// B - {
    0x08,       // 0b 0000 1000,
    0x10,       // 0b 0001 0000,
    0x10,       // 0b 0001 0000,
    0x30,       // 0b 0011 0000,
    0x10,       // 0b 0001 0000,
    0x10,       // 0b 0001 0000,
    0x08,       // 0b 0000 1000,
    0,
// C - |
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0x20,       // 0b 0010 0000,
    0,
// D - }
    0x20,       // 0b 0010 0000,
    0x10,       // 0b 0001 0000,
    0x10,       // 0b 0001 0000,
    0x18,       // 0b 0001 1000,
    0x10,       // 0b 0001 0000,
    0x10,       // 0b 0001 0000,
    0x20,       // 0b 0010 0000,
    0,
// E - ~
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0x60,       // 0b 0110 0000,
    0x92,       // 0b 1001 0010,
    0x0c,       // 0b 0000 1100,
    0x00,       // 0b 0000 0000,
    0x00,       // 0b 0000 0000,
    0,
// F - DEL
    0xff,       // 0b1 1111 1110,
    0xff,       // 0b1 0000 0010,
    0xff,       // 0b1 0000 0010,
    0xff,       // 0b1 0000 0010,
    0xff,       // 0b1 0000 0010,
    0xff,       // 0b1 0000 0010,
    0xff,       // 0b1 0000 0010,
    0xff       // 0b1 1111 1110 
};