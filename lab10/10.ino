#define l1 1
#define l2 2
#define l3 3
#define l4 4


void setup() {
  // put your setup code here, to run once:
    Serial3.begin(9600);
    pinMode(l1, OUTPUT);
    pinMode(l2, OUTPUT);
    pinMode(l3, OUTPUT);
    pinMode(l4, OUTPUT);
    //pinMode(l5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
String n;
  while(Serial3.available()==0);
    n=Serial3.readString();
    Serial3.println(n);
    int size = n.length();
    char array[size];
    
    for(int i=0; i<size; i++)
    {
        array[i] = n[i];
    }

     print_char_array_to_LED(array, size);
     
}


void print_char_array_to_LED(char array[], int size)
{
    for(int i=0; i<size; i++)
    {delay(2*200);
      if(array[i]=='a' ||array[i]=='A' ){
        
        print_A();
      }
      else if(array[i]=='b' ||array[i]=='B' ){
        print_B();
      }
      else if(array[i]=='c' ||array[i]=='C' ){
        print_C();
      }
      else if(array[i]=='d' ||array[i]=='D' ){
        print_D();
      }
      else if(array[i]=='e' ||array[i]=='E' ){
        print_E();
      }
      else if(array[i]=='f' ||array[i]=='F' ){
        print_F();
      }
      else if(array[i]=='g'||array[i]=='G'){
        print_G();
      }
      else if(array[i]=='h' ||array[i]=='H' ){
        print_H();
      }

       else if(array[i]=='I' ||array[i]=='i' ){
        print_I();
      }

       else if(array[i]=='J'||array[i]=='j' ){
        print_J();
      }
       else if(array[i]=='K'||array[i]=='k' ){
        print_K();
      }
      else if(array[i]=='L' ||array[i]=='l' ){
        print_L();
      }
       else if(array[i]=='m' ||array[i]=='M' ){
        print_M();
      }
       else if(array[i]=='n' ||array[i]=='N' ){
        print_N();
      }
      else if(array[i]=='o' ||array[i]=='O' ){
        print_O();
      }
      else if(array[i]=='P' ||array[i]=='p' ){
        print_P();
      }
      else if(array[i]=='Q' ||array[i]=='q' ){
        print_Q();
      }
      else if(array[i]=='R' ||array[i]=='r' ){
        print_R();
      }
       else if(array[i]=='S' ||array[i]=='s' ){
        print_S();
      }
      else if(array[i]=='T' ||array[i]=='t' ){
        print_T();
      }
      else if(array[i]=='U' ||array[i]=='u' ){
        print_U();
      }
      else if(array[i]=='V' ||array[i]=='v' ){
        print_V();
      }
      else if(array[i]=='W' ||array[i]=='w' ){
        print_W();
      }
      else if(array[i]=='X' ||array[i]=='x' ){
        print_X();
      }
      else if(array[i]=='Y' ||array[i]=='y' ){
        print_Y();
      }
      else if(array[i]=='Z' ||array[i]=='z' ){
        print_Z();
      }
     
     
      else if(array[i]=='1'){
        led_on();
      }
     
   }
      
      







    
}

void led_on(){
  digitalWrite(l1, HIGH);
  digitalWrite(l4, HIGH);
   digitalWrite(l3, HIGH);
  digitalWrite(l2, HIGH);
  delay(200);
   digitalWrite(l1, LOW);
  digitalWrite(l4, LOW);
   digitalWrite(l3, LOW);
  digitalWrite(l2, LOW);
}

 void print_A(){
    digitalWrite(l1, HIGH);
    digitalWrite(l4, HIGH);
    delay(3 * 200);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    delay(200);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    delay(2 * 200);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l4, LOW);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);

    
}


void print_B(){
  
  
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    delay(2 *200);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    delay(200);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    delay(2 * 200);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  
  
  
  
}




void print_D(){
  
  
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l4, HIGH);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    delay(3 *200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);

  
  
  
}





void print_C(){
  
  
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    delay(200);
    digitalWrite(l4, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    delay(3 *200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);

  
  
  
}




void print_E(){

    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l1, LOW);
    delay(2*200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l1, LOW);
    delay(2*200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);

  
  }

void print_H(){
    digitalWrite(l1, HIGH);
    digitalWrite(l4, HIGH);
    delay(3*200);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    delay(200);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    delay(3*200);
    digitalWrite(l1, LOW);
    digitalWrite(l4, LOW);
  
  
  }

  
void print_N(){
    digitalWrite(l1, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l2, HIGH);
    delay(200);
    digitalWrite(l2, LOW);
    digitalWrite(l3, HIGH);
    delay(200);
    digitalWrite(l3, LOW);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l4, LOW);
  
  
  }

    
void print_M(){


  
    digitalWrite(l2, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l3, HIGH);
    delay(200);
    digitalWrite(l3, LOW);

    delay(200);
    
    digitalWrite(l2, LOW);
    digitalWrite(l4, LOW);
  
  
  }





  
    
void print_R(){


  
    digitalWrite(l1, HIGH);
    digitalWrite(l4, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    delay(200);
    digitalWrite(l2, HIGH);
    digitalWrite(l1, LOW);
    delay(200);
    digitalWrite(l3, HIGH);
    digitalWrite(l2, LOW);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l4, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l4, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    delay(2*200);
    digitalWrite(l1, HIGH);
    digitalWrite(l4, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
}




  
    
void print_Z(){


  
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l3, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l4, LOW);
    delay(200);
    digitalWrite(l2, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);


  
  
  }


  
void print_L(){


    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l4, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    delay(4*200);
    digitalWrite(l4, LOW);

  
  }
void print_I(){


    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l3, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l4, LOW);
    delay(4*200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  }



  void print_F(){


    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(3*200);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    digitalWrite(l1, LOW);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(2*200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  }

  

  void print_G(){


    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l4, HIGH);
    digitalWrite(l3,LOW);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  }




  void print_J(){


    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l2, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l4, HIGH);
    digitalWrite(l3,LOW);
    delay(2*200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    delay(2*200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  }

  
  

  void print_K(){


    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l2, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l4, HIGH);
    digitalWrite(l3,LOW);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l3, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l4, HIGH);
    digitalWrite(l2,LOW);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  
  }


  

  void print_O(){


    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l4, HIGH);
    digitalWrite(l3,LOW);
    delay(2*200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  
  }

  
  void print_P(){

    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(3*200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l4, HIGH);
    digitalWrite(l3,LOW);
    delay(2*200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  
  }

  void print_Q(){

    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(2*200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  
  }

  
  
  void print_S(){

    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  }

  
  void print_T(){

    
   
    digitalWrite(l3, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l4, LOW);
    delay(4*200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  
  }

  
  void print_U(){

    
   
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(4*200);
    
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  
  
  }

  
  void print_V(){
    digitalWrite(l3, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l4, LOW);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(2*200);
    
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  }
  
  void print_W(){
    digitalWrite(l2, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l2, HIGH);
    digitalWrite(l1, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  }
  
  
  void print_X(){
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    delay(2*200);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  }

  
  
  void print_Y(){
    digitalWrite(l3, HIGH);
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l2, LOW);
    digitalWrite(l1, HIGH);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    delay(200);
    digitalWrite(l2, LOW);
    digitalWrite(l1, HIGH);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    delay(2*200);
    digitalWrite(l2, HIGH);
    digitalWrite(l1, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    delay(200);
    digitalWrite(l2, LOW);
    digitalWrite(l1, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    delay(2*200);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  
  }

  

  
