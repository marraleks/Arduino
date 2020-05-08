int btn = 2;
int led = 11;
int teller;

long currentTid;
long tidsLimit;

int ledStatus = LOW; 

void setup() {
  Serial.begin(9600);
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);
} 

void loop() {

  int knappVerdi = digitalRead(btn);
 
  if (knappVerdi == 1){
    delay(200);
    Serial.println("Trykket");
   
    if (teller == 0) {
    currentTid = millis();
    tidsLimit = currentTid + 600;
    teller = 1;
    }
    else if (teller == 1 && millis() < tidsLimit){
      Serial.println("To ganger");
      
      styrLys();  
      currentTid = 0;
      tidsLimit = 0;
      teller = 0;     
    }   
  }

  if (teller == 1 && tidsLimit != 0 && millis() > tidsLimit){
     Serial.println("En gang");
    
     currentTid = 0;
     tidsLimit = 0;
     teller = 0;
  }
}
    

void styrLys() {
  if(ledStatus == LOW) {
    digitalWrite(led, HIGH);
    ledStatus = HIGH;
  } else if(ledStatus == HIGH){
    digitalWrite(led, LOW);
    ledStatus = LOW;
    
  }
}
    
    
    
    
    
    
    
    
    
    





  
