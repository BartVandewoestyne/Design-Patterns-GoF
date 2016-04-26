#include "PasteCommand.h"

#include "Document.h"

PasteCommand::PasteCommand(Document* doc)
{
    _document = doc;
}

void PasteCommand::Execute()
{
    _document->Paste();
}
