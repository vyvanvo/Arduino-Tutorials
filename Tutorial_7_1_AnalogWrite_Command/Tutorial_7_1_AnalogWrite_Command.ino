int led = 9;
int bright = 25;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

//AnalogWrite Command
void loop() {
  // put your main code here, to run repeatedly:

  //analog write -> brightness in between LOW(0 volts) and HIGH (5 volts)
  // 0 -> 0 volts
  // 255 -> 5 volts 
  analogWrite(led, bright); 
}
