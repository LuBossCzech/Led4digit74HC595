# Arduino library for 7-segment led module

Designed for China (ebay) module 4 digits x 7 segments led with 2 pcs 74HC595  
This module must use multiplexing positions, not possible set static show bits all at once!  

![alt tag](https://raw.githubusercontent.com/LuBossCzech/Led4digit74HC595/master/LEDmodule.jpg)

Show integer from -999 to +9999  
If number > 9999 display upper ----  
If number < -999 display lower ____  
Optional set static show decimal point on any position  
Float number must be converted to integer!  
  
_Version 1.1  
Created by Lubomir Hron (Czech Republic)_
