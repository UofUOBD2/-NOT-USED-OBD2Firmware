#include "CommandHandler.h"

CommandHandler::CommandHandler()
{

}

/*
Send Command
- sends a specific commmand over UART.
*/
void CommandHandler::sendCommand(std::string command, std::vector<std::string> arguments)
{
  std::string fullCommand = command;

  for(std::string arugment : arguments)
  {
    command += " " + arugment;
  }

  commandQueue.push(fullCommand);
}

std::string CommandHandler::nextCommand()
{
  if(!commandQueue.empty())
  {
    std::string result = commandQueue.front();
    commandQueue.pop();
    return result;
  }
  return "";
}

/*
Process Commands
*/
void CommandHandler::processCommands()
{

}

/*
Clear Commmands
- Clears the command queue
*/
void CommandHandler::clearCommands()
{
  std::queue<std::string> empty;
  std::swap(commandQueue, empty);
}
