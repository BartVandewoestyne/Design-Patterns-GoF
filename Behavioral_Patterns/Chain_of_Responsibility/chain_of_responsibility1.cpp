#include "Application.h"
#include "Button.h"
#include "Dialog.h"

int main()
{
    const Topic PRINT_TOPIC = 1;
    const Topic PAPER_ORIENTATION_TOPIC = 2;
    const Topic APPLICATION_TOPIC = 3;

    Application* application = new Application(APPLICATION_TOPIC);
    Dialog* dialog = new Dialog(application, PRINT_TOPIC);
    Button* button = new Button(dialog, PAPER_ORIENTATION_TOPIC);

    button->HandleHelp();
}
