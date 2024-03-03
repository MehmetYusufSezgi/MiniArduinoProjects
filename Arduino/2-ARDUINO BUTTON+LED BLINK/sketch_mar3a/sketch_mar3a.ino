#define Button 8
#define Led 10

int buttonStatus = 0;

void setup() {
  pinMode(Button, INPUT);
  pinMode(Led, OUTPUT);
}

void loop() {
  buttonStatus = digitalRead(Button);
  if(buttonStatus == 1){
    for(int i=0; i<20; i++){
      digitalWrite(Led, HIGH);
      delay(50);
      digitalWrite(Led, LOW);
      delay(50);
    }
  }
  else{
    digitalWrite(Led, LOW);
  }
}
