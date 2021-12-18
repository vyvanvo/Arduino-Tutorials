// Shift register 74HC595 - circular shift left & circular shift right

int latch_pin = 11;
int data_pin = 12;
int clock_pin = 9;

byte leds = 0x01;

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
  
  //circular shift left with two's complement
  // if (leds is negative -> MSB = 1) else -> MSB = 0
  // left shift -> leds * 2
  // leds + MSB

  //circular shift left
  //leds = (leds/128) + (leds * 2);

  //circular shift right
  leds = (leds * 128) + (leds/2);
  
}
