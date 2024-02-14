# Install
* clean install of platformio

# Build log
```
Processing esp32-c3-devkitm-1 (board: esp32-c3-devkitm-1; framework: espidf; platform: espressif32)
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Verbose mode can be enabled via `-v, --verbose` option
CONFIGURATION: https://docs.platformio.org/page/boards/espressif32/esp32-c3-devkitm-1.html
PLATFORM: Espressif 32 (6.5.0) > Espressif ESP32-C3-DevKitM-1
HARDWARE: ESP32C3 160MHz, 320KB RAM, 4MB Flash
DEBUG: Current (cmsis-dap) External (cmsis-dap, esp-bridge, esp-builtin, esp-prog, iot-bus-jtag, jlink, minimodule, olimex-arm-usb-ocd, olimex-arm-usb-ocd-h, olimex-arm-usb-tiny-h, olimex-jtag-tiny, tumpa)
PACKAGES:
 - framework-espidf @ 3.50102.240122 (5.1.2)
 - tool-cmake @ 3.16.4
 - tool-esptoolpy @ 1.40501.0 (4.5.1)
 - tool-idf @ 1.0.1
 - tool-mconf @ 1.4060000.20190628 (406.0.0)
 - tool-ninja @ 1.9.0
 - tool-riscv32-esp-elf-gdb @ 11.2.0+20220823
 - tool-xtensa-esp-elf-gdb @ 11.2.0+20230208
 - toolchain-esp32ulp @ 1.23500.220830 (2.35.0)
 - toolchain-riscv32-esp @ 12.2.0+20230208
```

run
```
--- Terminal on COM23 | 115200 8-N-1
--- Available filters and text transformations: colorize, debug, default, direct, esp32_exception_decoder, hexlify, log2file, nocontrol, printable, send_on_enter, time
--- More details at https://bit.ly/pio-monitor-filters
--- Quit: Ctrl+C | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H
ESP-ROM:esp32c3-api1-20210207
Build:Feb  7 2021
rst:0x1 (POWERON),boot:0xc (SPI_FAST_FLASH_BOOT)
SPIWP:0xee
mode:DIO, clock div:1
load:0x3fcd5820,len:0x1704
load:0x403cc710,len:0x968
load:0x403ce710,len:0x2f9c
entry 0x403cc710
␛[0;32mI (30) boot: ESP-IDF 5.1.2 2nd stage bootloader␛[0m
␛[0;32mI (30) boot: compile time Feb 14 2024 13:01:41␛[0m
␛[0;32mI (30) boot: chip revision: v0.4␛[0m
␛[0;32mI (33) boot.esp32c3: SPI Speed      : 80MHz␛[0m
␛[0;32mI (38) boot.esp32c3: SPI Mode       : DIO␛[0m
␛[0;32mI (43) boot.esp32c3: SPI Flash Size : 4MB␛[0m
␛[0;32mI (47) boot: Enabling RNG early entropy source...␛[0m
␛[0;32mI (53) boot: Partition Table:␛[0m
␛[0;32mI (56) boot: ## Label            Usage          Type ST Offset   Length␛[0m
␛[0;32mI (64) boot:  0 nvs              WiFi data        01 02 00009000 00006000␛[0m
␛[0;32mI (71) boot:  1 phy_init         RF data          01 01 0000f000 00001000␛[0m
␛[0;32mI (79) boot:  2 factory          factory app      00 00 00010000 00100000␛[0m
␛[0;32mI (86) boot: End of partition table␛[0m
␛[0;32mI (90) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=08638h ( 34360) map␛[0m
␛[0;32mI (104) esp_image: segment 1: paddr=00018660 vaddr=3fc8a800 size=01124h (  4388) load␛[0m
␛[0;32mI (108) esp_image: segment 2: paddr=0001978c vaddr=40380000 size=0688ch ( 26764) load␛[0m
␛[0;32mI (121) esp_image: segment 3: paddr=00020020 vaddr=42000020 size=15328h ( 86824) map␛[0m
␛[0;32mI (138) esp_image: segment 4: paddr=00035350 vaddr=4038688c size=03ebch ( 16060) load␛[0m
␛[0;32mI (145) boot: Loaded app from partition at offset 0x10000␛[0m
␛[0;32mI (145) boot: Disabling RNG early entropy source...␛[0m
␛[0;32mI (158) cpu_start: Unicore app␛[0m
␛[0;32mI (158) cpu_start: Pro cpu up.␛[0m
␛[0;32mI (167) cpu_start: Pro cpu start user code␛[0m
␛[0;32mI (167) cpu_start: cpu freq: 160000000 Hz␛[0m
␛[0;32mI (167) cpu_start: Application information:␛[0m
␛[0;32mI (170) cpu_start: Project name:     hello_world␛[0m
␛[0;32mI (175) cpu_start: App version:      15c73d6-dirty␛[0m
␛[0;32mI (181) cpu_start: Compile time:     Feb 14 2024 13:01:24␛[0m
␛[0;32mI (187) cpu_start: ELF file SHA256:  dc896f5825598d2e...␛[0m
␛[0;32mI (193) cpu_start: ESP-IDF:          5.1.2␛[0m
␛[0;32mI (198) cpu_start: Min chip rev:     v0.3␛[0m
␛[0;32mI (202) cpu_start: Max chip rev:     v0.99 ␛[0m
␛[0;32mI (207) cpu_start: Chip rev:         v0.4␛[0m
␛[0;32mI (212) heap_init: Initializing. RAM available for dynamic allocation:␛[0m
␛[0;32mI (219) heap_init: At 3FC8C790 len 00033870 (206 KiB): DRAM␛[0m
␛[0;32mI (225) heap_init: At 3FCC0000 len 0001C710 (113 KiB): DRAM/RETENTION␛[0m
␛[0;32mI (232) heap_init: At 3FCDC710 len 00002950 (10 KiB): DRAM/RETENTION/STACK␛[0m
␛[0;32mI (240) heap_init: At 50000010 len 00001FD8 (7 KiB): RTCRAM␛[0m
␛[0;32mI (247) spi_flash: detected chip: generic␛[0m
␛[0;32mI (251) spi_flash: flash io: dio␛[0m
␛[0;32mI (255) sleep: Configure to isolate all GPIO pins in sleep state␛[0m
␛[0;32mI (262) sleep: Enable automatic switching of GPIO sleep configuration␛[0m
␛[0;32mI (269) app_start: Starting scheduler on CPU0␛[0m
␛[0;32mI (274) main_task: Started on CPU0␛[0m
␛[0;32mI (274) main_task: Calling app_main()␛[0m
Hello world pio idf 0
Hello world pio idf 1
Hello world pio idf 2
Hello world pio idf 3
```
