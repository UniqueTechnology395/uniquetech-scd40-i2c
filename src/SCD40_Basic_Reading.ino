#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_SCD4X.h>

Adafruit_SCD4X scd4x;

void setup() {
  Serial.begin(115200);
  while (!Serial) delay(10);     // Αναμονή για άνοιγμα του Serial Monitor

  Wire.begin();

  if (!scd4x.begin()) {
    Serial.println("Αποτυχία εύρεσης SCD40! Ελέγξτε τις συνδέσεις.");
    while (1) delay(10);
  }

  // Έναρξη συνεχόμενων μετρήσεων
  if (!scd4x.startPeriodicMeasurement()) {
    Serial.println("Αποτυχία έναρξης μετρήσεων.");
    while (1) delay(10);
  }

  Serial.println("Ο SCD40 είναι έτοιμος!");
}

void loop() {
  if (scd4x.readMeasurement()) {
    Serial.print("CO2: ");
    Serial.print(scd4x.getCO2());
    Serial.println(" ppm");
  }
  
  delay(5000); // Ο SCD40 ανανεώνει την τιμή περίπου κάθε 5 δευτερόλεπτα
}
