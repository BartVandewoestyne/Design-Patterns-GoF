#ifndef MAZE_H
#define MAZE_H

class Room;

class Maze {
public:
  Room* RoomNo(int n);
  void AddRoom(Room *room);
};

#endif /* MAZE_H */
