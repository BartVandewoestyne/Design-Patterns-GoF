#include "Button.h"
#include "HelpHandler.h"

#include <iostream>

class Widget;

Button::Button (Widget* h, Topic t) : Widget(h, t) { }

void Button::HandleHelp () {
    if (HasHelp()) {
        // offer help on the button
        std::cout << "Offering help on the button." << std::endl;
    } else {
        HelpHandler::HandleHelp();
    }
}
