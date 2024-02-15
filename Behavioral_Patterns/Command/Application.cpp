#include "Application.h"

#include <iostream>

class Document;

void Application::Add(Document* doc)
{
    std::cout << "Adding document " << doc << " to the application." << std::endl;
}
