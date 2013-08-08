#ifndef REQUEST_H
#define REQUEST_H

enum RequestType { Help, Print, Preview };

class Request {
public:
    virtual RequestType GetKind() = 0;
};

#endif /* REQUEST_H */
