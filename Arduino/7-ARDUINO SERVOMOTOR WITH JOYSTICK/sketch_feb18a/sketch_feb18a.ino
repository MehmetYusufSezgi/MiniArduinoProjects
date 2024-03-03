#include <Servo.h>

Servo motor;
int read;
int angle;

void setup() {
  motor.attach(3);
}

void loop() {
  read = analogRead(A0);
  angle = map(read, 0, 1023, 0, 180);
  motor.write(angle);
}
