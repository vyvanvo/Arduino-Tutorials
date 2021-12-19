//stepper motor

#include <Stepper.h>

int steps_per_revolution = 2048; //28BYJ-48 = 2048
int motor_speed = 10; //10 rpm (revolution per minute
Stepper stepper_motor(steps_per_revolution, 8,10,9,11); //stepper motor sequence
int dt(500);

//int btn_pin = 2;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  stepper_motor.setSpeed(motor_speed);
}

void loop() {
  // put your main code here, to run repeatedly:

  stepper_motor.step(steps_per_revolution);
  delay(dt);

  stepper_motor.step(-steps_per_revolution/2);
  delay(dt);
   
}
