int lysSensor = A0;
int led = 11;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(lysSensor, INPUT);
  Serial.begin(9600);
}

void loop() {

  int lysVerdi = analogRead(lysSensor);
  Serial.println(lysVerdi);

  if(lysVerdi < 50) {
      analogWrite(led, 255);
    } else {
       analogWrite(led, 0);
    }

}
