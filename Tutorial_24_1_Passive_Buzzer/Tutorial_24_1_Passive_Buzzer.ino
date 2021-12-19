//Passive Buzzer
int buzz_pin = 8;
int buzz_time = 1; //1 miliseconds
int buzz_time2 = 2;
int buzz_time3 = 3;
int buzz_time800 = 800; // 8 microseconds
int buzz_time500 = 500;
int buzz_time200 = 200;
int buzz_time60 = 60;

int wait = 1000;
int i;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzz_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //get different tones by changing the the delay time
  
  for (i = 0; i < 100; i++) {
    digitalWrite(buzz_pin, HIGH);
    delay(buzz_time3);
    digitalWrite(buzz_pin, LOW);
    delay(buzz_time3);
  }

  for (i = 0; i < 100; i++) {
    digitalWrite(buzz_pin, HIGH);
    delay(buzz_time2);
    digitalWrite(buzz_pin, LOW);
    delay(buzz_time2);
  }

  for (i = 0; i < 100; i++) {
    digitalWrite(buzz_pin, HIGH);
    delay(buzz_time);
    digitalWrite(buzz_pin, LOW);
    delay(buzz_time);
  }

  for (i = 0; i < 100; i++) {
    digitalWrite(buzz_pin, HIGH);
    delayMicroseconds(buzz_time800);
    digitalWrite(buzz_pin, LOW);
    delayMicroseconds(buzz_time800);
  }

  for (i = 0; i < 100; i++) {
    digitalWrite(buzz_pin, HIGH);
    delayMicroseconds(buzz_time500);
    digitalWrite(buzz_pin, LOW);
    delayMicroseconds(buzz_time500);
  }

  for (i = 0; i < 100; i++) {
    digitalWrite(buzz_pin, HIGH);
    delayMicroseconds(buzz_time200);
    digitalWrite(buzz_pin, LOW);
    delayMicroseconds(buzz_time200);
  }

  for (i = 0; i < 100; i++) {
    digitalWrite(buzz_pin, HIGH);
    delayMicroseconds(buzz_time60);
    digitalWrite(buzz_pin, LOW);
    delayMicroseconds(buzz_time60);
  }
}
