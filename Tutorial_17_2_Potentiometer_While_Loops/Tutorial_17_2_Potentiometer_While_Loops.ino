//While Loops - Potentiometers
int pot_pin = A5;
int red_led = 6;
int pot_val = 0; //0-1023
int wait = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot_pin, INPUT);
  pinMode(red_led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  pot_val = analogRead(pot_pin);
  Serial.print("Potentiometer Voltage is ");
  Serial.println(pot_val);
  delay(wait);

  while(pot_val > 1000) {
    digitalWrite(red_led, HIGH);
    pot_val = analogRead(pot_pin);
    Serial.print("Potentiometer Voltage is ");
    Serial.println(pot_val);
    delay(wait);
  }

  digitalWrite(red_led, LOW);
  
}
