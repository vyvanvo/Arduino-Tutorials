//Passive Buzzer & Potentiometer
int buzz_pin = 8;
float buzz_val; //convert pot_pin's input to buzz_val's output (time in microseconds)

int pot_pin = A4;
int pot_val; //pot_pin's input

String msg = "Potentiometer Voltage is ";
char period = '.';

String msg2 = "The wait time is ";
String msg3 = " microseconds.";

int wait = 1500;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot_pin, INPUT); 
  pinMode(buzz_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  pot_val = analogRead(pot_pin);
  //Serial.println(msg + pot_val + period);
  //delay(wait);

  //convert pot_val to buzz_val in microseconds
  buzz_val = (9940./1023.) * pot_val + 60;
  //Serial.println(msg2 + buzz_val + msg3);
  //delay(wait);
  
  digitalWrite(buzz_pin, HIGH);
  delayMicroseconds(buzz_val);
  digitalWrite(buzz_pin, LOW);
  delayMicroseconds(buzz_val);
}
