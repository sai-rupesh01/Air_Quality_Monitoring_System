#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 3       // DHT11 data pin connected to D3
#define DHTTYPE DHT11  // Define sensor type
#define MQ135_PIN A0   // MQ-135 Analog Output to A0

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C address 0x27, 16 columns x 2 rows

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.begin();
  lcd.backlight();
  pinMode(MQ135_PIN, INPUT);

  lcd.setCursor(0, 0);
  lcd.print("Air Quality Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Read temperature & humidity
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Read air quality level
  int airQualityValue = analogRead(MQ135_PIN);

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
  lcd.print("Air Quality:");
  lcd.print(airQualityValue);

  delay(2000);
  lcd.clear();

  // Print data to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C | Humidity: ");
  Serial.print(humidity);
  Serial.print("% | Air Quality Level: ");
  Serial.println(airQualityValue);

  delay(2000); // Wait for 2 seconds
}
