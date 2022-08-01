#include <Servo.h>
#include <Arduino.h>;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int analogPin = A0; // potentiometer wiper (middle terminal) connected to analog pin 3
                    // outside leads to ground and +5V
int val = 0;  // variable to store the value read


int servoPos = 0;

void setup() {
  Serial.begin(9600); 
  // put your setup code here, to run once:
 servo1.attach(3);
 servo2.attach(5);
 servo3.attach(6);
 servo4.attach(9);
 servo1.write(servoPos);
    servo2.write(servoPos);
    servo3.write(servoPos);
    servo4.write(servoPos);
}

void loop() {
  val = analogRead(analogPin);
  Serial.println(val); 
  delay(1);
  // put your main code here, to run repeatedly:
  if (val >= 200) {
  servoPos = 180; 
  
    servo1.write(servoPos);
    servo2.write(servoPos);
    servo3.write(servoPos);
    servo4.write(servoPos);
  }

  if (val < 200) 
  {
    servoPos = 0;
    servo1.write(servoPos);
    servo2.write(servoPos);
    servo3.write(servoPos);
    servo4.write(servoPos);
  }
}
