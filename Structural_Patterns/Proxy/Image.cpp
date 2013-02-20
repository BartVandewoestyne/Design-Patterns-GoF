#include "Image.h"
#include <cstring>

class Event;
class Point;

Image::Image(const char* file)
{
    strcpy(_fileName, file);
    std::cout << "Constructing image from file " << file << "." << std::endl;
}

Image::~Image()
{
    delete _fileName;
}

void Image::Draw(const Point& at)
{
    std::cout << "Drawing image at point " << at << "." << std::endl;
}

void Image::HandleMouse(Event& event)
{
    //std::cout << "Handling mouse event " << event << std::endl;
}

const Point& Image::GetExtent()
{
    return _extent;
}

void Image::Load(istream& from)
{
    std::cout << "Loading image from input stream " << from << "." << std::endl;
}

void Image::Save(ostream& to)
{
    std::cout << "Saving image to output stream " << to << "." << std::endl;
}
