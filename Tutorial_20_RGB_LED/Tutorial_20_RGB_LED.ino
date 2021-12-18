//RGB LEDs
int red_pin = 11;
int green_pin = 9;
int blue_pin = 6;

String color; // user's input
String msg = "What color do you want?";
String msg2 = "The color you wants is ";
char period = '.';
String msg3 = "You want to turn off the LED.";

int wait = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);

  while(!Serial.available()) {
    //do nothing, wait for user's input
  }

  color = Serial.readString(); //get user's string input
  color.toLowerCase();

  if (color == "red") {
    Serial.println(msg2 + color + period);
    delay(wait);
    digitalWrite(red_pin, HIGH);
    digitalWrite(green_pin, LOW);
    digitalWrite(blue_pin, LOW);
  }
  else if(color == "yellow") {
    Serial.println(msg2 + color + period);
    delay(wait);
    digitalWrite(red_pin, HIGH);
    analogWrite(green_pin, 100);
    digitalWrite(blue_pin, LOW);
  }
  else if(color == "green") {
    Serial.println(msg2 + color + period);
    delay(wait);
    digitalWrite(red_pin, LOW);
    digitalWrite(green_pin, HIGH);
    digitalWrite(blue_pin, LOW);
  }
  else if(color == "aqua") {
    Serial.println(msg2 + color + period);
    delay(wait);
    digitalWrite(red_pin, LOW);
    analogWrite(green_pin, 255);
    analogWrite(blue_pin, 80);
  }
  else if(color == "cyan") {
    Serial.println(msg2 + color + period);
    delay(wait);
    digitalWrite(red_pin, LOW);
    analogWrite(green_pin, 255);
    analogWrite(blue_pin, 255);
  }
  else if(color == "blue") {
    Serial.println(msg2 + color + period);
    delay(wait);
    digitalWrite(red_pin, HIGH);
    digitalWrite(green_pin, LOW);
    digitalWrite(blue_pin, LOW);
  }
  else if(color == "magenta") {
    Serial.println(msg2 + color + period);
    delay(wait);
    digitalWrite(red_pin, HIGH);
    digitalWrite(green_pin, LOW);
    digitalWrite(blue_pin, HIGH);
  }
  else if(color == "off") {
    Serial.println(msg3);
    delay(wait);
    digitalWrite(red_pin, LOW);
    digitalWrite(green_pin, LOW);
    digitalWrite(blue_pin, LOW);
  }

  delay(wait);
  
}
