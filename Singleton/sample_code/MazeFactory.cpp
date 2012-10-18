#include "BombedMazeFactory.h"
#include "EnchantedMazeFactory.h"
#include "MazeFactory.h"
#include <cstdlib>
#include <cstring>

MazeFactory* MazeFactory::_instance = 0;


//MazeFactory* MazeFactory::Instance () {
//    if (_instance == 0) {
//        _instance = new MazeFactory;
//    }
//    return _instance;
//}


MazeFactory* MazeFactory::Instance () {
    if (_instance == 0) {
        const char* mazeStyle = getenv("MAZESTYLE");

        if (strcmp(mazeStyle, "bombed") == 0) {
            _instance = new BombedMazeFactory;

        } else if (strcmp(mazeStyle, "enchanted") == 0) {
            _instance = new EnchantedMazeFactory;

        // ... other possible subclasses

        } else {        // default
            _instance = new MazeFactory;
        }
    }
    return _instance;
}
