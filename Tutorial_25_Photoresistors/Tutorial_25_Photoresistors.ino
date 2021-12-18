//photoresistors - detect light
int light_pin = A2; //reads 0-1023
int light_val;

int red_led = 6;
int green_led = 10;

int wait = 500;
int long_wait = 3000;

void setup() {
  // put your setup code here, to run once:
  pinMode(light_pin, INPUT);
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  light_val = analogRead(light_pin);
  Serial.println(light_val);
  delay(wait);

  if (light_val < 300) { //light is dim
    digitalWrite(red_led, HIGH);
    digitalWrite(green_led, LOW);
    delay(wait);
  }
  else { //light is bright
    digitalWrite(red_led, LOW);
    digitalWrite(green_led, HIGH);
    delay(wait);
  }
}
