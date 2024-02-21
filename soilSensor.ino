//Soil Sensor
int sensor;
int moistureSignal = A0 ; // define the Analog pin # for the soil moisture sensor signal.
const int powerPin = 8 ;
const int delayTime = 1000;

void setup () {
  Serial.begin(9600); // start the serial communications
  pinMode(powerPin, OUTPUT);
}


void loop() {
  digitalWrite(powerPin, HIGH);
  delay(10);
  sensor = analogRead(A0);
  digitalWrite(powerPin, LOW);
  Serial.println(sensor);
  delay(delayTime);
}
