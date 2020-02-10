#include <Servo.h>
// we will use  MY_SERVOS digital pins numbered 2-12
#define MY_SERVOS 10
#define DIGITAL_BASE 2

Servo sv[MY_SERVOS];
int step=4;
void setup() {
  Serial.begin(57600);
  for (int i=0; i < MY_SERVOS; i++) {
    sv[i].attach(i+DIGITAL_BASE);
    sv[i].write(0);
  }
  delay(2000);
  Serial.setTimeout(5000);
}

void loop() {
 int servo;
 int degrees;
 while (Serial.read() != '+') {};
 servo = Serial.parseInt();
 degrees = Serial.parseInt();
 sv[servo].write(degrees);
 Serial.print(">>>>");Serial.print(servo); Serial.print(" ");Serial.println(degrees);
}
