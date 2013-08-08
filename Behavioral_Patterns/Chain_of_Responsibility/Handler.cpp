#include "Handler.h"

#include "Request.h"
#include "HelpRequest.h"
#include "PrintRequest.h"

void Handler::HandleRequest (Request* theRequest) {
    switch (theRequest->GetKind()) {
    case Help:
        // cast argument to appropriate type
        HandleHelp((HelpRequest*) theRequest);
        break;

    case Print:
        HandlePrint((PrintRequest*) theRequest);
        // ...
        break;

    default:
        // ...
        break;
    }
}


void Handler::HandleHelp(HelpRequest* theRequest)
{
}

void Handler::HandlePrint(PrintRequest* theRequest)
{
}
