#include <Servo.h>
Servo servo;  // create servo object to control a servo
int val;
void setup() {
  // put your setup code here, to run once:
  servo.attach(9,1000,2000);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.print("Potentiometer: ");
    val = analogRead(A0);            // reads the value of the potentiometer (value between 0 and 1023)
    val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
    Serial.println(val);
    servo.write(val);
    delay(1000);

}
