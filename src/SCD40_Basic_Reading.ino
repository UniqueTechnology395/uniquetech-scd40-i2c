/* * ----------------------------------------------------------------------------
 * Project: Unique Tech Air Quality Monitor (SCD40 Sensor)
 * Author: Unique Tech Team
 * License: MIT License
 * * Copyright (c) 2026 Unique Tech
 * * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * ----------------------------------------------------------------------------
 */

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
