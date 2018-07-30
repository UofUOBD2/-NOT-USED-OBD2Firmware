/*
 * Project OBD2_Electron
 * Description: Firmware for Particle Electron
 * Author: Danny Campbell, Josh Vidmar, Kale Thompson
 * Date: 7-29-18
 */

// Predefined settings for USART
static const long SPEED = 9600;
static const long CONFIG = SERIAL_8N1;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  Serial.begin(SPEED);
  Serial1.begin(SPEED, CONFIG);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  if(Serial1.available())
  {
    int input = Serial1.read();
    Serial.write("Serial 1 Received");
  }
}
