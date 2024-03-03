void MyFunction(int speed1, int speed2) {
  digitalWrite(8,HIGH);
  delay(speed1);
  digitalWrite(8,LOW);
  delay(speed2);
}

void setup() {
  pinMode(8,OUTPUT);
  int speed1 = 300;
  int speed2 = 300;
  for(int i=0; i<5; i++){
    MyFunction(speed1, speed2);
  }
}


void loop() {
  
}

