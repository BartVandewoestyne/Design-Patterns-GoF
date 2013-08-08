#include "Widget.h"
#include "HelpHandler.h"

Widget::Widget (Widget* w, Topic t) : HelpHandler(w, t) {
    _parent = w;
}
