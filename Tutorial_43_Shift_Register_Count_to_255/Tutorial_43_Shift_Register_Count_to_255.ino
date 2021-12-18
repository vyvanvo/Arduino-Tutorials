// Shift Register 74HC595 - count to 255

int latch_pin = 11;
int clock_pin = 9;
int data_pin = 12;

byte leds = 0x0;

int dt = 250;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(latch_pin, OUTPUT);
  pinMode(data_pin, OUTPUT);
  pinMode(clock_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(latch_pin, LOW); //latch_pin = LOW -> incoming data
  shiftOut(data_pin, clock_pin, LSBFIRST, leds); //send out data, light up as 0xA5 = 0b1010 0101
  digitalWrite(latch_pin, HIGH);

  delay(dt);
  Serial.println(leds, HEX);

  if (leds < 0xFF) {
    leds++;
  }
  else {
    leds = 0;
  } 
 
}
