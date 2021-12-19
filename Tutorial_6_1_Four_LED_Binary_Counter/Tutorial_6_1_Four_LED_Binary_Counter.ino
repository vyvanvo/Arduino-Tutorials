//Working with Binary Numbers - LED Counter 0-15
int led_0 = 6;
int led_1 = 8;
int led_2 = 10;
int led_3 = 12;
int led_blink = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_0, OUTPUT);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //0
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  delay(led_blink);

  //1
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  delay(led_blink);

  //2
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  delay(led_blink);

  //3
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  delay(led_blink);

  //4
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  delay(led_blink);

  //5
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  delay(led_blink);

  //6
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  delay(led_blink);

  //7
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  delay(led_blink);

  //8
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  delay(led_blink);
  
  //9
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  delay(led_blink);

  //10
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  delay(led_blink);

  //11
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  delay(led_blink);

  //12
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  delay(led_blink);
  
  //13
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  delay(led_blink);

  //14
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  delay(led_blink);

  //15
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  delay(led_blink);
  
}
