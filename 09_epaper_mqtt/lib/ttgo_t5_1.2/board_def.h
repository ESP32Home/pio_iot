#define TTGO_T5_1_2 1

#if (TTGO_T5_1_2) || (TTGO_T5_2_4)

#include <GxGDEW029Z10/GxGDEW029Z10.h>    // 2.9" b/w/r

#define ELINK_BUSY 4
#define ELINK_RESET 16
#define ELINK_DC 17
#define ELINK_SS 5

#define SPI_MOSI 23
#define SPI_MISO -1 //elink no use
#define SPI_CLK 18

#define SDCARD_SS 13
#define SDCARD_MOSI 15
#define SDCARD_MISO 2
#define SDCARD_CLK 14

#define BUTTON_1 37
#define BUTTON_2 38
#define BUTTON_3 39

#define BUTTONS_MAP \
    {               \
        37, 38, 39  \
    }

#define SPEAKER_OUT 25

#endif