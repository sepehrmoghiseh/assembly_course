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

   
void setup() {
  servo.attach(9,1000,2000);  // attaches the servo on pin 9 to the servo object
   Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  static String degree="";
  char key = keypad.getKey();  
  if (key){
    if (key == '*')
    {
      int value = degree.toInt()  ;
    Serial.print(value);
    if(value >180){
      value=value-360;
      value=map(value,-180,0,0,180);
    }
    else{
      value=map(value,-180,180,0,180);
    }
    servo.write(value);
    degree="";
    }
    else if (key >= '0' && key <= '9')
    {
      degree += key;
    }

    Serial.println(degree);
  }
   
    
    
    }
 

    
