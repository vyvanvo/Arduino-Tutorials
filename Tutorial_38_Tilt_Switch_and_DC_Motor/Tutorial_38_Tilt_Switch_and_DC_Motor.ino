// Tilt Switch & DC Motor

// DC motor
int speed_pin = 5;
int dir_pin1 = 4;
int dir_pin2 = 3;
int motor_speed = 150;

// tilt switch
int tilt_pin = 2;
int tilt_val;

void setup() {
  // put your setup code here, to run once:

  // tilt switch
  pinMode(tilt_pin, INPUT);
  digitalWrite(tilt_pin, HIGH); // pull up btn

  // DC motor
  pinMode(speed_pin, OUTPUT);
  pinMode(dir_pin1, OUTPUT);
  pinMode(dir_pin2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // set direction -> CW
  digitalWrite(dir_pin1, LOW);
  digitalWrite(dir_pin2, HIGH);

  // set motor speed
  analogWrite(speed_pin, motor_speed);
  
  tilt_val = digitalRead(tilt_pin);

  //turning on and off DC Motor
  if(tilt_val == 1) { // tilt switch on the side
    // turn off motor
    motor_speed = 0; 
  }
  else{
    motor_speed = 150;
  }
   
}
