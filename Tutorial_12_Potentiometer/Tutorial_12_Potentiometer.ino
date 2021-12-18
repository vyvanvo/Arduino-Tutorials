//Potentiometer
int read_pin = A3;
int read_val = 0;
int red_led = 6;
float voltage_out = 0;
//int led_val = 0;
int wait = 500;

void setup() {
  // put your setup code here, to run once:

  pinMode(read_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  read_val = analogRead(read_pin);
  voltage_out = read_val * (5./1023.);
  Serial.println(voltage_out);
  
  //led_val = read_val * (255/1023);
  //analogWrite(red_led, brightness);
  delay(wait);
}
