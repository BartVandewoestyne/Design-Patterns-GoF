#ifndef COMMAND_H
#define COMMAND_H

class Command {
public:
    virtual ~Command();

    virtual void Execute() = 0;
protected:
    Command();
};

#endif  // COMMAND_H
