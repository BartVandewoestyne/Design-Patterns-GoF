#ifndef WIDGET_H
#define WIDGET_H

#include "HelpHandler.h"

class Widget : public HelpHandler {
protected:
    Widget(Widget* parent, Topic t = NO_HELP_TOPIC);
private:
    Widget* _parent;
};

#endif /* WIDGET_H */
