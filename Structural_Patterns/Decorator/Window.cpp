#include "Window.h"

class VisualComponent;

void Window::SetContents(VisualComponent* contents)
{
    _contents = contents;
}
