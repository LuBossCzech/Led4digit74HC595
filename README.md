# Led4digit74HC595.h - Arduino library for use 7-segment led module

### Designed for use with China module 4 digits x 7 segments led with 2 pcs 74HC595

This module must use multiplexing bits, not possible set static show bits all at once!
Ideally for china (ebay) arduino module 

![alt tag](https://https://raw.githubusercontent.com/LuBossCzech/Led4digit74HC595/master/LEDmodule.jpg)

Show integer from -999 to +9999
If number > 9999 display show upper ----
If number < -999 display show ____
Optional set static decimal point on any position
Float number must be converted to integer!



_Version 1.1
Created by Lubomir Hron (Czech Republic)
Based on Kostarev V. - TM74HC595-4dig-display project	- thanks_
