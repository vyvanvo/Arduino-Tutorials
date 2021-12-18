//push button - pull down resistor
int led_pin = 8;
int button_pin = A2;
int button_read;
int wait = 250;
int led_wait = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(button_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //reads the input if btn is up or down
  //pull down resistor
  // 0 = btn up
  // 1 = btn down
  Serial.println(button_read);
  button_read = digitalRead(button_pin);
  delay(wait);

  if (button_read == 0) { //button down
    digitalWrite(led_pin, LOW);
    //delay(led_wait);
  } 
  else if(button_read == 1) { //button up
    digitalWrite(led_pin, HIGH);
    //delay(led_wait);
  }
}
