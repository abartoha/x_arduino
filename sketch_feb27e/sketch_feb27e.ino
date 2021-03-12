//LCD Initialisations
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int cmnDelay = 100;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int trigPin = 9;
const int startDelay = 5000;
const int echoPin  = 10;
const int buzzPin = 8;
const int f_tone = 164;
float distCalc;
float durCalc;
int distCalc_int;
int durCalc_int;


 //NOT USEFUL: it was inside the for loop
    
    //if (distance <= 100 && isBuzz == false){
    //  tone(buzzPin, f_tone); // Send 1KHz sound signal...
    //  isBuzz = true;
    //}
    //else if (distance > 100 && isBuzz == true){
    //  noTone(buzzPin);
    //  isBuzz = false;
    //}



bool isBuzz;
long duration;
long distance;

void setup() {
  lcd.begin(16, 2); //begins the lcd_object
  //Data
  

  //Starting text
  lcd.setCursor(0,0);
  lcd.print("Distance Measurement");
  lcd.setCursor(0,1);
  lcd.print("With SONAR");
  delay(startDelay);
  
  //Sets the pinModes
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(buzzPin, OUTPUT);
  //Serial.begin(9600); // Starts the serial communication: !! Hopefully I won't need it anymor
  lcd.clear();
  delay(100);
  
  //isBuzz = false; now obsolete
}

void loop() {
  distCalc = 0;
  durCalc = 0;
  for (int recurse = 0;recurse < 10; recurse++){
    // Clears the trigPin, in case of failure
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);
    
    // Calculating the distance
    distance = duration*0.034/2;
    distCalc = distCalc + distance/10;
    durCalc = durCalc + duration/10;
    delay(100);

  }
  
  //lcd print
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Distance:");
  lcd.setCursor(0,1);
  lcd.print("Duration:");
  lcd.setCursor(9,0);
  lcd.print(distCalc);
  lcd.setCursor(9,1);
  lcd.print(durCalc);
}
