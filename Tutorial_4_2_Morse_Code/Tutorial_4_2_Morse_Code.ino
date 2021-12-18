//Arduino Variables - Morse Code 
int redLED = 13;
int greenLED = 8;
int blueLED = 4;
int red_blink = 100;
int green_blink = 500;
int blue_blink = 1000;

float pi = 3.14;
String myName = "Vy Vo";

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //S.O.S blinks
  //S blinks
  for (int i = 0; i < 5; i++) {
    digitalWrite(redLED, HIGH);
    delay(red_blink);
    digitalWrite(redLED, LOW);
    delay(red_blink);
  }

  //O blinks
  for (int i = 0; i < 10; i++) {
    digitalWrite(greenLED, HIGH);
    delay(green_blink);
    digitalWrite(greenLED, LOW);
    delay(green_blink);
  }

  //S blinks
  for (int i = 0; i < 15; i++) {
    digitalWrite(blueLED, HIGH);
    delay(blue_blink);
    digitalWrite(blueLED, LOW);
    delay(blue_blink);
  }
}
