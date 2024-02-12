#include "WindowSystemFactory.h"

WindowSystemFactory* WindowSystemFactory::_instance = 0;

WindowSystemFactory* WindowSystemFactory::Instance () {
    if (_instance == 0) {
        _instance = new WindowSystemFactory;
    }
    return _instance;
}

WindowImp* WindowSystemFactory::MakeWindowImp()
{
    // TODO
    return 0;
}

WindowSystemFactory::WindowSystemFactory()
{}