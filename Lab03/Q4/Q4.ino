#include <LiquidCrystal.h>

const int rs = 13, en = 12, d4 = 8, d5 = 9, d6 = 10, d7 = 11;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte col = 0;
byte row = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
}
void loop() {
 lcd.setCursor(0 ,0);
  lcd.print("S");

  for(int i=0 ; i<16 ;i++){
    int j=0;
        if(i % 2 == 0){
          j=0;
          }else{
            j=1;
            }
        delay(200);
        lcd.clear();
        lcd.setCursor(i , j);
        lcd.print("S");
        delay(200);
        lcd.clear();
  
      
      
     
  }
}
