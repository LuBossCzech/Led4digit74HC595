/*
  Simple test 7 segment LED x 4 bits digital tube display with 2 x 74HC595
  This module must use multiplexing bits, not possible set static show bits all at once!

  Count number from -20 to +9999 every 3 seconds
  with short sleep for your any other process
*/ 

#include <Led4digit74HC595.h>

Led4digit74HC595 myLedDisplay(A2, A1, A0);	// Pins:(SCLK, RCLK, DIO)
unsigned long myTimer;
int myNumber = -20;


void setup() {
  	Serial.begin(9600);
  	Serial.println("Start...");
  	
  	// Set decimal point from 0 (hide) to 4
	myLedDisplay.setDecimalPoint(2);	//show decimal point after 3 number (888.8)
}


void loop() {  
	myLedDisplay.loopShow();	// Must be call in every program loop - automatic multiplexing asn show numbers on display

	if( millis() - myTimer > 3000L)	//call every 3 sec
	{
		myNumber++;
		myLedDisplay.setNumber(myNumber);	// Set number to be show on display
		Serial.println(myNumber);
		/*
		Multiplexing show only one bit (number) in one time with very fast loop.
		Interrupt running program will be show for this time random 1 number of 4.
		This is not good state. Show nothing and sleep display is better.
		*/
		myLedDisplay.sleep();	// Show nothing on display (display off)
		delay(200); // ...any long time process, for example measuring temperature ...
		
		myTimer = millis();
	}
}


