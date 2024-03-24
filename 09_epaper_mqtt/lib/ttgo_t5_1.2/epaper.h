#ifndef _EPAPER_
#define _EPAPER_

#include <stdint.h>
#include <Arduino.h>

#include <GxGDEW029Z10/GxGDEW029Z10.h>    // 2.9" b/w/r
#include <GxEPD.h>
#include <GxIO/GxIO_SPI/GxIO_SPI.h>

class EPaper
{
    public:
        //enum class Text_alignment { RIGHT_ALIGNMENT=0, LEFT_ALIGNMENT, CENTER_ALIGNMENT };
        static const uint8_t RIGHT_ALIGNMENT = 0;
        static const uint8_t LEFT_ALIGNMENT = 1;
        static const uint8_t CENTER_ALIGNMENT = 2;
    public:
        EPaper();
        void init();
        void drawBitmap(const char *filename, int16_t x, int16_t y, bool with_color);
        void displayText(const String &str, int16_t y, uint8_t alignment);
    public:
        GxEPD_Class &display;
};

#endif /*_EPAPER_*/
