int inpPin = A0;
int outLed1 = 11;
int outLed2 = 10;
int outLed3 = 9;

void setup() {
  Serial.begin(9600);
  pinMode(inpPin, INPUT);
}


void loop() {
  int inputValue = analogRead(inpPin);
  int outputValue = map(inputValue, 0, 1023, 0, 255);
  Serial.println(inputValue);
  


  if(inputValue < 333){
     analogWrite(outLed1, 255);
     analogWrite(outLed2, 0);
     analogWrite(outLed3, 0);
  }
  if(inputValue > 333) {
    analogWrite(outLed2, 255);
    analogWrite(outLed3, 0);
  }
  if(inputValue > 666) {
    analogWrite(outLed3, 255);
  }

  delay(10);
}
