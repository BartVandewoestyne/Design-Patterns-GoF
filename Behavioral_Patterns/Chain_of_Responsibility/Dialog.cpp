#include "Dialog.h"
#include "HelpHandler.h"

#include <iostream>

Dialog::Dialog (HelpHandler* h,  Topic t) : Widget(0) {
    SetHandler(h, t);
}

void Dialog::HandleHelp () {
    if (HasHelp()) {
        // offer help on the dialog
        std::cout << "Offering help on the dialog." << std::endl;
    } else {
        HelpHandler::HandleHelp();
    }
}
