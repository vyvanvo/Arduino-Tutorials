//quick pull_up resistor button
int btn_pin = 2;
int btn_old = 1; //set button to 1, btn is not pressed
int btn_new;
int dt = 100;

int led_pin = 8;
int led_state = 0; //led is off

void setup() {
  // put your setup code here, to run once:
  //pull up btn
  Serial.begin(9600);
  pinMode(btn_pin, INPUT_PULLUP);
  //pull up resistor btn_pin = 1
  //digitalWrite(btn_pin, HIGH);
  pinMode(led_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //when btn is pressed. btn_pin = 0
  btn_new = digitalRead(btn_pin);
  Serial.println(btn_new);

  if (btn_new == 0 && btn_old == 1) {
    if (led_state == 0) {
      digitalWrite(led_pin, HIGH);
      led_state = 1;
    }
    else {
      digitalWrite(led_pin, LOW);
      led_state = 0;
    }
  }

  btn_old = btn_new;
  delay(dt);
  
}
