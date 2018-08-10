#include "MessageHandler.h"

class MessageHandler
{
  void addCommand(std::string commmand)
  {
    msgQueue.push(command);
  }

  void processCommands()
  {

  }

  void clearCommands()
  {
    // Wait for the message to send and then clear the queue
    Serial1.flush();

    std::queue<std::string> empty;
    std::swap(msgQueue,empty);
  }

};
