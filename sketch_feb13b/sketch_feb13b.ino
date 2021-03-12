/*
* Ultrasonic Sensor HC-SR04 and Arduino Tutorial
*
* by Dejan Nedelkovski,
* www.HowToMechatronics.com
* 
* 
* P.S. I made an annoying buzzer alert so it's like a tripwire,
* to explode into a high pitch mess
*/
// defines pins numbers
const int trigPin = 10;
const int echoPin = 9;
const int buzzer = 4;
bool isBuzz = false;
// defines variables
long duration;
int distance;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
}
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance= duration*0.034/2;
  if (distance <= 180 ){ //&& isBuzz == false
    tone(buzzer, 164); // Send 1KHz sound signal...
    delay(1000);
    //isBuzz = true;
  }
  else{
    noTone(buzzer);
    //isBuzz = false;
  }
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
}
