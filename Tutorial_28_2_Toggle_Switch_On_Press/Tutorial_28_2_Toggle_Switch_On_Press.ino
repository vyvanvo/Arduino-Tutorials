//toggle switch - on press btn
int led_pin = 8;
int button_pin = 12;
int button_old = 1; //pull up resistor
int button_new; // input of button
int led_state = 0; //state is set to off
int wait = 100; //0.1s

void setup() {
  // put your setup code here, to run once:
  pinMode(button_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //read button pin
  // 1 -> button up
  // 0 -> button down

  button_new = digitalRead(button_pin);
  Serial.println(button_new);

  //on press button, if light is off, turn on light
  //if light is on, turn off light 
  if (button_old == 1 && button_new == 0) {
    if (led_state == 0) {
      digitalWrite(led_pin, HIGH);
      led_state = 1;
    }
    else {
      digitalWrite(led_pin, LOW);
      led_state = 0;
    }
  }

  button_old = button_new;
  delay(wait);
}
