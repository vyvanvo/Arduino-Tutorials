//Servo
#include <Servo.h>

int servo_pin = 9;
int servo_pos = 90;
Servo my_servo;

//servo 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  my_servo.attach(servo_pin);
}

void loop() {
  // put your main code here, to run repeatedly:

  // changing angle of servo
  Serial.println("What angle for the Servo?");
  while (!Serial.available()) {

  }

  servo_pos = Serial.parseInt();

  Serial.print("Angle: ");
  Serial.println(servo_pos);
  
  my_servo.write(servo_pos);
}
