//tilt switches

int tilt_pin = 2;
int tilt_val;

void setup() {
  // put your setup code here, to run once:
  pinMode(tilt_pin, INPUT);
  digitalWrite(tilt_pin, HIGH); //pull up resistor btn: off -> 1
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tilt_val = digitalRead(tilt_pin);
  Serial.println(tilt_val);
}
