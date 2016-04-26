#include "MacroCommand.h"

#include "Command.h"
#include "ListIterator.h"

void MacroCommand::Execute()
{
    ListIterator<Command*> i(_cmds);

    for (i.First(); !i.IsDone(); i.Next())
    {
        Command* c = i.CurrentItem();
        c->Execute();
    }
}

void MacroCommand::Add(Command* c)
{
    _cmds->Append(c);
}

void MacroCommand::Remove(Command* c)
{
    _cmds->Remove(c);
}
