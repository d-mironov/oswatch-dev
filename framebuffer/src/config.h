#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

#define BAUDRATE    115200

#define VSPI_CLK    18      // VSPI CLK 
#define VSPI_MISO   19      // VSPI MISO
#define VSPI_MOSI   23      // VSPI MOSI
#define VSPI_CS0    5       // VSPI CS0

#define DP_CLK      VSPI_CLK
#define DP_MOSI     VSPI_MOSI
#define DP_CS       VSPI_CS0
#define DP_DC       25
#define DP_RST      26
#define DP_MISO     -1

#endif /* ifndef CONFIG_H */
