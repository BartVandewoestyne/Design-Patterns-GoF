#ifndef APPLICATION_H
#define APPLICATION_H

#include "HelpHandler.h"

class Application : public HelpHandler {
public:
    Application(Topic t) : HelpHandler(0, t) { }

    virtual void HandleHelp();
    // application-specific operations...
};

#endif /* APPLICATION_H */
