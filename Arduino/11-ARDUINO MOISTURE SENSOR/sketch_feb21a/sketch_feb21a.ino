int sensorPin = 9;
int buzzerPin = 8;
int data;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  data = digitalRead(sensorPin);
  if(data == true){
    tone(buzzerPin, 440);
    delay(100);
    noTone(buzzerPin);
    delay(100);
  }
  else{
    noTone(buzzerPin);
  }

}
