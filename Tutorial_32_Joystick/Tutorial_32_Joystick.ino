//joystick
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
  //pull up resistor s_pin = 1)
  digitalWrite(s_pin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
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
}
