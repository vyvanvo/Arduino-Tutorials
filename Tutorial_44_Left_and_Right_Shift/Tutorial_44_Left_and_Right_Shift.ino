// Shift register 74HC595 - left shift & right shift

int latch_pin = 11;
int data_pin = 12;
int clock_pin = 9;

byte leds = 0x11;

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

  digitalWrite(latch_pin, LOW); //incoming data;
  shiftOut(data_pin, clock_pin, LSBFIRST, leds);
  digitalWrite(latch_pin, HIGH);

  delay(dt);
  Serial.println(leds, HEX);
  
  //left shift -> multiply by 2;

  leds = leds * 2;

  //right shift -> divide by 2
  
  //leds = leds / 2; 
  
}
