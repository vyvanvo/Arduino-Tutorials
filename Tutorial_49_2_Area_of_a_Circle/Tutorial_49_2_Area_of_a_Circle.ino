//LCD Display + Area of a Circle

#include <LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int dt = 10000; // 10s
float radius;
float pi = 3.12159;
float area;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  lcd.begin(16,2); //16 columns, 2 rows

}

void loop() {
  // put your main code here, to run repeatedly:

  lcd.clear(); //start blank
  
  //getting radius
  lcd.setCursor(0,0);
  lcd.print("Enter a radius:");
  
  while(!Serial.available()) {
    
  }
  
  radius = Serial.parseFloat();
  Serial.println(radius);
  lcd.clear();
  
  //calculate the area
  area = pi * radius;
   
  lcd.setCursor(0,0);
  lcd.print("The area of this ");

  lcd.setCursor(0,1);
  lcd.print("circle is: ");
  lcd.print(area);
  
  Serial.println(area);
  delay(dt);
  
}
