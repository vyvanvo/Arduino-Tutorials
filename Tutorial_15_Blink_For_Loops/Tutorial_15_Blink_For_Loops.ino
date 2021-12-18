//For Loops
int yellow_led = 6;
int red_led = 9;
int yellow_wait = 500;
int red_wait = 500;
int yellow_blink = 3;
int red_blink = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(yellow_led, OUTPUT);
  pinMode(red_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //yellow led blink 3 times
  for(int i = 0; i < yellow_blink; i++) {
    digitalWrite(yellow_led, HIGH);
    delay(yellow_wait);
    digitalWrite(yellow_led, LOW);
    delay(yellow_wait);
  }

  //red led blink 5 times
  for (int i = 0; i < red_blink; i++) {
    digitalWrite(red_led, HIGH);
    delay(red_wait);
    digitalWrite(red_led, LOW);
    delay(red_wait);
  }
  
}
