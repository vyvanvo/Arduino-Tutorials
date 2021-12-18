//Arduino Variables
int redLED = 8;
int s_blink = 100;
int o_blink = 500;
int long_wait = 1000;

float pi = 3.14;
String myName = "Vy Vo";

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //S.O.S blinks
  //S blinks
  for (int i = 0; i < 3; i++) {
    digitalWrite(redLED, HIGH);
    delay(s_blink);
    digitalWrite(redLED, LOW);
    delay(s_blink);
  }

  //O blinks
  for (int i = 0; i < 3; i++) {
    digitalWrite(redLED, HIGH);
    delay(o_blink);
    digitalWrite(redLED, LOW);
    delay(o_blink);
  }

  //S blinks
  for (int i = 0; i < 3; i++) {
    digitalWrite(redLED, HIGH);
    delay(s_blink);
    digitalWrite(redLED, LOW);
    delay(s_blink);
  }

delay(long_wait);
}
