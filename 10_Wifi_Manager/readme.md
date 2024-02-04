# connection log
* connect to wifi access point ESPAC67B22AEE68
* configure wifi
* enter password
* the ESP will reboot, connect to the wifi and the app will continue

```bash
rst:0x1 (POWERON_RESET),boot:0x13 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:2
load:0x3fff0030,len:1184
load:0x40078000,len:13232
load:0x40080400,len:3028
entry 0x400805e4
*WM: 
*WM: AutoConnect Try No.:
*WM: 0
*WM: Connecting as wifi client...
*WM: Try to connect with saved credentials
*WM: Connection result: 
*WM: 1
*WM: SET AP STA
Entered config mode
192.168.4.1
ESPAC67B22AEE68
*WM:
*WM: Configuring access point...
*WM: ESPAC67B22AEE68
*WM: AP IP address: 
*WM: 192.168.4.1
*WM: HTTP server started
*WM: About to scan()
*WM: About to scan()
*WM: Scan done
...
*WM: DUP AP: Sputnik-V
*WM: About to scan()
*WM: About to scan()
*WM: Scan done
*WM: About to scan()
*WM: About to scan()
*WM: Handle not found
*WM: Request redirected to captive portal
*WM: Scan done
...
*WM: About to scan()
*WM: About to scan()
*WM: Handle wifi
*WM: Scan done
*WM: Sent config page
*WM: Scan done
*WM: About to scan()
*WM: About to scan()
*WM: Scan done
*WM: DUP AP: Sputnik-V
*WM: WiFi save
*WM: Sent wifi save page
*WM: Connecting to new AP
*WM: Connecting as wifi client...
*WM: Connection result: 
*WM: 1
*WM: Failed to connect.
*WM: About to scan()
*WM: About to scan()
*WM: Scan done
*WM: DUP AP: Sputnik-V
*WM: Info
*WM: Sent info page
WiFi connected
CORRUPT HEAP: Bad head at 0x3ffbd808. Expected 0xabba1234 got 0x00820000

assert failed: multi_heap_free multi_heap_poisoning.c:259 (head != NULL)

Backtrace: 0x4008373d:0x3ffb1ea0 0x4008d31d:0x3ffb1ec0 0x400928e9:0x3ffb1ee0 0x400924e1:0x3ffb2010 0x40083cad:0x3ffb2030 0x40092919:0x3ffb2050 0x40146d7d:0x3ffb2070 0x400d17f2:0x3ffb2090 0x400d160b:0x3ffb2260 0x400d38b6:0x3ffb2290

ELF file SHA256: 59583c0ccdfb9efd

Rebooting...
ets Jun  8 2016 00:22:57

rst:0xc (SW_CPU_RESET),boot:0x13 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:2
load:0x3fff0030,len:1184
load:0x40078000,len:13232
load:0x40080400,len:3028
entry 0x400805e4
*WM: 
*WM: AutoConnect Try No.:
*WM: 0
*WM: Connecting as wifi client...
*WM: Try to connect with saved credentials
*WM: Connection result: 
*WM: 3
*WM: IP Address:
*WM: 10.0.0.113
WiFi connected
Hello Wifi 0
Hello Wifi 1
Hello Wifi 2
Hello Wifi 3
...
```