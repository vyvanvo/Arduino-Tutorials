// Buttons & DC Motor

// buttons
int CW_btn = A0;
int CCW_btn = A1;

int CW_btn_val;
int CCW_btn_val;

// DC Motor
int speed_pin = 5;
int dir_pin1 = 4;
int dir_pin2 = 3;
int motor_speed = 0; // set to stop

int state = 0; //default state, starting at rest
// state = 1, in CW direction
// state = 2, in CCW direction

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  //buttons
  pinMode(CW_btn, INPUT);
  pinMode(CCW_btn, INPUT);
  digitalWrite(CW_btn, HIGH); //pull up btn -> btn unpressed
  digitalWrite(CCW_btn, HIGH);

  // DC Motor
  pinMode(speed_pin, OUTPUT);
  pinMode(dir_pin1, OUTPUT);
  pinMode(dir_pin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("motor_speed = ");
  Serial.print(motor_speed);

  CW_btn_val = digitalRead(CW_btn);
  CCW_btn_val = digitalRead(CCW_btn);

  Serial.print(", state = ");
  Serial.println(state);

  // only change DC motor when only one btn is pressed, will NOT work if both btns are pressed
  if (state == 0) { //initial state, starting at rest
    if (CW_btn_val == 0 && CCW_btn_val == 1) { // increase speed in CW direction
      if (motor_speed < 255) {
        digitalWrite(dir_pin1, LOW);
        digitalWrite(dir_pin2, HIGH);
        motor_speed += 5;
        Serial.print("motor_speed = ");
        Serial.println(motor_speed);

        state = 1; // state is in CW direction
      }
    }
    else if (CW_btn_val == 1 && CCW_btn_val == 0) { // increase speed in CCW direction
      if (motor_speed < 255) {
        digitalWrite(dir_pin1, HIGH);
        digitalWrite(dir_pin2, LOW);
        motor_speed += 5;

        Serial.print("motor_speed = ");
        Serial.println(motor_speed);

        state = 2; // state is in CCW direction
       }
    }
  }else if (state == 1) { // state currently CW
    if (CW_btn_val == 0 && CCW_btn_val == 1) { //increase speed in CW direction
      if (motor_speed >= 0 && motor_speed < 255) {
        digitalWrite(dir_pin1, LOW);
        digitalWrite(dir_pin2, HIGH);
        motor_speed += 5;
        Serial.print("motor_speed = ");
        Serial.println(motor_speed);

        state = 1; // state is in CW direction
      }
    }
    else if (CW_btn_val == 1 && CCW_btn_val == 0) { //decrease speed in CW direction
      if (motor_speed > 0 && motor_speed <= 255) {
        digitalWrite(dir_pin1, LOW);
        digitalWrite(dir_pin2, HIGH);
        motor_speed -= 5;
        Serial.print("motor_speed = ");
        Serial.println(motor_speed);

        state = 1; // state is in CW direction
      }
      else if (motor_speed <= 0) { //change state to CCW direction
        digitalWrite(dir_pin1, HIGH);
        digitalWrite(dir_pin2, LOW);
        motor_speed += 5;
        Serial.print("motor_speed = ");
        Serial.println(motor_speed);

        state = 2; // state is in CCW direction
      }
    }
  }else if (state == 2) { // state currently CCW
    if (CW_btn_val == 1 && CCW_btn_val == 0) { //increase speed in CCW direction
      if (motor_speed >= 0 && motor_speed < 255) {
        digitalWrite(dir_pin1, HIGH);
        digitalWrite(dir_pin2, LOW);
        motor_speed += 5;
        Serial.print("motor_speed = ");
        Serial.println(motor_speed);

        state = 2; // state is in CCW direction
      }
    }
    else if (CW_btn_val == 0 && CCW_btn_val == 1) { //decrease speed in CCW direction
      if (motor_speed > 0 && motor_speed <= 255) {
        digitalWrite(dir_pin1, HIGH);
        digitalWrite(dir_pin2, LOW);
        motor_speed -= 5;
        Serial.print("motor_speed = ");
        Serial.println(motor_speed);

        state = 2; // state is in CCW direction
      }
      else if (motor_speed <= 0) { // change state to CW direction
        digitalWrite(dir_pin1, LOW);
        digitalWrite(dir_pin2, HIGH);
        motor_speed += 5;
        Serial.print("motor_speed = ");
        Serial.println(motor_speed);

        state = 1; // state is in CW direction
      }
    }
  }

  analogWrite(speed_pin, motor_speed);
}
