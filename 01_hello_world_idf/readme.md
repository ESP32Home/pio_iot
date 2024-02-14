# Hello World using ESP-IDF
* installed VSCode extension ESP-IDF
* used express configuration selected paths and defined in env variables
    * IDF_PATH
    * IDF_TOOLS_PATH
* Set Espressif target defines IDF_TARGET and generates sdkconfig

# monitor output log

```
D:\Dev\ESP32Home\pio_iot\01_hello_world_idf>C:\IDF_TOOLS\python_env\idf5.1_py3.11_env\Scripts\python.exe C:\ESP-IDF\v5.1.2\esp-idf\tools\idf_monitor.py -p COM23 -b 115200 --toolchain-prefix riscv32-esp-elf- --target esp32c3 d:\Dev\ESP32Home\pio_iot\01_hello_world_idf\build\hello_world.elf
--- WARNING: GDB cannot open serial ports accessed as COMx
--- Using \\.\COM23 instead...
--- esp-idf-monitor 1.4.0 on \\.\COM23 115200 ---
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ESP-ROM:esp32c3-api1-20210207
Build:Feb  7 2021
rst:0x1 (POWERON),boot:0xc (SPI_FAST_FLASH_BOOT)
SPIWP:0xee
mode:DIO, clock div:1
load:0x3fcd5820,len:0x1704
load:0x403cc710,len:0x968
load:0x403ce710,len:0x2f9c
entry 0x403cc710
I (30) boot: ESP-IDF v5.1.2 2nd stage bootloader
I (30) boot: compile time Feb 14 2024 11:36:25
I (30) boot: chip revision: v0.4
I (33) boot.esp32c3: SPI Speed      : 80MHz
I (38) boot.esp32c3: SPI Mode       : DIO
I (43) boot.esp32c3: SPI Flash Size : 2MB
I (47) boot: Enabling RNG early entropy source...
I (53) boot: Partition Table:
I (56) boot: ## Label            Usage          Type ST Offset   Length
I (64) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (71) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (79) boot:  2 factory          factory app      00 00 00010000 00100000
I (86) boot: End of partition table
I (90) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=08728h ( 34600) map
I (104) esp_image: segment 1: paddr=00018750 vaddr=3fc8a800 size=01120h (  4384) load
I (108) esp_image: segment 2: paddr=00019878 vaddr=40380000 size=067a0h ( 26528) load
I (121) esp_image: segment 3: paddr=00020020 vaddr=42000020 size=15744h ( 87876) map
I (138) esp_image: segment 4: paddr=0003576c vaddr=403867a0 size=03e70h ( 15984) load
I (145) boot: Loaded app from partition at offset 0x10000
I (145) boot: Disabling RNG early entropy source...
I (158) cpu_start: Unicore app
I (159) cpu_start: Pro cpu up.
I (167) cpu_start: Pro cpu start user code
I (167) cpu_start: cpu freq: 160000000 Hz
I (167) cpu_start: Application information:
I (170) cpu_start: Project name:     hello_world
I (176) cpu_start: App version:      83f3d28-dirty
I (181) cpu_start: Compile time:     Feb 14 2024 11:36:13
I (187) cpu_start: ELF file SHA256:  f03600b710a3f7c6...
I (193) cpu_start: ESP-IDF:          v5.1.2
I (198) cpu_start: Min chip rev:     v0.3
I (203) cpu_start: Max chip rev:     v0.99
I (207) cpu_start: Chip rev:         v0.4
I (212) heap_init: Initializing. RAM available for dynamic allocation:
I (219) heap_init: At 3FC8C770 len 00033890 (206 KiB): DRAM
I (226) heap_init: At 3FCC0000 len 0001C710 (113 KiB): DRAM/RETENTION
I (233) heap_init: At 3FCDC710 len 00002950 (10 KiB): DRAM/RETENTION/STACK
I (240) heap_init: At 50000010 len 00001FD8 (7 KiB): RTCRAM
I (247) spi_flash: detected chip: generic
I (251) spi_flash: flash io: dio
W (255) spi_flash: Detected size(4096k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (268) sleep: Configure to isolate all GPIO pins in sleep state
I (275) sleep: Enable automatic switching of GPIO sleep configuration
I (282) app_start: Starting scheduler on CPU0
I (287) main_task: Started on CPU0
I (287) main_task: Calling app_main()
Hello world!
This is esp32c3 chip with 1 CPU core(s), WiFi/BLE, silicon revision v0.4, 2MB external flash
Minimum free heap size: 330660 bytes
Hello world 0
Hello world 1
Hello world 2
Hello world 3
Hello world 4
Hello world 5
```