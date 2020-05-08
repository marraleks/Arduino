int inpPin = A0;
int outPin = 11;

void setup() {
  Serial.begin(9600);
  pinMode(inpPin, INPUT);
}

void loop() {
  int inputValue = analogRead(inpPin);
  int outputValue = map(inputValue, 0, 1023, 0, 255);
  Serial.println(inputValue);
  
  analogWrite(outPin, outputValue);

  delay(10);
}
