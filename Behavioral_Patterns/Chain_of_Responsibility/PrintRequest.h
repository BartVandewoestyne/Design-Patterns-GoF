#ifndef PRINT_REQUEST_H
#define PRINT_REQUEST_H

#include "Request.h"

class PrintRequest : public Request {
public:
    RequestType GetKind() { return Print; };
};

#endif /* REQUEST_H */
