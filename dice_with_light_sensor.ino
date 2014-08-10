const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;

const int sensor = A0;

int sensorDefault;

boolean first = true;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);

  pinMode(sensor, INPUT);  

  delay(25);
  sensorDefault = analogRead(sensor);
  delay(25);
}


void loop() {

  int v = analogRead(sensor);
  
  if (first == true || abs(sensorDefault - v) > 100) {
    first = false;

    int rounds = random(2, 20);
  
    while (rounds > 0) {  

      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
  
      int rnd = random(1, 7);  
        
      switch(rnd) {
        case 1:
          digitalWrite(led7, HIGH);
        break;
        
        case 2:
          digitalWrite(led1, HIGH);
          digitalWrite(led6, HIGH);
        break;
        
        case 3:
          digitalWrite(led1, HIGH);
          digitalWrite(led6, HIGH);
          digitalWrite(led7, HIGH);
        break;
    
        case 4:
          digitalWrite(led1, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led6, HIGH);
        break;
    
        case 5:
          digitalWrite(led1, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led6, HIGH);
          digitalWrite(led7, HIGH);
        break;
    
        case 6:
          digitalWrite(led1, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led3, HIGH);
          digitalWrite(led4, HIGH);
          digitalWrite(led5, HIGH);
          digitalWrite(led6, HIGH);
        break;
      }
      rounds--;
      delay(100);
    }
  }
  
}
