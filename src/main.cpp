#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author ASHU PAL
 * @date 2026-02-17
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

int LDR_PIN = A0;
 // Define LDR analog pin (Use A0)
int ldrValue = 0;
 // Create variable to store sensor reading

void setup() {

    Serial.begin(9600);

    // Initialize Serial communication (9600 baud rate)

    Serial.println("=================================");
    Serial.println("  LDR Light Intensity Monitor");
    Serial.println("  System Initializing...");
    Serial.println("=================================");
}

    // Print system initialization message
}

void loop() {

    // TODO 5:
    // Read analog value from LDR

    // TODO 6:
    // Print raw ADC value

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)

    // TODO 8:
    // Print brightness status

    // TODO 9:
    // Add delay (500ms or 1 second)
}
