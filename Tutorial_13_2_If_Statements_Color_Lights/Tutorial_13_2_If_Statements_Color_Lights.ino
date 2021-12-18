//if-statements: red, yellow, green lights
int red_led = 6;
int yellow_led = 8;
int green_led = 10;
int read_pin = A3;
int read_val = 0;
float voltage_out = 0;
int wait = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(read_pin, INPUT);
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  read_val = analogRead(read_pin);
  voltage_out = read_val * (5./1023.);
  
  if(voltage_out < 3) {
    digitalWrite(green_led, HIGH);
    digitalWrite(yellow_led, LOW);
    digitalWrite(red_led, LOW);
    Serial.print("Potentiometer Voltage is ");
    Serial.println(voltage_out);
    delay(wait);
    
  }
  else if(voltage_out >= 3 && voltage_out <= 4) {
    digitalWrite(green_led, LOW);
    digitalWrite(yellow_led, HIGH);
    digitalWrite(red_led, LOW);
    Serial.print("Warning: Potentiometer Voltage is ");
    Serial.println(voltage_out);
    delay(wait);
  }
  else if(voltage_out > 4) {
    digitalWrite(green_led, LOW);
    digitalWrite(yellow_led, LOW);
    digitalWrite(red_led, HIGH);
    Serial.print("Houston, we have a problem. Potentiometer Voltage is ");
    Serial.println(voltage_out);
    delay(wait);
  }

}
