
int dir1 = 3;
int dir2 = 4;

int pwm1 = 5;
int pwm2 = 6;

void setup(){
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(pwm1, OUTPUT);
  pinMode(pwm2, OUTPUT);
  Serial.begin(9600);
}


void loop(){
  if(Serial.available()>0){
    char direction = Serial.readline();
    switch(direction){
      case 'f': forwardMotor(); break;
      case 'b': backwardMotor(); break;
      case 'l': leftMotor(); break;
      case 'r': rightMotor(); break;
      default:  resetMotor();
    }
  }
}

void forwardMotor(){
  digitalWrite(dir1, HIGH);
  digitalWrite(pwm1, 200);
  digitalWrite(dir2, HIGH);
  digitalWrite(pwm2, 200);
}

void backwardMotor(){
  digitalWrite(dir1, LOW);
  digitalWrite(pwm1, 200);
  digitalWrite(dir2, LOW);
  digitalWrite(pwm2, 200);
}

void leftMotor(){
  digitalWrite(dir1, LOW);
  digitalWrite(pwm1, 200);
  digitalWrite(dir2, HIGH);
  digitalWrite(pwm2, 200);
}

void rightMotor(){
  digitalWrite(dir1, HIGH);
  digitalWrite(pwm1, 200);
  digitalWrite(dir2, LOW);
  digitalWrite(pwm2, 200);
}

void resetMotor(){
  digitalWrite(dir1, HIGH);
  digitalWrite(pwm1, 0);
  digitalWrite(dir2, HIGH);
  digitalWrite(pwm2, 0);
}