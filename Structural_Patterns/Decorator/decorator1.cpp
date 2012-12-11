#include "BorderDecorator.h"
#include "ScrollDecorator.h"
#include "TextView.h"
#include "Window.h"

int main()
{
    Window* window = new Window;
    TextView* textView = new TextView;

    window->SetContents(
        new BorderDecorator(
            new ScrollDecorator(textView), 1
        )
    );
}
