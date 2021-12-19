//Reading Strings from Serial Monitor
String myName = ""; //user's input
String msg = "What is your name?";
String msg2 = "Hello ";
String msg3 = ", Welcome to Arduino!";

int wait = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);

  while(!Serial.available()) {
    //do nothing, wait for user's input
  }

  myName = Serial.readString(); //read user's string input

  Serial.println(msg2 + myName + msg3);
  delay(wait);
}
