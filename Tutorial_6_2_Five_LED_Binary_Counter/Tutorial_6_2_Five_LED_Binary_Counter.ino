//Working with Binary Numbers - LED Counter 0-31
int led_0 = 4;
int led_1 = 6;
int led_2 = 8;
int led_3 = 10;
int led_4 = 12;
int led_blink = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_0, OUTPUT);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //0
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //1
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //2
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //3
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //4
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //5
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //6
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //7
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //8
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  delay(led_blink);
  
  //9
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //10
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //11
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //12
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  delay(led_blink);
  
  //13
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //14
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //15
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  delay(led_blink);

  //16
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //17
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //18
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //19
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //20
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //21
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //22
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //23
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //24
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //25
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //26
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //27
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //28
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //29
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //30
  digitalWrite(led_0, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  delay(led_blink);

  //31
  digitalWrite(led_0, HIGH);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  delay(led_blink);
}
