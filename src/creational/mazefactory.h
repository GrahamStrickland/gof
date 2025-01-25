#ifndef MAZE_FACTORY_H
#define MAZE_FACTORY_H

#include "door.h"
#include "maze.h"
#include "room.h"
#include "wall.h"

class MazeFactory {
public:
  static MazeFactory *Instance();

  virtual Maze *MakeMaze() const { return new Maze; }
  virtual Wall *MakeWall() const { return new Wall; }
  virtual Room *MakeRoom(int n) const { return new Room(n); }
  virtual Door *MakeDoor(Room *r1, Room *r2) const { return new Door(r1, r2); }

protected:
  MazeFactory();

private:
  static MazeFactory *_instance;
};
#endif // MAZE_FACTORY_H
