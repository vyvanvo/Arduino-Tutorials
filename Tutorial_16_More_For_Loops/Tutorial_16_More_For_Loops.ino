//For Loops
int wait = 500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //count to 10
  for(int i = 1; i <= 10; i++) {
    Serial.println(i);
    delay(wait);
  }

  Serial.println();
  
  //even numbers
  for(int i = 2; i <= 10; i+=2) {
    Serial.println(i);
    delay(wait);
  }

  Serial.println();
  
  //count down
  for(int i = 10; i >= 1; i--) {
    Serial.println(i);
    delay(wait);
  }

  Serial.println();

}
