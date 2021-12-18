//Active Buzzer - Potentiometer & Buzzer
int pot_pin = A2;
int pot_val;

String msg = "Potentiometer Voltage is ";
char period = '.';
int buzz_pin = 6;

int short_wait = 1000;
int wait = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot_pin, INPUT);
  pinMode(buzz_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  pot_val = analogRead(pot_pin);
  Serial.println(msg + pot_val + period);
  
  while (pot_val > 1000) {
    //analogWrite(buzz_pin, 100);
    digitalWrite(buzz_pin, HIGH);
    Serial.println(msg + pot_val + period);
  }

  digitalWrite(buzz_pin, LOW);
}
