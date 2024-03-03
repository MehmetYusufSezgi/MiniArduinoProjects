#include <LiquidCrystal.h>
#include <virtuabotixRTC.h>
int CLK_PIN = 6;
int DAT_PIN = 7;
int RST_PIN = 8;

virtuabotixRTC myRTC(CLK_PIN, DAT_PIN, RST_PIN);
int rs = 12, en = 11, d4 =  5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  //myRTC.setDS1302Time(00, 56, 15, 3, 21, 2, 2024);
  lcd.begin(16, 2);
}

void loop() {
  myRTC.updateTime(); 
  int day = myRTC.dayofmonth;
  int month = myRTC.month;
  int year = myRTC.year;
  int hours = myRTC.hours;
  int minutes = myRTC.minutes;
  int seconds = myRTC.seconds;
  
  lcd.clear();
  lcd.setCursor(0, 0);
  
  lcd.print(day);
  lcd.print("/");
  lcd.print(month);
  lcd.print("/");
  lcd.print(year);
  
  lcd.setCursor(0, 1);
  lcd.print(hours);
  lcd.print(":");
  lcd.print(minutes);
  lcd.print(":");
  lcd.print(seconds);
  
  delay(1000);
}
