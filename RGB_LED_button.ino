//define pins. can also be written as #define RED (no semi colon after)
int RED = 6;
int GREEN = 5;
int BLUE = 4;

//define button
int buttonPin = 3;

//define "mode" or color of LED
int mode = 0;


void setup() {
  
//set LED lights
 pinMode(RED, OUTPUT);
 pinMode(GREEN, OUTPUT);
 pinMode(BLUE, OUTPUT);

 //setup button
 pinMode(buttonPin, INPUT_PULLUP);

 }

void loop() {
  
//check the state of the button. If button is pressed the input will be considered "low" and will increment the mode. If the counter for mode exceeds 6 hen the cycle will return to 0.
 if (digitalRead(buttonPin) == LOW) {
  mode++;
  if (mode > 6) {
    mode = 0;
  }
  
 //debouncing delay to stop multiple detections from occuring.
  delay(250);
 }

//change the color of the LED based on the mode

if (mode == 0){ //LED off
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
} else if (mode == 1){ //Green
  analogWrite(RED, 0);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 0);
} else if (mode == 2){ //magenta
  analogWrite(RED, 255);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 255);
} else if (mode == 3){ //cyan
  analogWrite(RED, 0);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 255);
} else if (mode == 4){ //red
  analogWrite(RED, 255);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
} else if (mode == 5){ //yellow
  analogWrite(RED, 255);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 0);
} else if (mode == 6){ //blue
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 200);
  
}



}
