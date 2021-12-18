// Shift register - binary & hexadecimal bit flipper

int latch_pin = 11;
int data_pin = 12;
int clock_pin = 9;

byte leds = 0xF0; 

int dt = 500;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  pinMode(latch_pin, OUTPUT);
  pinMode(data_pin, OUTPUT);
  pinMode(clock_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(latch_pin, LOW); //incoming data
  shiftOut(data_pin, clock_pin, LSBFIRST, leds);
  digitalWrite(latch_pin, HIGH);

  delay(dt);

  // bit flip, invert bits 
  leds = ~leds;

  //method 2 of inverting
  //leds = 255 - leds
  
  Serial.println(leds, HEX);
  
  digitalWrite(latch_pin, LOW); //incoming data
  shiftOut(data_pin, clock_pin, LSBFIRST, leds);
  digitalWrite(latch_pin, HIGH);

  
}
