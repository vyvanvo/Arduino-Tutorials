// DHT11 Temperature & Humidity Sensor

#include <DHT.h>
#define Type DHT11 //set a constant - variable that never changes
// DHT11 is the sensor that we are using

int sense_pin = 2;
DHT HT(sense_pin, Type);
float humidity;
float temp_c;
float temp_f;

float set_time = 500;
int dt = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();
  delay(set_time);
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = HT.readHumidity();
  temp_c = HT.readTemperature(); // gets temperature in celsius
  temp_f = HT.readTemperature(true); //gets temperature in fahrenheit

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(", Temperature C: " );
  Serial.print(temp_c);
  Serial.print(" C, Temperature F: ");
  Serial.print(temp_f);
  Serial.println(" F ");

  delay(dt);
}
