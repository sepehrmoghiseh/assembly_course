#include <Keypad.h>
#include "pitches.h"
#include "odeToJoy.h"
#include "jingleBells.h"

const byte rowsnum = 4;
const byte colsnum = 4;
byte rowpoints[rowsnum] = {18, 19, 20, 21};
byte colpoints[colsnum] = {22, 23, 24, 25};
char keys[rowsnum][colsnum] = {
  {'7', '8', '9', '/'},
  {'4', '5', '6', '*'},
  {'1', '2', '3', '-'},
  {'o', '0', '=', '+'}
};

Keypad keypad = Keypad( makeKeymap(keys), rowpoints, colpoints, rowsnum, colsnum );

float scale = 0;
int i = 0;

void setup() {
  pinMode(2, INPUT);
}

void loop() {
  i = 0;
  char key = keypad.getKey();
  if (key) {
    while (true) {
      if (key == '1') {
        for (int thisNote = 0; thisNote < sizeof(jingleBells) / sizeof(int); thisNote++) {
          scale = analogRead(A0) / 512.0;
          int noteDuration1 = 400 / noteDurations1[thisNote];
          tone(8, (int)(jingleBells[thisNote]*scale), noteDuration1);
          delay((int)(noteDuration1 * 1.3));
          if (digitalRead(2) == HIGH)
            i = 1;
          if (i == 1)
            return;
        }
      }
      if (key == '2') {
        for (int thisNote = 0; thisNote < sizeof(odeTojoy) / sizeof(int); thisNote++) {
          scale = analogRead(A0) / 512.0;
          int noteDuration2 = 400 / noteDurations2[thisNote];
          tone(8, (int)(odeTojoy[thisNote]*scale), noteDuration2);
          delay((int)(noteDuration2 * 1.3));
          if (digitalRead(2) == HIGH)
            i = 1;
          if (i == 1)
            return;
        }
      }
    }
  }
}
