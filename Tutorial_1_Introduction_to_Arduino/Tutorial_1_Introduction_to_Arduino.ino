// Introduction to Arduino
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //working with pin 13
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); //turning on LED at pin 13
  delay(1000); // LED on, wait 1s
  // 500 = 0.5s
  // 100 = 0.1s
  digitalWrite(13, LOW); // turning off LED at pin 13
  delay(1000); //LED off, wait 1s
}
