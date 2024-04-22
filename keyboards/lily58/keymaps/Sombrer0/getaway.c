//		"Getaway"
//	Pixel art by /u/RustyJ   github:RustyJonez
//  OLED logo customization guide at


#pragma once

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#elif defined(ESP8266)
 #include <pgmspace.h>
#else
 #define PROGMEM
#endif


static const unsigned char PROGMEM font[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0xE0, 0x70, 0x18,
    0x0C, 0x18, 0x30, 0xE0, 0x80, 0x00,
    0x00, 0x10, 0xF8, 0x90, 0x10, 0x30,
    0x78, 0x30, 0x10, 0xB8, 0xFC, 0x38,
    0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xF8, 0xFC, 0xF8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1C,
    0x9C, 0x1C, 0x00, 0x00, 0x00, 0x00,
    0xF8, 0xFC, 0xF8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x1C, 0xFC, 0xF8,
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0xE0, 0xF8, 0x7C, 0x1C,
    0x00, 0x00, 0x00, 0xF0, 0xFC, 0xFC,
    0xFC, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C,
    0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF8,
    0x38, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C,
    0x1C, 0x3C, 0xF8, 0xF0, 0xE0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // 1st row
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0xE0, 0x70, 0x18,
    0x0C, 0x18, 0x30, 0xE0, 0x80, 0x00,
    0x00, 0x10, 0xF8, 0x90, 0x10, 0x30,
    0x78, 0x30, 0x10, 0xB8, 0xFC, 0x38,
    0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xF8, 0xFC, 0xF8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1C,
    0x9C, 0x1C, 0x00, 0x00, 0x00, 0x00,
    0xF8, 0xFC, 0xF8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x1C, 0xFC, 0xF8,
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0xE0, 0xF8, 0x7C, 0x1C,
    0x00, 0x00, 0x00, 0xF0, 0xFC, 0xFC,
    0xFC, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C,
    0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF8,
    0x38, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C,
    0x1C, 0x3C, 0xF8, 0xF0, 0xE0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // 2st row
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
    0xBC, 0xE0, 0x81, 0x81, 0x81, 0x83,
    0x83, 0x82, 0x87, 0x0C, 0x18, 0x30,
    0x60, 0xC0, 0x00, 0x00, 0x1F, 0xFE,
    0x90, 0xB9, 0xFF, 0xBB, 0x91, 0x98,
    0x3C, 0x18, 0x11, 0x13, 0x3F, 0x11,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x0F, 0x7F, 0xF8, 0xE0, 0x80, 0xF0,
    0xFC, 0x3F, 0x0F, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F,
    0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x3C,
    0x78, 0xF8, 0xF0, 0xE0, 0x80, 0x00,
    0x00, 0x00, 0x00, 0xC3, 0xE7, 0xFF,
    0x7E, 0x3C, 0x38, 0x78, 0x78, 0x70,
    0x70, 0xF8, 0xFF, 0xDF, 0x87, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // 3nd row
    0x18, 0x3C, 0x24, 0x66, 0x63, 0x41,
    0xC1, 0x81, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x81, 0xC1, 0x41, 0x62,
    0x38, 0x6C, 0x4C, 0xC6, 0x81, 0x81,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x81,
    0xC1, 0x43, 0x62, 0x36, 0x1C, 0x18,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0,
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
    0xC0, 0x80, 0x00, 0x00, 0x00, 0x7F,
    0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00,
    0x7F, 0xFF, 0xFF, 0xC0, 0x80, 0x00,
    0x00, 0x00, 0xE0, 0xE0, 0xC0, 0xC0,
    0xC0, 0xE0, 0xF9, 0x7F, 0x1F, 0x07,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x70, 0xF0, 0xE0,
    0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0,
    0xF0, 0xF8, 0x7F, 0x3F, 0x0F, 0x00,
    0x00, 0x00, 0x0F, 0x3F, 0x7F, 0xF9,
    0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0,
    0xC0, 0xE0, 0xF9, 0x7F, 0x3F, 0x1F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, //4rd row
    0x00, 0x00, 0x04, 0x80, 0x40, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x04, 0x00, 0x00, 0x80, 0x00, 0x02,
    0x00, 0x08, 0x14, 0x08, 0x00, 0x00,
    0x00, 0x20, 0x01, 0x01, 0x03, 0x06,
    0x06, 0x0C, 0x08, 0x1C, 0xB8, 0xF8,
    0x68, 0x70, 0x60, 0x30, 0x10, 0x30,
    0x10, 0x08, 0x0C, 0x07, 0x01, 0x00,
    0x60, 0xE0, 0xB0, 0x90, 0xD0, 0x58,
    0x48, 0x2C, 0x36, 0x13, 0xC0, 0xC0,
    0x40, 0x60, 0x30, 0x38, 0x0C, 0x07,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x08, 0x1C, 0x98, 0x8C, 0xDC,
    0xC8, 0x8A, 0xDE, 0xCB, 0x8E, 0x8B,
    0x86, 0x82, 0x82, 0xFF, 0xF7, 0xEF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF,
    0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F,
    0xBF, 0xBB, 0xBF, 0x5F, 0xBF, 0xEF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x45, 0x00,
    0x30, 0x78, 0xAE, 0x27, 0x23, 0x21,
    0x21, 0x21, 0x71, 0xD9, 0xDD, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // 5th row
    0x00, 0x80, 0x44, 0x40, 0x41, 0x40,
    0x40, 0x40, 0x40, 0x48, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x18, 0x3C, 0x34, 0x74,
    0xF2, 0xE3, 0xE1, 0xE1, 0xE1, 0x70,
    0x30, 0x90, 0x80, 0x88, 0x80, 0x80,
    0x02, 0x00, 0x40, 0xA0, 0x90, 0x50,
    0x18, 0x09, 0x89, 0x8B, 0x4F, 0x46,
    0x07, 0x01, 0x01, 0x01, 0x00, 0x80,
    0x40, 0x00, 0x00, 0x20, 0x10, 0x00,
    0x00, 0x08, 0x04, 0x00, 0x00, 0x08,
    0x18, 0x0C, 0x18, 0x1C, 0x4C, 0xD9,
    0x6D, 0xC8, 0x69, 0x48, 0xE1, 0x40,
    0x40, 0x7E, 0xFF, 0x5D, 0xFE, 0xEB,
    0x9D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xF3, 0xCD, 0xBE, 0x7F,
    0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0x3E,
    0x7F, 0xEF, 0xDF, 0xFF, 0xDE, 0xFC,
    0x00, 0x00, 0x80, 0x41, 0x02, 0x84,
    0x08, 0x88, 0xC8, 0x48, 0x69, 0xEF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // 6th row
    0x01, 0x08, 0x04, 0x00, 0x80, 0x00,
    0x00, 0x00, 0x1C, 0x14, 0x1C, 0x01,
    0x86, 0xF8, 0x00, 0x00, 0x40, 0xA0,
    0x40, 0x00, 0x04, 0x00, 0x80, 0x00,
    0x01, 0x00, 0x10, 0x38, 0x74, 0xF6,
    0xD3, 0xE0, 0xE1, 0xE5, 0xCB, 0xCE,
    0x9F, 0xFF, 0xFF, 0xE7, 0xC1, 0xE0,
    0xF0, 0xFC, 0xF8, 0xFC, 0xF9, 0xC3,
    0x9F, 0xFF, 0xFB, 0xE0, 0xFC, 0xFE,
    0xFE, 0x6C, 0xF2, 0xA2, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x13, 0x1E, 0x37, 0x1A,
    0x97, 0xFA, 0xB6, 0xDB, 0xBA, 0xD2,
    0x90, 0x90, 0xBF, 0xFC, 0xEF, 0xFF,
    0xFD, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xF3,
    0xFF, 0xF3, 0xF0, 0xF3, 0xF3, 0xC0,
    0xE0, 0xBF, 0xDD, 0xFF, 0x7F, 0xBF,
    0xE0, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x02, 0x02, 0x07, 0x05, 0x0C, 0x1F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // 7th row
};
