//AnalogWrite Command - LED: Increasing Brightness
int led = 9;
int bright = 0;
int wait = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //analog write
  bright = 0;
  
  while(bright <= 255) {
    analogWrite(led, bright);
    delay(wait);
    digitalWrite(led, LOW);
    delay(wait);
    bright += 10;
  }
}
