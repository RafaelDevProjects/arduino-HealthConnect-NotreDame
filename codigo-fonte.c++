#include <LiquidCrystal.h>

int Potmeter;
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

int seconds = 0, minutes = 56, hours = 17;
int day = 29, month = 11, year = 2023;
 

void setup() 
{
  lcd.begin(16, 2);
  lcd.clear();
  Serial.begin(9600);  // Inicia a comunicação serial
}


void loop() 
{
  lcd.clear();
  Clock();

  // Envia os valores de day, month, year pela porta serial
  Serial.print("Data: " + String(day) + "/" + String(month) + "/" + String(year) + " Horas: " + String(hours) + ":" + String(minutes));
  Serial.print("...");
  delay(10000);
}


void Clock() {

  seconds++;
  if(seconds == 60) 
    {
     seconds = 0;
     minutes++;
    }

  if(minutes == 60) 
    {
     minutes = 0;
     hours++;
    }

  if(hours == 24) 
    {
     hours = 0;
     day++ ;

        if(day == 32 && month == 12 || month == 10 || month == 8 || month == 7 || month == 5 || month == 3 || month == 1)
         {
            month++;
            day = 1;
            
            if(month == 13)
              {
                month = 1;
                year++;
              }
          }
        
        if(day == 31 && month == 11 || month == 9 || month == 6 || month == 4 || month == 2)
          {
            month++;
            day = 1;
          }
    }

  lcd.clear();
  beginPrint();
}

void beginPrint() 
{
  
  lcd.print("Date:");
  lcd.print(day);
  lcd.print("/");
  lcd.print(month);
  lcd.print("/");
  lcd.print(year);
  
  lcd.setCursor(0, 1);
  
  lcd.print("Time:  ");

    if(hours <12) 
      {
        lcd.print("0");
        lcd.print(hours);
      }
    else
      {
        lcd.print(hours);
      }
  
  lcd.print(":");

   if(minutes < 59)
      {
        

        lcd.print(minutes);
      }
    else 
      {
        lcd.setCursor(3, 1);
        lcd.print(minutes);
      }
}
