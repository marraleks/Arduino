void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {

  int r = digitalRead(2);
  int l = digitalRead(4);


  Serial.println(r);
  Serial.println(l);

  if ( r == 1 || l == 1) {
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    } else {
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      }


}
