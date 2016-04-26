#include "Application.h"

#include <iostream>

class Document;

void Application::Add(Document* doc)
{
    std::cout << "Application::Add(Document*)" << std::endl;
}
