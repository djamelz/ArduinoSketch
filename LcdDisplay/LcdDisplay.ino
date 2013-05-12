#include  <LiquidCrystal.h>

LiquidCrystal lcd (12, 11, 4, 5, 6, 7); 

/* The function above declares which Arduino’s pins will be used for controlling the LCD */

void  setup()
{
  lcd.begin(16, 2);
}

void  loop()
{
  lcd.clear();
  
  
  lcd.autoscroll();
  lcd.print("This is a test");
  lcd.print("a real test");
  delay(5000);
}
