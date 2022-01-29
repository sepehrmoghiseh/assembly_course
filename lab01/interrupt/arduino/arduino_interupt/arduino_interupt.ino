const int in0 = 18;
const int in1 = 19;
const int in2 = 20;
const int out0 = 0;
const int out1 = 1;
const int out2 = 2;
const int out3 = 3;
const int out4 = 4;
const int out5 = 5;
const int out6 = 6;
const int out7 = 7;


 boolean flag1 = false;
 boolean flag2 = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(out0, OUTPUT);
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);
  pinMode(out5, OUTPUT);
  pinMode(out6, OUTPUT);
  pinMode(out7, OUTPUT);

  pinMode(in0, INPUT);
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  attachInterrupt(digitalPinToInterrupt(in0), switch1Pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(in1), switch2Pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(in2), switch3Pressed, FALLING);
}

void switch1Pressed() {
  flag1 = true;
}

void switch2Pressed() {
  flag2 = true;
}
void switch3Pressed() {
  digitalWrite(out0, LOW);
  digitalWrite(out1, LOW);
  digitalWrite(out2, LOW);
  digitalWrite(out3, LOW);
  digitalWrite(out4, LOW);
  digitalWrite(out5, LOW);
  digitalWrite(out6, LOW);
  digitalWrite(out7, LOW);
}


void loop() {
  // put your main code here, to run repeatedly:

  if (flag1) {
    digitalWrite(out0, HIGH);
    delay(1000);
    digitalWrite(out1, HIGH);
    delay(1000);
    digitalWrite(out2, HIGH);
    delay(1000);
    digitalWrite(out3, HIGH);
    delay(1000);
    digitalWrite(out4, HIGH);
    delay(1000);
    digitalWrite(out5, HIGH);
    delay(1000);
    digitalWrite(out6, HIGH);
    delay(1000);
    digitalWrite(out7, HIGH);
    delay(1000);
    flag1 = false;
  }

  if (flag2) {
    for (int i = 0; i < strlen("SEPEHR"); i++) {
      digitalWrite(out0, HIGH);
      digitalWrite(out1, HIGH);
      digitalWrite(out2, HIGH);
      digitalWrite(out3, HIGH);
      digitalWrite(out4, HIGH);
      digitalWrite(out5, HIGH);
      digitalWrite(out6, HIGH);
      digitalWrite(out7, HIGH);
      delay(1000);
      digitalWrite(out0, LOW);
      digitalWrite(out1, LOW);
      digitalWrite(out2, LOW);
      digitalWrite(out3, LOW);
      digitalWrite(out4, LOW);
      digitalWrite(out5, LOW);
      digitalWrite(out6, LOW);
      digitalWrite(out7, LOW);
      delay(1000);

    }
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    digitalWrite(out4, HIGH);
    digitalWrite(out5, HIGH);
    digitalWrite(out6, HIGH);
    digitalWrite(out7, HIGH);

    flag2 = false;
  }
}
