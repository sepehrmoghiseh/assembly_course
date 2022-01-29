#include <Servo.h>
#include <Keypad.h>

//Setting Keypad configs
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
char keys[ROWS][COLS] = {
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'O','0','=','+'}
};
byte rowPins[ROWS] = {23, 25, 27, 29}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {31,33, 35,37}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
//Servo
Servo servo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin


void setup() {
  servo.attach(9);  // attaches the servo on pin 9 to the servo object
   Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=90;i++){
    
    servo.write(i);
    Serial.println(i);
    delay(10);
    }
    
    delay(10);
    for(int i=90;i>=0;i--){
    
    servo.write(i);
    Serial.println(i);
    delay(10);
    }

    

}
