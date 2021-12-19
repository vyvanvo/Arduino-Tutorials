// LCD Display - Count

#include <LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int dt = 1000;

void setup() {
  // put your setup code here, to run once:

  lcd.begin(16, 2); //16 columns, 2 rows
}

void loop() {
  // put your main code here, to run repeatedly:

  lcd.setCursor(0,0);
  lcd.print("Watch me count!");
  
  //lcd.setCursor(0,1);

  for(int i = 1; i<= 10; i++) {
    lcd.setCursor(0,1);
    lcd.print(i); 
    delay(dt);
  }
  
  lcd.clear(); //clears "My name is Vy"
}
