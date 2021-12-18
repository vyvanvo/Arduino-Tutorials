//quick pull_up resistor button
int btn_pin = 2;
int btn_val;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
  //pull up btn
  Serial.begin(9600);
  pinMode(btn_pin, INPUT);
  //pull up resistor btn_pin = 1
  digitalWrite(btn_pin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

  //when btn is pressed. btn_pin = 0
  btn_val = digitalRead(btn_pin);
  Serial.print("btn val = ");
  Serial.println(btn_val);
  //delay(dt);

  
}
