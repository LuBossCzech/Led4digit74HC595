/*
  Simple test 7 segment LED x 4 bits digital tube display with 2 x 74HC595
  This module must use multiplexing bits, not possible set static show bits all at once!

  Count number from -20 to +9999 every one second
*/ 

#include <Led4digit74HC595.h>

Led4digit74HC595 myLedDisplay(A2, A1, A0);	// Pins:(SCLK, RCLK, DIO)
unsigned long myTimer;
int myNumber = -20;


void setup() {
  	Serial.begin(9600);
  	Serial.println("Start...");
	myLedDisplay.setDecimalPoint(0);
}


void loop() {  
	myLedDisplay.loopShow();	// Must be call in every program loop - automatic multiplexing and show numbers on display

	if( millis() - myTimer > 1000L)	//call every 1 sec
	{
		myNumber++;
		myLedDisplay.setNumber(myNumber);	// Set number to be show on display
		Serial.println(myNumber);
		myTimer = millis();
	}
}


