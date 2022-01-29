
#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'7','8','9', '/'},
  {'4','5','6', '*'},
  {'1','2','3', '-'},
  {'o','0','=', '+'}
};
byte rowPins[ROWS] = {22, 23, 24, 25}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {26, 27, 28, 29}; //connect to the column pinouts of the keypad

const byte ledPins[9] = {A0, A1, A2, A3, A4, A5, A6, A7, A8};

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){

  for (byte i = 0; i < 9; i++)
    pinMode(ledPins[i], OUTPUT);
}
  
void loop(){
  char key = keypad.getKey();
  
  if (key){
    int i=0;
      for(i=0;i<9;i++){
    digitalWrite(ledPins[i],LOW);
  }
    for(i=0;i<key- '0';i++){
    digitalWrite(ledPins[i], HIGH);
  }
  }
};
