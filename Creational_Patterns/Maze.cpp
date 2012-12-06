#include "Maze.h"

#include <vector>

Maze::Maze()
  : mRoomVec(new std::vector<Room*>)
{
}

Room* Maze::RoomNo(int n) const  
{  
    std::vector<Room*>::const_iterator it = mRoomVec->begin();  
    for ( ; it != mRoomVec->end(); ++it)  
    {  
        if ( (*it)->GetRoomNumber() == n )
        {  
            return (*it);  
            break;  
        }  
    }  
    return 0;  
}  

void Maze::AddRoom(Room *room)
{
    mRoomVec->push_back(room);
}


Maze* Maze::Clone() const {
    return new Maze(*this);
}
