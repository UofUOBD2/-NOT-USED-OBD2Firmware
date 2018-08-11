#ifndef COMMAND_HANDLER_H
#define COMMAND_HANDLER_H

#include <queue>
#include <string>
#include <vector>

class CommandHandler
{

public:

  CommandHandler();

  void sendCommand(std::string command, std::vector<std::string> arguments);

  std::string nextCommand();

  void processCommands();

  void clearCommands();

private:

  std::queue<std::string> commandQueue;


};

#endif
