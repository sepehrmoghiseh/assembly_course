const byte ledPins[9] = {A0, A1, A2, A3, A4, A5, A6, A7, A8};


String incomingByte ; // for incoming serial data

void setup(){
  Serial.begin(9600);

  for (byte i = 0; i < 9; i++)
    pinMode(ledPins[i], OUTPUT);
}
  
void loop(){
  if (Serial.available() > 0) {
    // read the incoming byte:
    int incomingInt=0;
    incomingByte = Serial.readString();
     incomingInt = incomingByte.toInt();
    if(incomingInt>9){
          Serial.println("invalid number");

    }
    else{
    int i=0;
      for(i=0;i<9;i++){
    digitalWrite(ledPins[i],LOW);
  }
    for(i=0;i<incomingInt;i++){
    digitalWrite(ledPins[i], HIGH);
  }}
  }
};
