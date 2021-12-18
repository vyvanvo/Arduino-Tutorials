//push buttons to change light brightness
int led_pin = 11;
int btn_pin_bright = A2; //button that increases the brightness
int btn_pin_dim = A4; //button that decreases the brightness
int buzz_pin = 6; warning buzz
int led_val = 0; //brightness value
int btn_bright_val = 0;
int btn_dim_val = 0;
int wait = 100;
String btn_bright_msg = "Button Bright: ";
String btn_dim_msg = ", Button Dim: ";
String led_msg = "LED value: ";

void setup() {
  // put your setup code here, to run once:
  pinMode(btn_pin_bright, INPUT);
  pinMode(btn_pin_dim, INPUT);
  pinMode(led_pin, OUTPUT);
  pinMode(buzz_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //pull down resistor
  //1 -> btn down
  //0 -> btn up

  //read the inputs
  btn_bright_val = digitalRead(btn_pin_bright);
  btn_dim_val = digitalRead(btn_pin_dim);

  Serial.print(btn_bright_msg + btn_bright_val);
  Serial.println(btn_dim_msg + btn_dim_val);

  if (btn_bright_val == 1 && btn_dim_val == 0) { //btn_bright is pressed
    if (led_val >= 0 && led_val < 255) {
      digitalWrite(buzz_pin, LOW);
      led_val += 5;  
      Serial.println(led_msg + led_val);
      analogWrite(led_pin, led_val);
    }
    else { //if brightness is greater than 255, buzz
      Serial.println(led_msg + led_val);
      digitalWrite(buzz_pin, HIGH);
    }
  }
  else if (btn_bright_val == 0 && btn_dim_val == 1) { //btn_dim is pressed
    if (led_val <= 255 && led_val > 0) {
      digitalWrite(buzz_pin, LOW);
      led_val -= 5;
      Serial.println(led_msg + led_val);
      analogWrite(led_pin, led_val);
    }
    else { //if brightness is less than 0, buzz
      Serial.println(led_msg + led_val);
      digitalWrite(buzz_pin, HIGH);
    }
  }

  Serial.println(led_msg + led_val);  
}
