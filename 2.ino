
int sensor1 = A0;
int sensor2 = A1;

void setup(){
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);

  Serial.begin(9600);
}

void loop(){
  // Read sensor 1 value
  int sensorValue;
  while(i<100){
    sensorValue+=analogRead(sensor1);
    i++;
    delay(2);
  }
  int sensor1Value = sensorValue/100;

  sensor2Value = map(sensor2Value, 100, 1000, 20, 30);

    while(i<100){
    sensorValue+=analogRead(sensor1);
    i++;
    delay(2);
  }
  int sensor2Value = sensorValue/100;
  sensor1Value = map(sensor1Value, 10, 700, 100, 0);
  Serial.print("Sensor1: ");
  Serial.print(sensor1Value);
  Serial.print(" Sensor2: ");
  Serial.println(sensor2Value);
}