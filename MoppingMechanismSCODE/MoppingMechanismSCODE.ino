#include <Servo.h>
int direction = 1;

Servo myServo;
Servo Servo2;

int servoPin = 9;
int servoPin2 = 7;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  Servo2.attach(servoPin2);
  Servo2.write(90);
}
void loop() {
  servo211();
  Servo2.write(0);
  delay(500);
  Servo2.write(120);
}
void servo211(){
  for (int position = 0; position <= 180; position++) {
      myServo.write(position);
      if (position == 180) direction = 0;
      delay(10);
    }
}