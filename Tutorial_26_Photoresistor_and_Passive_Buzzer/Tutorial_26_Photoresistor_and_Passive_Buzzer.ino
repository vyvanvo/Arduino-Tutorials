//photoresistor & passive buzzer
int light_pin = A2;
int light_val;

int buzz_pin = 6;
int buzz_time;

int wait = 500;
int long_wait = 3000;

void setup() {
  // put your setup code here, to run once:
  pinMode(light_pin, INPUT);
  pinMode(buzz_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // light_val = 750 -> ON 
  // buzz_val = 1 ms -> ON  
  // light_val = 200 -> OFF
  // buzz_time = 10 ms -> OFF
  light_val = analogRead(light_pin);
  Serial.println(light_val);

  // buzz_val is time in miliseconds
  buzz_time = (9./550.)*(light_val-200) + 1;
  Serial.println(buzz_time);
  
  digitalWrite(buzz_pin, HIGH);
  delayMicroseconds(buzz_time);
  digitalWrite(buzz_pin, LOW);
  delayMicroseconds(buzz_time);
 
}
