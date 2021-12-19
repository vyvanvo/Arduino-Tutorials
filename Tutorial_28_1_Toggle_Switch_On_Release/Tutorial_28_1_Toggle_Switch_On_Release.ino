//toggle switch - on release btn
int led_pin = 8;
int button_pin = 12;
int button_old = 1;
int button_new; //input of button (digital)
int led_state = 0; //state is set to off;
int wait = 100; //0.1 s

void setup() {
  // put your setup code here, to run once:
  pinMode(button_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //read button_pin
  // 1 -> button up
  // 0 -> button down
  button_new = digitalRead(button_pin);
  Serial.println(button_new);
  //delay(wait);
  
  //toggle switch pull up resistor
  if(button_old == 0 && button_new == 1) { //switch state when button is pressed then released
    if(led_state == 0) { // if led_state = off -> turn on light
      digitalWrite(led_pin, HIGH);
      led_state = 1;
    }
    else { // if led_state = on -> turn off light
      digitalWrite(led_pin, LOW);
      led_state = 0;
    }
  }

  button_old = button_new;
  delay(wait);
}
