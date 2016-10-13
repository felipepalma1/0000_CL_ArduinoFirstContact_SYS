/*#include <Servo.h>
Servo servo;


*/
void setup() {

  Serial.begin(9600);
  //servo.attach(3);
}

int pot;

void loop() {

  pot = analogRead(A0);
  pot = pot * 0.236;
  analogWrite(10, pot);
 Serial.println(pot);
}
