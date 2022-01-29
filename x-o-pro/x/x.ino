#include <LiquidCrystal.h>
#include <Keypad.h>
const int rs = 13, en = 8, d4 = 12, d5 = 11, d6 = 10, d7 = 9;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


const byte ROWS = 4; 
const byte COLS = 3; 
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {A12, A11, A10, A9}; 
byte colPins[COLS] = {A13, A14, A15}; 
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
char board[9];
boolean flag=true;
void setup() {
  lcd.begin(16, 4);
  lcd.clear();
  Serial.begin(9600);
  for(int i=0;i<9;i++){
    board[i]='_';
    }
  printboard();
  
}

void loop() {
    
    if(Serial.available()){
        char c = Serial.read();
        if(c=='e'){
           flag=false;
           winCheck(0);  
        }else if(c=='x'){
           flag=false;                   
           winCheck(1);
        }else if(c=='o'){
           flag=false;                    
           winCheck(2);
        }else{
           flag=true;
           int getIndex=index(c);
           if(board[getIndex - 1]=='_'){
              board[getIndex - 1]= 'o';
              printboard();
           }
                                   
        }
      
      }

    if(flag==true){
        char key = keypad.getKey();  
            if (key){

              boolean checkNumber=checkIsNumber(key);
              if(checkNumber){
                  
                  int indexOfboard=index(key);
                  if(board[indexOfboard - 1]=='_'){
                      board[indexOfboard - 1]= 'x';
                      printboard();
                      flag=false;
                      char winn =  checkwinn();
                      Serial.write(key); 
                      if(winn=='n'){
                        }else if(winn=='e'){
                            Serial.write('e');
                            winCheck(0);
                          }else if(winn=='x'){
                              Serial.write('x');
                              winCheck(1);
                            }else if(winn=='o'){
                                Serial.write('o');
                                winCheck(2);
                              }
                      
                      
                    }
                  
                
        
               } 
              
          }
    }
  }



void winCheck(int player)
{

  if(player==0){
      
      lcd.setCursor(2 , 0);
      lcd.print("Equal");
     
      }
 else if(player==1){
    lcd.setCursor(2 , 0);
    lcd.print("Player X won");
    
    }else if(player==2){
    lcd.setCursor(2 , 0);
    lcd.print("Player O won");
    
    }
    
    
}

char  checkwinn(){
  char whichwinn='n';
  boolean check_winn=false;
  if(board[0]==board[1] && board[0]==board[2] && board[0]!='_'){
    whichwinn=board[0];
    check_winn=true;
    
    }
  if(board[3]==board[4] && board[3]==board[5] && board[3]!='_'){
    whichwinn=board[3];
    check_winn=true;
    
    }

   if(board[6]==board[7] && board[6]==board[8] && board[6]!='_'){
    whichwinn=board[6];
    check_winn=true;
    
    }

    if(board[0]==board[3] && board[0]==board[6] && board[0]!='_'){
    whichwinn=board[0];
    check_winn=true;
    
    }
    if(board[1]==board[4] && board[1]==board[7] && board[1]!='_'){
    whichwinn=board[1];
    check_winn=true;
    
    }
    if(board[2]==board[5] && board[2]==board[8] && board[2]!='_'){
    whichwinn=board[2];
    check_winn=true;
    
    }
    if(board[0]==board[4] && board[0]==board[8] && board[0]!='_'){
    whichwinn=board[0];
    check_winn=true;
    
    }

    if(board[2]==board[4] && board[2]==board[6] && board[2]!='_'){
    whichwinn=board[2];
    check_winn=true;
    
    }



    if(board[0]!='_'  && board[1]!='_'  && board[2]!='_' && board[3]!='_' && board[4]!='_' && board[5]!='_' && board[6]!='_' && board[7]!='_' && board[8]!='_' && check_winn==false){
    
          whichwinn='e';
          
    }else if(check_winn==false){
      
          whichwinn='n';
         
      
      }

  
  return whichwinn;
  
  }

int index(char key){
  
  int index=0;
  if(key=='1'){
    index=1;
    }else if(key=='2'){
    index=2;
    }else if(key=='3'){
    index=3;
    }else if(key=='4'){
    index=4;
    }else if(key=='5'){
    index=5;
    }else if(key=='6'){
    index=6;
    }else if(key=='7'){
    index=7;
    }else if(key=='8'){
    index=8;
    }else if(key=='9'){
    index=9;
    }
  
  return index;
  }

    void printboard()
{

  lcd.clear();
  lcd.setCursor(0 , 0);
  lcd.print("O");
  lcd.setCursor(6 , 1);
  lcd.write(board[0]);
  lcd.setCursor(7 , 1);
  lcd.write(board[1]);
  lcd.setCursor(8 , 1);
  lcd.write(board[2]);
  lcd.setCursor(6 , 2);
  lcd.write(board[3]);
  lcd.setCursor(7 , 2);
  lcd.write(board[4]);
  lcd.setCursor(8 , 2);
  lcd.write(board[5]);
  lcd.setCursor(6 , 3);
  lcd.write(board[6]);
  lcd.setCursor(7 , 3);
  lcd.write(board[7]);
  lcd.setCursor(8 , 3);
  lcd.write(board[8]);
  
  
  
  
  }
  boolean checkIsNumber(char key){
    
    return ( (key=='1' ||key=='2' ||key=='3' ||key=='4' ||key=='5' ||key=='6' ||key=='7' ||key=='8'||key=='9' ) );
    
    }
