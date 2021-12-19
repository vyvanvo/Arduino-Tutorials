//Reading Number from Serial Monitor (ParseInt)
int myNumber; //user input
String msg = "Please enter your number: ";
String msg2 = "Your number is: ";

float radius = 0;
float area = 0;
float pi = 3.14;
String msg3 = "What is the radius of your circle?";
String msg4 = "Your circle has a radius of ";
String msg5 = "The area of the circle with radius ";
String msg6 = " is ";
char period = '.';

int wait = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);
  while(Serial.available() == 0) { //while there is no input
    //do nothing, wait until user inputs a data
  }

  myNumber = Serial.parseInt(); //get user's int input
  Serial.print(msg2);
  Serial.println(myNumber);
  delay(wait);

  Serial.println(msg3);
  while(!Serial.available()) {
    //do nothing, wait until user input
  }

  radius = Serial.parseFloat(); //get user's float input
  Serial.println(msg4 + radius + period);
  delay(wait);

  area = pi * radius * radius; //calculate area of the circle based on user's radius input
  Serial.println(msg5 + radius + msg6 + area + period);
  delay(wait);
  
}
