//servo & photoresistor

#include <Servo.h>

int servo_pin = 9;
int servo_pos = 0;
int light_pin = A2;
int light_val = 0;
String light_msg = "light val: ";
int wait = 250;
Servo my_servo;

void setup() {
  // put your setup code here, to run once:
  pinMode(light_pin, INPUT);
  Serial.begin(9600);
  my_servo.attach(servo_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  light_val = analogRead(light_pin);
  Serial.println(light_msg + light_val);
  
  //(on -> light_val = 780, off -> light_val = 150)
  // off -> angle = 160, on -> angle = 0 
  servo_pos = -(160./630.) * (light_val - 780);
  Serial.print("Angle: ");
  Serial.println(servo_pos);
  
  my_servo.write(servo_pos);
}
