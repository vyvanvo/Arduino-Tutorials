//stepper motor

#include <Stepper.h>

int steps_per_revolution = 2048; //28BYJ-48 = 2048
int motor_speed = 10; //5 rpm (revolution per minute
Stepper stepper_motor(steps_per_revolution, 8,10,9,11); //stepper motor sequence
int dt(500);

int btn_pin = 2;
int btn_old = 1; //btn initialized to not pressed
int btn_new; //new btn input

// 0 -> going clockwise (CW)
// 1 -> going counter clockwise (CCW)
int motor_state = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  stepper_motor.setSpeed(motor_speed);

  pinMode(btn_pin, INPUT);
  digitalWrite(btn_pin, HIGH); //pull up resistor btn
}

void loop() {
  // put your main code here, to run repeatedly:

  while(motor_state == 0) { //rotating CW
    stepper_motor.step(1);

    //on press btn
    btn_new = digitalRead(btn_pin);
    Serial.println(btn_new);

    if (btn_new == 0 && btn_old == 1) { //when btn is pressed
      stepper_motor.step(-1); //go CCW 
      motor_state = 1; //change state to CCW
    }
  
    btn_old = btn_new;
    //delay(dt);
    
  }

  while(motor_state == 1) { //rotating CCW
    stepper_motor.step(-1);

    //on press btn
    btn_new = digitalRead(btn_pin);
    Serial.println(btn_new);

    if (btn_new == 0 && btn_old == 1) { //when btn is pressed
      stepper_motor.step(1); //go CW
      motor_state = 0; //change state to CW
    }
  
    btn_old = btn_new;
    //delay(dt);
    
  }

  
   
}
