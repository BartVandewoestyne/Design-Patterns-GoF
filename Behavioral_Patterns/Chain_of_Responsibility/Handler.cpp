#include "Handler.h"

#include "Request.h"
#include "HelpRequest.h"
#include "PrintRequest.h"

#include <iostream>

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
    std::cout << "Handling HelpRequest " << theRequest << "." << std::endl;
}

void Handler::HandlePrint(PrintRequest* theRequest)
{
    std::cout << "Handling PrintRequest " << theRequest << "." << std::endl;
}
