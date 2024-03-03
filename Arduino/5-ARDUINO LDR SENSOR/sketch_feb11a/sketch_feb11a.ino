#define led 3

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(A0);
  Serial.println(light);
  delay(50);
  if(light>500){
    digitalWrite(led,LOW);
  }
  if(isik<500){
    digitalWrite(led,HIGH);
  }
}
