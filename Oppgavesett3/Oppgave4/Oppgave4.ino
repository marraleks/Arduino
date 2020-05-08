int button = 2;
int led = 11;

long buttonDownTime;

String buttonState = "up";
bool allowInput = true;
bool ledState = false;
bool blinkMode = false;

int counter = 0;


void setup() 
{
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  // handle button
  int buttonIsDown = digitalRead(button);
  
  if((buttonIsDown == 1) && (allowInput == true)) { // down
    if(buttonState == "up") {
      buttonState = "down";
      buttonPressed();
    }
    int hold = millis() - buttonDownTime;
    if(hold > 2000){
      allowInput = false;
      toggleLED();
    }
  }

  if(buttonIsDown == 0) { // up
    if(buttonState == "down") {
      buttonState = "up";
      buttonReleased();
    }
  }

  // run LED code
  if(ledState == true){
    if(blinkMode == true) {
      counter++;
      if(counter < 100) digitalWrite(led, LOW);
      if(counter > 100) digitalWrite(led, HIGH);
      if(counter > 200) counter = 0;
      delay(1);
    } else {
      digitalWrite(led, HIGH);
    }
   }else{
    digitalWrite(led, LOW);
   }
}

void buttonPressed() {
  Serial.println("button pressed");
    
  buttonDownTime = millis();
}

void buttonReleased() {
  Serial.println("button released");
  allowInput = true;
  if(blinkMode == false) {
      blinkMode = true;
    } else { 
      blinkMode = false;
    }
}

void toggleLED() {

  Serial.println("toggle led");
  if(ledState == false) { 
      ledState = true;
      blinkMode = true;
      counter = 0;
    } else {
      ledState = false;
    }
}
