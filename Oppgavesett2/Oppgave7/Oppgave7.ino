
//    LED MAP
// | 0 | 3 | 6 |
// | 1 | 4 | 7 |
// | 2 | 5 | 8 |


int nrLeds = 9;
int ledPins[] = {13, 12, 11, 10, 9, 8, 7, 6, 5};
bool on = 1;

void setup() {
  for (int led = 0; led < nrLeds; led++)
  {
    pinMode(ledPins[led], OUTPUT);   
  }
}

void loop() {
  
  clearScreen();
  animasjon1(); 
  clearScreen();
  animasjon2();
  clearScreen();
  animasjon3(); 
  clearScreen();

}

void clearScreen() {
    for (int led = 0; led < nrLeds; led++)
    {
      if(led < nrLeds) {
        digitalWrite(ledPins[led], LOW);  
      } 
    }
    delay(500);
  }


//    LED MAP
// | 0 | 3 | 6 |
// | 1 | 4 | 7 |
// | 2 | 5 | 8 |

void animasjon1 () {
  digitalWrite(ledPins[4], HIGH);
  delay(500);
    }

void animasjon2 () { 
  digitalWrite(ledPins[1], HIGH);
  digitalWrite(ledPins[3], HIGH);
  digitalWrite(ledPins[5], HIGH);
  digitalWrite(ledPins[7], HIGH);
  delay(500);
    }

void animasjon3 () {
  digitalWrite(ledPins[0], HIGH);
  digitalWrite(ledPins[2], HIGH);
  digitalWrite(ledPins[6], HIGH);
  digitalWrite(ledPins[8], HIGH);
  delay(500);
  }
