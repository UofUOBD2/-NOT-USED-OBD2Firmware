#ifndef ST_COMMANDS_H
#define ST_COMMANDS_H

class STCommands
{
public:

  void inline setUARTRate(uint32_t newBaudRate) { baudRate = newBaudRate; }

private:

  uint32_t baudRate;

};

#endif
