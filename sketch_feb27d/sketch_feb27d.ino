/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int interval = 100;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  //lcd.print("Assalamualaikum");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  //lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
  lcd.setCursor(0,0);
  lcd.print(" ");
  lcd.print("H");
  delay(interval);
  lcd.print("A");
  delay(interval);
  lcd.print("P");
  delay(interval);
  lcd.print("P");
  delay(interval);
  lcd.print("Y");
  delay(interval);
  lcd.print(" B");
  delay(interval);
  lcd.print("I");
  delay(interval);
  lcd.print("R");
  delay(interval);
  lcd.print("T");
  delay(interval);
  lcd.print("H");
  delay(interval);
  lcd.print("D");
  delay(interval);
  lcd.print("A");
  delay(interval);
  lcd.print("Y");
  delay(interval);
  lcd.setCursor(0,1);
  lcd.print("      ");
  lcd.print("A");
  delay(interval);
  lcd.print("K");
  delay(interval);
  lcd.print("I");
  delay(interval);
  lcd.print("B");
  delay(interval);
  delay(3000);
  lcd.setCursor(0,0);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  lcd.setCursor(0,0);
  lcd.print(" ");
  lcd.print("H");
  delay(interval);
  lcd.print("A");
  delay(interval);
  lcd.print("P");
  delay(interval);
  lcd.print("P");
  delay(interval);
  lcd.print("Y");
  delay(interval);
  lcd.print(" B");
  delay(interval);
  lcd.print("I");
  delay(interval);
  lcd.print("R");
  delay(interval);
  lcd.print("T");
  delay(interval);
  lcd.print("H");
  delay(interval);
  lcd.print("D");
  delay(interval);
  lcd.print("A");
  delay(interval);
  lcd.print("Y");
  delay(interval);
  lcd.setCursor(0,1);
  lcd.print("   BOKA-CHODA   ");
  delay(2000);
  lcd.setCursor(0,1);
  lcd.print("                ");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("   BOKA-CHODA   ");
  delay(2000);
  lcd.setCursor(0,1);
  lcd.print("                ");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("   BOKA-CHODA   ");
  delay(2000);
  lcd.setCursor(0,1);
  lcd.print("                ");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("   BOKA-CHODA   ");
  delay(2000);
  lcd.setCursor(0,1);
  lcd.print("                ");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("   BOKA-CHODA   ");
  delay(2000);
  lcd.setCursor(0,1);
  lcd.print("                ");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("   BOKA-CHODA   ");
  delay(2000);
  lcd.setCursor(0,1);
  lcd.print("                ");
  delay(interval);
  delay(3000);
  lcd.setCursor(0,0);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  
}