from nanpy import ArduinoApi, SerialManager

connection = SerialManager(device="/dev/ttyACM0")
arduino = ArduinoApi(connection=connection)

pin1 = 10
pin2 = 11

# Setup
arduino.pinMode(pin1)
arduino.pinMode(pin2)

# loop
while True:
  a, b =input('Select pin, output: ').split(' ')
  print(a, ' is ', b)
  if a=='pin1':
    if b=='HIGH':
      arduino.digitalWrite(pin1, arduino.HIGH)
    else:
      arduino.digitalWrite(pin1, arduino.LOW)
  elif a=='pin2':
    if b=='HIGH':
      arduino.digitalWrite(pin2, arduino.HIGH)
    else:
      arduino.digitalWrite(pin2, arduino.LOW)
  else:
    print("Error: invalid pin")
