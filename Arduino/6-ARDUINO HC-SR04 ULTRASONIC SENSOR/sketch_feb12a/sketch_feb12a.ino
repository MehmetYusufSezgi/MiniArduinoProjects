#define echoPin 6
#define trigPin 7
#define buzzerPin 8 

int maximumRange = 50;
int minimumRange = 0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int value = DistanceFunction(maximumRange, minimumRange);
  melody(value*10);
}

int DistanceFunction(int maximumRange, int minimumRange){
  long duration, distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;
  delay(50);

  if(distance >= maximumRange || distance <= minimumRange)
  return 0;
  return distance;
}

int melody(int delayTime){
  tone(buzzerPin, 440);
  delay(delayTime);
  noTone(buzzerPin);
  delay(delayTime);
}
