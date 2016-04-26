#ifndef PASTE_COMMAND_H
#define PASTE_COMMAND_H

#include "Command.h"

class Document;

class PasteCommand : public Command {
public:
    PasteCommand(Document*);

    virtual void Execute();
private:
    Document* _document;
};

#endif  // PASTE_COMMAND_H
