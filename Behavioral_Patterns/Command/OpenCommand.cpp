#include "OpenCommand.h"

#include "Application.h"
#include "Document.h"

OpenCommand::OpenCommand(Application* a)
{
    _application = a;
}

void OpenCommand::Execute()
{
    const char* name = AskUser();

    if (name != 0)
    {
        Document* document = new Document(name);
        _application->Add(document);
        document->Open();
    }
}

const char* OpenCommand::AskUser()
{
    return "SomeFileName";
}
