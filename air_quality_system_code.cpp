#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 3       // DHT11 data pin connected to D3
#define DHTTYPE DHT11  // Define sensor type
#define MQ04_PIN A0    // MQ-04 Analog Output to A0

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C address 0x27, 16 columns x 2 rows

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.begin();
  lcd.backlight();
  pinMode(MQ04_PIN, INPUT);

  lcd.setCursor(0, 0);
  lcd.print("Weather Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Read temperature & humidity
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Read methane gas level
  int gasValue = analogRead(MQ04_PIN);

  // Display data on LCD
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.print(temperature);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Hum:");
  lcd.print(humidity);
  lcd.print("%");

  delay(2000);
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Gas Level:");
  lcd.print(gasValue);

  delay(2000);
  lcd.clear();

  // Print data to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C | Humidity: ");
  Serial.print(humidity);
  Serial.print("% | Methane Level: ");
  Serial.println(gasValue);

  delay(2000); // Wait for 2 seconds
}
