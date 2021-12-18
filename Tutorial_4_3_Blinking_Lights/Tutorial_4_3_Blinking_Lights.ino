//Arduino Variable - Blinking Lights
int redLED = 12;
int greenLED = 8;
int blueLED = 4;
int red_blink = 100;
int green_blink = 500;
int blue_blink = 1000;
int half_sec_blink = 500;

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

  //blink together
  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(blueLED, HIGH);
  delay(half_sec_blink);
  
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  delay(half_sec_blink);
  
}
