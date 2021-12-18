//Arduino Serial Port and Print Commands
int j = 1;
int wait = 1000;
String j_string = "j = ";
int x = 3;
int y = 7;
int z = 0;
String plus = " + ";
String equal = " = ";
float pi = 3.14;
float radius = 2;
float area = 0;
String area_string_1 = "A circle with radius ";
String area_string_2 = " has an area of ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //incrementing j
  Serial.println(j_string + j);
  j++;
  delay(wait);

  //adding x + y
  z = x + y;
  Serial.println(x + plus + y + equal + z);
  x += 2;
  y += 3;
  delay(wait);

  area = pi * radius * radius;
  Serial.println(area_string_1 + radius + area_string_2 + area);
  radius += 2;
  delay(wait);
}
