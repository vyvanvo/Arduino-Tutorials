//Active Buzzers
int buzz_pin = 6;

String msg = "Please input your number: ";
String msg2 = "The number you inputted is ";
char period = '.';

int short_wait = 1000;
int wait = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzz_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);
  while(!Serial.available()) {
    //do nothing, wait for user's input
  }

  num = Serial.parseInt();

  Serial.println(msg2 + num + period);
  delay(short_wait);

  if (num > 10) {
    digitalWrite(buzz_pin, HIGH);
    delay(wait);
    digitalWrite(buzz_pin, LOW);
  }
}
