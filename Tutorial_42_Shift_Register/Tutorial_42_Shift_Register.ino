// Shift Register 74HC595

int latch_pin = 11;
int clock_pin = 9;
int data_pin = 12;

byte leds1 = 0xAA;
byte leds2 = 0x55;

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

  digitalWrite(latch_pin, LOW); //incoming data, do not write data
  shiftOut(data_pin, clock_pin, LSBFIRST, leds1); //lghts, light up as 0xA5 = 0b1010 0101
  digitalWrite(latch_pin, HIGH); //data is ready, write data

  delay(dt);
  
  digitalWrite(latch_pin, LOW);
  shiftOut(data_pin, clock_pin, LSBFIRST, leds2); //lghts, light up as 0xA5 = 0b1010 0101
  digitalWrite(latch_pin, HIGH);

  delay(dt);
}
