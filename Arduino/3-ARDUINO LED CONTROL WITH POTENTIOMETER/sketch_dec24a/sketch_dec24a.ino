#define led 3
#define pot A0

void setup(){

}
void loop(){
  int value = analogRead(pot);
  value = map(deger, 0, 1023, 0, 255);
  analogWrite(led,deger);
}