#ifndef OPEN_COMMAND_H
#define OPEN_COMMAND_H

#include "Command.h"

class Application;

class OpenCommand : public Command {
public:
    OpenCommand(Application*);

    virtual void Execute();
protected:
    virtual const char* AskUser();
private:
    Application* _application;
    char* _response;
};

#endif  // OPEN_COMMAND_H
