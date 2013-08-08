#include "ExtendedHandler.h"
#include "Handler.h"
#include "Request.h"

void ExtendedHandler::HandleRequest (Request* theRequest) {
    switch (theRequest->GetKind()) {
    case Preview:
        // handle the Preview request
        break;

    default:
        // let Handler handle other requests
        Handler::HandleRequest(theRequest);
    }
}
