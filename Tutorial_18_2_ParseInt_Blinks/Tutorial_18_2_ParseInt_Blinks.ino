//Reading Number from Serial Monitor - Number of Blinks
int num_blinks; //user input
String msg = "How many blinks do you want? ";
String msg2 = "You want ";
String msg3 = " blink(s).";
int red_led = 9;
int wait = 500;
int msg_wait = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);
  while(Serial.available() == 0) { //while there is no input
    //do nothing, wait until user inputs a data
  }

  num_blinks = Serial.parseInt(); //get user's int input

  Serial.println(msg2 + num_blinks + msg3);
  delay(msg_wait);

  for (int i = 0; i < num_blinks; i++) {
    digitalWrite(red_led, HIGH);
    delay(wait);
    digitalWrite(red_led, LOW);
    delay(wait);
  }
  
}
