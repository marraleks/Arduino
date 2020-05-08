int tid = 500;
int led = 13;
int pause = tid * 3;
 

void setup() {
  pinMode(led, OUTPUT);
}


void dot() {
  digitalWrite(led, HIGH);
  delay(1 * tid);
  digitalWrite(led, LOW);
  delay(1 * tid);
  }

void dash() {
  digitalWrite(led, HIGH);
  delay(3 * tid);
  digitalWrite(led, LOW);
  delay(1 * tid);
}


void loop() {
   dot(); 
   dot();
   dot();
   dot();
   delay(pause);
   dot();
   delay(pause);
   dot();
   dash();
   dot();
   dot();
   delay(pause);
   dot();
   dash();
   dot();
   dot();
   delay(pause);
   dash();
   dash();
   dash();
   delay(pause *2);
}
