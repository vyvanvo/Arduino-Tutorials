//Working with breadboards
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //pinMode 13
  for(int i = 0; i < 5; i++) { 
    digitalWrite(13, HIGH); //turn on light
    delay(1000); // 1 second
    digitalWrite(13, LOW); //turn off light
    delay(500); // 0.5 second
  }

  //pinMode 8
  for(int i = 0; i < 10; i++) {
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(500);
  }

  //pinMode 4
  for (int i = 0; i < 15; i++) {
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(500);
  }
}
