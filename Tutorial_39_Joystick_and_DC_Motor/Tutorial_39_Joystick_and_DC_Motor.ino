// Joystick & DC Motor

// joystick
int x_pin = A0;
int y_pin = A1;
int s_pin = 2;

int x_val;
int y_val;
int s_val;
int wait = 200;

// DC Motor
int speed_pin = 5;
int dir_pin1 = 4;
int dir_pin2 = 3;

int motor_speed;

void setup() {
  // put your setup code here, to run once:
  
  // joystick
  pinMode(x_pin, INPUT);
  pinMode(y_pin, INPUT);
  pinMode(s_pin, INPUT);
  digitalWrite(s_pin, HIGH); // pull up resistor -> btn up

  // DC Motor
  pinMode(speed_pin, OUTPUT);
  pinMode(dir_pin1, OUTPUT);
  pinMode(dir_pin2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // get values from joystick
  x_val = analogRead(x_pin);
  y_val = analogRead(y_pin);
  s_val = digitalRead(s_pin);

  delay(wait);

  Serial.print("x val = ");
  Serial.print(x_val);
  Serial.print(", y val = ");
  Serial.print(y_val);
  Serial.print(", switch state = ");
  Serial.println(s_val);

  // calculate motor speed & direction -> using y_val
  if (y_val >= 0 && y_val <= 493) { // joystick moving forward -> direction CW
    digitalWrite(dir_pin1, LOW);
    digitalWrite(dir_pin2, HIGH);

    motor_speed = (-255./493)*y_val + 255;
    Serial.print("motor_speed = ");
    Serial.println(motor_speed);
    analogWrite(speed_pin, motor_speed);
  }
  else if (y_val > 493 && y_val <= 1023) { // joystick moving backward -> direction CCW
    digitalWrite(dir_pin1, HIGH);
    digitalWrite(dir_pin2, LOW);

    motor_speed = (255./530.)*(y_val-1023) +  255;
    analogWrite(speed_pin, motor_speed);
    Serial.print("motor_speed = ");
    Serial.println(motor_speed);
  }
  
}
