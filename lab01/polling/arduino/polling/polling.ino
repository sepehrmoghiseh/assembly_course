const int buttonPin0 = 10;
const int buttonPin1 = 11;
const int buttonPin2 = 12;
const int ledPin0 = 0;
const int ledPin1 = 1;
const int ledPin2 = 2;
const int ledPin3 = 3;
const int ledPin4 = 4;
const int ledPin5 = 5;
const int ledPin6 = 6;


// variables will change:
int buttonState0 = 0;
int buttonState1 = 0;
int buttonState2 = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(buttonPin0, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // read the state of the pushbutton value:
  buttonState0 = digitalRead(buttonPin0);
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState0 == HIGH) {
    digitalWrite(ledPin0, HIGH);
//    digitalWrite(ledPin1, LOW);
//    digitalWrite(ledPin2, LOW);
//    digitalWrite(ledPin3, LOW);
//    digitalWrite(ledPin4, LOW);
//    digitalWrite(ledPin5, LOW);
//    digitalWrite(ledPin6, LOW);
    delay(1000);
//    digitalWrite(ledPin0, LOW);
    digitalWrite(ledPin1, HIGH);
    delay(1000);
//    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    delay(1000);
//    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    delay(1000);
//    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    delay(1000);
//    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    delay(1000);
//    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, HIGH);
  } else if (buttonState1 == HIGH) {
    int i =0;
    for(i=0;i<strlen("SEPEHR");i=i+1){
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin5, HIGH);
   digitalWrite(ledPin4, HIGH);
   digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, HIGH);
   digitalWrite(ledPin0, HIGH);
    delay(1000);
  digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
   digitalWrite(ledPin4, LOW);
   digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin1, LOW);
   digitalWrite(ledPin0, LOW);
    delay(1000);
    }
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin5, HIGH);
   digitalWrite(ledPin4, HIGH);
   digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, HIGH);
   digitalWrite(ledPin0, HIGH);
    delay(1000);
     
  } else if (buttonState2 == HIGH) {
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin0, LOW);
  }
}
