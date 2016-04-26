#include "Command.h"
#include "SimpleCommand.h"
#include "MyClass.h"

int main()
{
    MyClass* receiver = new MyClass;

    // ...

    Command* aCommand =
        new SimpleCommand<MyClass>(receiver, &MyClass::Action);

    // ...

    aCommand->Execute();
}
