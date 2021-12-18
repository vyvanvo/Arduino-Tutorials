//Reading Strings from Serial Monitor - Choosing Light Colors
int red_led = 11;
int green_led = 9;
int blue_led = 7;

String color = ""; //user's input
String msg = "What color led do you want to light up?";
String msg2 = "You want to light up the ";
String msg3 = " LED.";

int wait = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
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
   
   Serial.println(msg2 + color + msg3);
   delay(wait);

   if(color == "red") {
    digitalWrite(red_led, HIGH);
    digitalWrite(green_led, LOW);
    digitalWrite(blue_led, LOW);
    delay(wait);
   }
   else if(color == "green") {
    digitalWrite(red_led, LOW);
    digitalWrite(green_led, HIGH);
    digitalWrite(blue_led, LOW);
    delay(wait);
   }
   else if(color == "blue") {
    digitalWrite(red_led, LOW);
    digitalWrite(green_led, LOW);
    digitalWrite(blue_led, HIGH);
    delay(wait);
   }
   
}
