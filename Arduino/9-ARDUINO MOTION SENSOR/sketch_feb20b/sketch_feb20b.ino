
int pirPin = 8;
int motion;
int buzzerPin = 7;

void setup() {
  pinMode(pirPin, INPUT);

}

void loop() {
  motion = digitalRead(pirPin);

  if(motion == HIGH){
    tone(buzzerPin, 440);
  }
  else{
    noTone(buzzerPin);
  }

}
