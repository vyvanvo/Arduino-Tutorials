//controlling servos using joystick
#include <Servo.h>

int x_servo_pin = 9;
int y_servo_pin = 10;
int x_servo_pos = 0;
int y_servo_pos = 0;
Servo x_servo;
Servo y_servo;

int buzz_pin = 7;

int x_pin = A0;
int y_pin = A1;
int s_pin = 2;
int x_val;
int y_val;
int s_val;
int wait = 200;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(x_pin, INPUT);
  pinMode(y_pin, INPUT);
  pinMode(s_pin, INPUT);
  digitalWrite(s_pin, HIGH);

  //pinMode(x_servo_pin, OUTPUT);
  //pinMode(y_servo_pin, OUTPUT);
  //connect servo input to servo object
  x_servo.attach(x_servo_pin);
  y_servo.attach(y_servo_pin);

  pinMode(buzz_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x_val = analogRead(x_pin);
  y_val = analogRead(y_pin);
  s_val = digitalRead(s_pin);
  //delay(wait);

  Serial.print("x val = ");
  Serial.print(x_val);
  Serial.print(", y val = ");
  Serial.print(y_val);
  Serial.print(", switch state = ");
  Serial.println(s_val);

  x_servo_pos = (180./1023.) * x_val;
  x_servo.write(x_servo_pos);

  y_servo_pos = (180./1023.) * y_val;
  y_servo.write(y_servo_pos);

  if(s_val == 0) {
    digitalWrite(buzz_pin, HIGH);
  }
  else {
    digitalWrite(buzz_pin, LOW);
  }
}
