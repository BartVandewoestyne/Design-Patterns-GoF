#ifndef HANDLER_H
#define HANDLER_H

class Request;
class HelpRequest;
class PrintRequest;

class Handler {
public:
    void HandleRequest (Request* theRequest);
private:
    void HandleHelp(HelpRequest* theRequest);
    void HandlePrint(PrintRequest* theRequest);
};

#endif /* HANDLER_H */
