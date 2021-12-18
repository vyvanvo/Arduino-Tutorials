//LCD Display + Simple Calculator

#include <LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int dt = 10000; // 10s
float num1;
float num2;
String operation;
float answer;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  lcd.begin(16,2); //16 columns, 2 rows

}

void loop() {
  // put your main code here, to run repeatedly:

  lcd.clear(); //start blank
  
  //getting first number
  lcd.setCursor(0,0);
  lcd.print("Enter the first ");
  
  lcd.setCursor(0,1);
  lcd.print("number: ");

  while(!Serial.available()) {
    
  }
  
  num1 = Serial.parseFloat();
  Serial.println(num1);
  lcd.clear();
  
  //getting second number
  lcd.setCursor(0,0);
  lcd.print("Enter the second ");

  lcd.setCursor(0,1);
  lcd.print("number: ");

  while(!Serial.available()) {
    
  }

  num2 = Serial.parseFloat();
  Serial.println(num2);
  lcd.clear();

  //getting math operation
  lcd.setCursor(0,0);
  lcd.print("Enter the ");
  
  lcd.setCursor(0,1); 
  lcd.print("operation: ");

  while(!Serial.available()) {
    
  }

  operation = Serial.readString();
  Serial.println(operation);
  lcd.clear();

  if (operation == "+") {
    answer = num1 + num2;
  }
  else if (operation == "-") {
    answer = num1 - num2;
  }
  else if (operation == "*") {
    answer = num1 * num2;
  }
  else if (operation == "/") {
    answer = num1 / num2;   
  }
  
  lcd.setCursor(0,0);
  lcd.print(num1);
  //lcd.print(" ");
  lcd.print(operation);
  //lcd.print(" ");
  lcd.print(num2);
  lcd.print("=");
  lcd.print(answer);
  
  Serial.println(answer);
  delay(dt);
  
}
