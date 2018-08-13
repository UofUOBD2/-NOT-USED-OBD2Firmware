/*
 * Project OBD2_Electron
 * Description: Firmware for Particle Electron
 * Author: Danny Campbell, Josh Vidmar, Kale Thompson
 * Date: 7-29-18
 */

#include "CommandHandler.h"
#include "CloudHandler.h"
#include <string>

// Predefined settings for USART
static const long USB_SPEED = 9600;
static const long STN1110_SPEED = 38400;
static const long CONFIG = SERIAL_8N1;

static CommandHandler commandHandler;

// setup() runs once, when the device is first turned on.
void setup()
{
  /*
      Serial is communication over USB with a computer (for debugging)
      Serial1 is communication with the STN1110 device
  */
  Serial.begin(USB_SPEED);
  Serial1.begin(STN1110_SPEED, CONFIG);

  setupSTN1110();
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{
  // When we recieve input from the STN1110
  if(Serial1.available())
  {
    int input = Serial1.read();
    Serial.write("Serial 1 Received");
    commandHandler.processData(input);
  }
  // If we can write to the STN1110, go ahead and send the next command
  if(Serial1.availableForWrite())
  {
    // Write the next command to send
    // The serial write function does not support string objects so a c style string must be used
    std::string str = commandHandler.nextCommand();
    Serial1.write(str.c_str());
  }
}

void setupSTN1110()
{
  // Detect the communication protocol and the baud rate for the STN1110
  commandHandler.sendCommand("ATSP0");
  commandHandler.sendCommand("STBR",{"38400"});
}
