#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include "Room.h"

class Maze {

public:
  Maze();
  Room* RoomNo(int n) const;
  void AddRoom(Room *room);
  virtual Maze* Clone() const;

private:
  std::vector<Room*> *mRoomVec; 

};

#endif /* MAZE_H */
