#ifndef EXTENDED_HANDLER_H
#define EXTENDED_HANDLER_H

#include "Handler.h"

class Request;

class ExtendedHandler : public Handler {
public:
    virtual void HandleRequest(Request* theRequest);
    // ...
};

#endif /* EXTENDED_HANDLER_H */
