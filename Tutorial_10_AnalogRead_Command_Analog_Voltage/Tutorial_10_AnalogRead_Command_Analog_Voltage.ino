//Reading Analog Voltage Using AnalogRead Command
int read_pin = A3;
float voltage = 0;
int read_val = 0;
int wait = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(read_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //0 volts (V) -> 0
  //5 volts (V) -> 1023 (2^10 - 1)
  //voltage = read_val *(5 volt /1023) 
  
  read_val = analogRead(read_pin);
  voltage = read_val * (5./1023.); //get a float when putting '.' at the end 
  Serial.println(voltage);
  delay(wait);
}
