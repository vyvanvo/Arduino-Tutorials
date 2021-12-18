//if-statements
int red_led = 6;
int read_pin = A3;
int read_val = 0;
float voltage_out = 0;
int wait = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(read_pin, INPUT);
  pinMode(red_led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  read_val = analogRead(read_pin);
  voltage_out = read_val * (5./1023.);

  if(voltage_out < 4) {
    digitalWrite(red_led, LOW);
    Serial.print("Potentiometer Voltage is ");
    Serial.println(voltage_out);
    delay(wait);
  }
  else{
    digitalWrite(red_led, HIGH);
    Serial.print("Warning: Potentiometer Voltage is ");
    Serial.println(voltage_out);
    delay(wait); 
  }
}
