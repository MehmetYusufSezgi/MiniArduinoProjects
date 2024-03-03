int buzzerPin = 8;
int sensorPin = A0;
int threshold = 250;
int data;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  data = analogRead(sensorPin);
  if(data>threshold){
    tone(buzzerPin, 440);
    delay(100);
    noTone(buzzerPin);
    delay(100);
  }
  else{
    noTone(buzzerPin);
  }
}
