const int sensorPin = 8; //initialize variable for ky-033 sensor
const int ledPin = 10; // initiatlize variable for Proof of concept LED


void setup() {
  Serial.begin(9600); //start serial monitor
  
  pinMode(sensorPin, INPUT); //designate sensor as input 
  
  pinMode(ledPin, OUTPUT); // designate LED pin as output

}

void loop() {
  int val = digitalRead(sensorPin); //store value from sensor into variable

  if (val == HIGH){ // sensor value will be HIGH if NO IR detected at receiver
    
    digitalWrite(ledPin,HIGH); //if no IR detected, LED will illuminate
    
    Serial.println("No IR detected"); // display results on serial monitor
    
  }else {
    
    digitalWrite(ledPin,LOW); //if IR is detected than LED on breadboard will turn off and the LED on the KY-033 module will light up
    
    Serial.println("IR detected");// display results on serial monitor
  }

  delay(500);
 }
  
