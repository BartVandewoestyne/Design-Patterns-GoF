#ifndef HELP_REQUEST_H
#define HELP_REQUEST_H

#include "Request.h"

class HelpRequest : public Request {
public:
    RequestType GetKind() { return Help; };
};

#endif /* REQUEST_H */
