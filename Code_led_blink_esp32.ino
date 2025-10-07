// ESP32 LED Blink 

#define LED_PIN 5   // 

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Set the LED pin as output
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // Turn the LED ON
  delay(500);                   // Wait for 500ms
  digitalWrite(LED_PIN, LOW);   // Turn the LED OFF
  delay(500);                   // Wait for 500ms
}
