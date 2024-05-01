#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

 int MQ3= A0;
 int Relay=6;

int value;

void setup() {
   lcd.init();
    lcd.backlight();
  pinMode(MQ3, INPUT);
  pinMode(Relay, OUTPUT);

  
  
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print(" Alcohol Detect");
  lcd.setCursor(0, 1);
  lcd.print(" and Engine Lock  ");
  delay(3000);
  lcd.clear();
   

}

void loop()
{
   
  value= analogRead(MQ3);
  Serial.println(value);
    lcd.setCursor(0, 0);
  lcd.print("Alcohol :");
  lcd.print(value);
  lcd.clear();

  if(value>400)
  {
    digitalWrite(Relay,HIGH);
     
     lcd.print("Alcohol Detected");
  lcd.setCursor(0, 1);
  lcd.print("Engines are Locked  ");
  
    
  }else{
    digitalWrite(Relay,LOW);
     
     lcd.print(" Alcohol  not ");
 lcd.setCursor(0, 1);
  lcd.print("     Detected ");
  }

  delay (500);
}
