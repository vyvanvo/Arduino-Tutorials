//Hexadecimal

// 10 - decimal
// B00001010 - binary
// 0xA - hexadecimal

byte my_byte = 0x9;
int dt = 500;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("DEC: ");
  Serial.print(my_byte, DEC);

  Serial.print(", BIN: ");
  Serial.print(my_byte, BIN);

  Serial.print(", HEX: ");
  Serial.println(my_byte, HEX);
  
  my_byte += 1;
  delay(dt);
}
