#include <Wire.h>
#include <Keypad.h>
#include <LiquidCrystal.h>

#define MEM_ADDRESS 0b1010000
#define REQ_DELAY 20

const int rs = 32, en = 33, d4 = 34, d5 = 35, d6 = 36, d7 = 37;
const int led[4] = {38, 39, 40, 41};
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {22, 23, 24, 25}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {26, 27, 28}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void eeprom_write(uint16_t memory_address, uint8_t* data, uint8_t _size);
void eeprom_read(uint16_t memory_address, uint8_t* data, uint8_t _size);
void write_lcd_message(char *message, int _size, bool print_timer);
bool is_number(char chr);

const char states[4][11] = {"PRE-WASH", "WASHING", "WATER-WASH", "DRYING"};
unsigned long timerStart;
int timer = 100;
uint8_t cur_state;
bool is_on_timer = false, is_state_chosen = false;

void setup() {
  Wire.begin();
  for(int i = 0; i < 4; i++) {
    pinMode(led[i], OUTPUT);
    digitalWrite(led[i], LOW);
  }
  eeprom_read(0, &cur_state, 1);
  write_lcd_message(states[cur_state], false);
  digitalWrite(led[cur_state], HIGH);
  

}

void loop() {
  char key = keypad.getKey();
  
  if(key) {
    if(key == '1' || key == '2' || key == '3' || key == '4') {
      if(!is_on_timer && !is_state_chosen) {
        write_lcd_message(states[key - 49], false);
        cur_state = key - 49;
        eeprom_write(0, &cur_state, 1);
        for(int i = 0; i < 4; i++) {
          if((key - 49) == i)
            digitalWrite(led[i], HIGH);
          else
            digitalWrite(led[i], LOW);
        }
      }
    } else if(key == '#') {
      if(!is_state_chosen && !is_on_timer) {
        is_state_chosen = true;
        timer = 0;
        write_lcd_message(states[cur_state], true);
        for(int i = 0; i < 4; i++) {
          key = keypad.waitForKey();
          if(is_number(key)) {
            timer *= 10;
            timer += key - 48;
            write_lcd_message(states[cur_state], true);
          } else if(key == '#') {
            is_on_timer = true;
            timerStart = millis();
            break;
          } else if(key == '*') {
            is_state_chosen = false;
            write_lcd_message(states[cur_state], false);
            break;
          }
          if(i == 3) {
            is_on_timer = true;
            timerStart = millis();
          }
        }
      }
    } else if(key == '*') {
      if(is_state_chosen && is_on_timer) {
        write_lcd_message("PAUSED", true);
        digitalWrite(led[cur_state], LOW);
        key = keypad.waitForKey();
        if(key == '#' || '*') {
          timerStart = millis();
          write_lcd_message(states[cur_state], true);
          digitalWrite(led[cur_state], HIGH);
        }
      }
    }
  }

  if(is_on_timer && millis() - timerStart >= 1000) {
    timerStart = millis();
    timer = timer - 1;
    write_lcd_message(states[cur_state], true);

    if(timer % 2)
      digitalWrite(led[cur_state], HIGH);
    else
      digitalWrite(led[cur_state], LOW);
    
    if (timer == 0) {
      write_lcd_message("FINISHED", false);
      for(int i = 0; i < 4; i++) {
        digitalWrite(led[i], HIGH);
      }
      keypad.waitForKey();
      for(int i = 0; i < 4; i++)
        digitalWrite(led[i], LOW);
      digitalWrite(led[cur_state], HIGH);
      is_on_timer = false;
      is_state_chosen = false;
      write_lcd_message(states[cur_state], false);
    }
  }
}

void eeprom_write(uint16_t memory_address, uint8_t* data, uint8_t _size) {
  Wire.beginTransmission(MEM_ADDRESS);
  Wire.write((uint8_t)((memory_address & 0xFF00) >> 8));
  Wire.write((uint8_t)((memory_address & 0x00FF) >> 0));
  for(int i = 0; i < _size; i++)
    Wire.write(data[i]);
  Wire.endTransmission();
  delay(REQ_DELAY);
}

void eeprom_read(uint16_t memory_address, uint8_t* data, uint8_t _size) {
  Wire.beginTransmission(MEM_ADDRESS);
  Wire.write((uint8_t)((memory_address & 0xFF00) >> 8));
  Wire.write((uint8_t)((memory_address & 0x00FF) >> 0));
  Wire.endTransmission();

  Wire.requestFrom(MEM_ADDRESS, _size);
  for(int i = 0; i < _size; i++)
    data[i] = Wire.read();
}

void write_lcd_message(char *message, bool print_timer) {
  lcd.clear();
  for(int i = 0; message[i] != '\0'; i++)
    lcd.print(message[i]);
  if(print_timer) {
    lcd.setCursor(12, 0);
    lcd.print(timer);
  }
}

bool is_number(char chr) {
  if(chr >= 48 && chr <= 57)
    return true;
  return false;
}
