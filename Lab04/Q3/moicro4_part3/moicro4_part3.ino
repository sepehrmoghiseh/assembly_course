#include <Servo.h>
Servo servo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int flag=0; //if flag=0 the number is + ; 
void setup() {
  servo.attach(9 , 1000 , 2000);  // attaches the servo on pin 9 to the servo object
   Serial.begin(9600);
   servo.write(90);
}
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
  
    int data = Serial.read();
    static int number = 0;

    if(data == (int)'-'){
      flag=1;
      
      } else if(data == (int)'=')
    {
        Serial.println("\n Degree:");
        int numberQ = -1 * (number);
        if(flag==1){
          numberQ = -1 * (numberQ);
          flag=0;
          }
        int value = map(numberQ ,-360 ,+360 ,0 ,180);
        servo.write(value);
        Serial.println(numberQ);
        number = 0;
        numberQ =0;
        delay(100);
    }else if((char)data == '0' ||(char)data == '1' ||(char)data == '2' ||(char)data == '3' ||(char)data == '4' ||(char)data == '5' ||(char)data == '6' ||(char)data == '7' ||(char)data == '8' ||(char)data == '9'){
        
        number = number*10 + (data - (int)'0');
    }
  }

}
