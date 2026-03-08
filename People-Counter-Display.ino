#include <TM1637Display.h>

#define CLK 2  // Define the CLK pin
#define DIO 3  // Define the DIO pin

TM1637Display display(CLK, DIO);

int lastCount = 0; // Store the last received count

void setup() {
    Serial.begin(9600); // Start serial communication at 9600 baud rate
    display.setBrightness(0x0f); // Set brightness to maximum
    display.showNumberDec(0); // Initialize display with 0
}

void loop() {
    if (Serial.available()) {
        int newCount = Serial.parseInt(); // Read integer from serial
        
        if (newCount != 0 || Serial.peek() == '\n') { // Ensure we got a valid number
            lastCount = newCount; // Update lastCount only when valid data is received
        }
        
        Serial.read(); // Clear the newline character from the buffer
    }

    display.showNumberDec(lastCount); // Keep displaying the last received number
    delay(100); // Small delay to stabilize display updates
}