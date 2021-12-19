//While Loops
int i;
int wait = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  i = 1;
  while(i <= 10) {
    Serial.println(i);
    delay(wait);
    i++;
  }

  Serial.println();

}
