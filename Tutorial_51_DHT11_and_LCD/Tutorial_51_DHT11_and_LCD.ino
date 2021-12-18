// DHT11 Temperature & Humidity Sensor + LCD Display

#include <DHT.h>
#define Type DHT11

// DHT11 Temperature & Humidity Sensor
int sense_pin = 2;
DHT HT(sense_pin, Type);
float humidity;
float temp_c;
float temp_f;

float set_time = 500;
int dt = 3000;

// LCD Display 

#include <LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  //DHT11
  HT.begin();
  delay(set_time);

  //LCD
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = HT.readHumidity();
  temp_c = HT.readTemperature(); 
  temp_f = HT.readTemperature(true);

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(", Temperature C: ");
  Serial.print(temp_c);
  Serial.print(" C, Temperature F: ");
  Serial.println(" F ");

  delay(dt);

  //dispay on LCD
  lcd.clear();

  //humidity
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.setCursor(0, 1);
  lcd.print(humidity);

  delay(dt);
  lcd.clear();

  //temperature: celsius
  lcd.setCursor(0,0);
  lcd.print("Temperature C: ");
  lcd.setCursor(0, 1);
  lcd.print(temp_c);

  delay(dt);
  lcd.clear();

  //temperature: farhenheit
  lcd.setCursor(0,0);
  lcd.print("Temperature F: ");
  lcd.setCursor(0, 1);
  lcd.print(temp_f);

  delay(dt);
  lcd.clear();
  
}
