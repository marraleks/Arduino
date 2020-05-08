int btn = 2;
int led = 11;

bool btnOn = false;
bool ledOn = false; 

void setup() {
  Serial.begin(9600);
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);
} 

void loop() {
  
  if(digitalRead(btn) == 1) {
    btnOn = true;
  } else {
    if(btnOn == true) {
      btnPressed(); 
    }
    btnOn = false;
    delay(10);
  }
}

void btnPressed() {
  if(ledOn == false) {
    ledOn = true;
    digitalWrite(led, HIGH);
  } else {
    ledOn = false;
    digitalWrite(led, LOW);
  }
}
