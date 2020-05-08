int counter = 0;
int v = 0;
int lys = 11;
int sekund = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(lys, OUTPUT);
}

void blinke() {
  analogWrite(lys, 255);
  delay(100);
  analogWrite(lys, 0);
  delay(100);
  }

void loop() {

  int brightness = v += 255/60;
  counter++;

  // Serial.println(brightness);
  // Serial.println(counter);

  
  analogWrite(lys, brightness);
  if(counter == 60) {
  blinke();
  blinke();
  blinke();
  }  
  else if (counter > 60){
    analogWrite(lys, 0);
  }
  delay(sekund); 
  
}
