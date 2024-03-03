int buzzerPin = 9;
int value;
int threshold = 100;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  value = analogRead(A0);
  if(value>threshold){
    tone(buzzerPin, 440);
    delay(100);
    noTone(buzzerPin);
    delay(100);
  }
  else{
    noTone(buzzerPin);
  }

}
