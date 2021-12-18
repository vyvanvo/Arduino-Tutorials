//Changing Tone of Active Buzzer
int buzz_pin = 8;
int wait = 1000;
int wait1 = 1;
int wait2 = 2;
int j;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzz_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //tone changes based on delay time
  for (j = 1; j <= 100; j++) {
    digitalWrite(buzz_pin, HIGH);
    delay(wait1);
    digitalWrite(buzz_pin, LOW);
    delay(wait1);
  }

  
  for (j = 1; j <= 100; j++) {
    digitalWrite(buzz_pin, HIGH);
    delay(wait2);
    digitalWrite(buzz_pin, LOW);
    delay(wait2);
  }
}
