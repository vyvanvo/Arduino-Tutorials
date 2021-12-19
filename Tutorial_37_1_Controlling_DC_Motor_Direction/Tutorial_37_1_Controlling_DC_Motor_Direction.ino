// controlling DC Motor Direction

// note: run one motor
int speed_pin = 5;
int dir_pin1 = 4;
int dir_pin2 = 3;
int motor_speed = 150 ; // 0 -> stop, 255 -> max speed

void setup() {
  // put your setup code here, to run once:
  
  pinMode(speed_pin, OUTPUT);
  pinMode(dir_pin1, OUTPUT);
  pinMode(dir_pin2, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  // set direction -> CW

  // direction CW -> IN1 = LOW, IN2 = HIGH
  // direction CCW -> IN1 = HIGH, IN2 = LOW
  digitalWrite(dir_pin1, LOW);
  digitalWrite(dir_pin2, HIGH);

  // turn on the DC Motor, set a speed
  analogWrite(speed_pin, motor_speed);

}
