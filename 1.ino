

int pin = A0;
int pinOut = 10;
void setup(){
  pinMode(A0, OUTPUT);
}

void loop(){
  int value = analogRead(A0);
  // Other code here
  digitalWrite(pinOut, HIGH);
}