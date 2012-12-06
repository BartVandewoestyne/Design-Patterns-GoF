#include "Door.h"
#include "Maze.h"
#include "MazeParts.h"
#include "StandardMazeBuilder.h"
#include "Wall.h"

class Room;

StandardMazeBuilder::StandardMazeBuilder () {
      _currentMaze = 0;
}

void StandardMazeBuilder::BuildMaze () {
    _currentMaze = new Maze;
}

Maze* StandardMazeBuilder::GetMaze () {
    return _currentMaze;
}

void StandardMazeBuilder::BuildRoom (int n) {
    if (!_currentMaze->RoomNo(n)) {
        Room* room = new Room(n);
        _currentMaze->AddRoom(room);

        room->SetSide(North, new Wall);
        room->SetSide(South, new Wall);
        room->SetSide(East, new Wall);
        room->SetSide(West, new Wall);
    }
}

void StandardMazeBuilder::BuildDoor (int n1, int n2) {
    Room* r1 = _currentMaze->RoomNo(n1);
    Room* r2 = _currentMaze->RoomNo(n2);
    Door* d = new Door(r1, r2);

    r1->SetSide(CommonWall(r1,r2), d);
    r2->SetSide(CommonWall(r2,r1), d);
}

/**
 * Utility operation that determines the direction of the common wall
 * between two rooms.
 */
Direction StandardMazeBuilder::CommonWall(Room* r1, Room* r2) {

    // Solution based on https://code.google.com/p/basic-algorithm-operations/source/browse/trunk/DP/Builder.cpp
    // TODO: check if this is a correct implementation.
    if ( r1->GetRoomNumber() < r2->GetRoomNumber() ) {
        return East;
    } else {
        return West;
    }

}
