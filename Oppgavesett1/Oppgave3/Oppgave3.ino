int red = 11;
int green = 10;
int blue = 9;

int pause = 500;

void setup() {
  pinMode(red, OUTPUT);
}

void loop() {
  
  analogWrite(red, 55);
  delay(pause);
  analogWrite(red, 0);
  delay(pause);
  
  analogWrite(green, 55);
  delay(pause);
  analogWrite(green, 0);
  delay(pause);
  
  analogWrite(blue, 55);
  delay(pause);
  analogWrite(blue, 0);
  delay(pause);




}
