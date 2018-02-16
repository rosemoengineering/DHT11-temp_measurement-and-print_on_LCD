#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <dht.h>

// Set the LCD address 
LiquidCrystal_I2C lcd(0x3F, 16, 2);
dht DHT;

#define DHT11_PIN 7
void setup()
{
	
  lcd.begin();// LCD ekranı balat
  lcd.backlight();// Ekran arka ışığını aç
  lcd.setCursor(0,0);
  lcd.print("Hello, Rosemo!"); //İlk satıra yazalım
  lcd.setCursor(3,1);
  lcd.print("Engineering!"); //İkinci satıra yazalım
}

void loop()
{
   int chk = DHT.read11(DHT11_PIN);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperature = ");
    lcd.setCursor(0,1);
    lcd.print(DHT.temperature);
    delay(1000);
    
}
