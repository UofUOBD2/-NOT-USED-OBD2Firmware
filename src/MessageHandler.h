#ifndef MESSAGE_HANDLER_H
#define MESSAGE_HANDLER_H

#include <queue>
#include <string>

class MessageHandler
{

public:

  MessageHandler();

  void addCommand(std::string command);

  void processCommands();

  void clearCommands();

private:

  std::queue<std::string> msgQueue;


};

#endif
