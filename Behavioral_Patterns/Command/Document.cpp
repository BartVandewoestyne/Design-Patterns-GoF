#include "Document.h"

#include <iostream>

Document::Document(const char* name)
{
    std::cout << "Constructing document '" << name << "'." << std::endl;
}

void Document::Open()
{
    std::cout << "Document::Open()" << std::endl;
}

void Document::Paste()
{
    std::cout << "Document::Paste()" << std::endl;
}
