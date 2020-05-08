 
int nrLeds = 6;
int ledPins[] = { 11, 10, 9, 6, 5, 3};
int analogInPin = A0;
int wait = 30;
bool LED_ON = LOW;
bool LED_OFF = HIGH;
int sensorValue = 0;
int ledLevel = 0;
 
void setup() {
  for (int led = 0; led < nrLeds; led++)
  {
    pinMode(ledPins[led], OUTPUT);
  }
}
 
void loop() {
  sensorValue = analogRead(analogInPin);
  ledLevel = map(sensorValue, 0, 1023, 0, nrLeds);
  for (int led = 0; led < nrLeds; led++)
  {
    if (led < ledLevel ) {
      digitalWrite(ledPins[led], LED_OFF);
    }
    else {
      digitalWrite(ledPins[led], LED_ON);
    }
  }
}
