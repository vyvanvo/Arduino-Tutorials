//Dimmable Lights
int led = 6; //analogwrite
int pot_pin = A3;
int pot_val = 0; //0-1023
float voltage_out = 0; //0-5
float led_val = 0; //0-255
int wait = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot_pin, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  pot_val = analogRead(pot_pin); //read voltage value of potentiometer (0-255)
  voltage_out = pot_val * (5./1023.);
  led_val = pot_val * (255./1023.);

  Serial.print("Potentiometer Voltage is ");
  Serial.println(voltage_out);
  analogWrite(led, led_val);
  delay(wait);
  
}
