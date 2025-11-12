#include "DHT.h"

#define DHTPIN 2       // Pin where DHT11 is connected
#define DHTTYPE DHT11  // DHT 11 sensor type
#define RED_LED 8
#define GREEN_LED 9
// Define good range
#define TEMP_MIN 20
#define TEMP_MAX 30
#define HUM_MIN 40
#define HUM_MAX 60

DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  Serial.println("DHT11 sensor reading started...");
}
void loop() {
  // Read humidity and temperature
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  // Check if reading failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    delay(2000);
    return;
  }
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C  |  Humidity: ");
  Serial.print(humidity);
  Serial.println("%");
  // Check if both are in the good range
  if (temperature >= TEMP_MIN && temperature <= TEMP_MAX && humidity >= HUM_MIN && humidity <= HUM_MAX) {
    // Good condition
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
    Serial.println("Status: GOOD");
  } else {
    // Not good condition
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    Serial.println("Status: BAD");
  }
  delay(1000);  // Wait 2 seconds before next reading
}


