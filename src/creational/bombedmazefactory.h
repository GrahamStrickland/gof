#ifndef BOMBED_MAZE_FACTORY_H
#define BOMBED_MAZE_FACTORY_H

#include "mazefactory.h"

class Wall;
class Room;

class BombedMazeFactory : public MazeFactory {
public:
  BombedMazeFactory();

  Wall *MakeWall() const;
  Room *MakeRoom(int n) const;
};
#endif // BOMBED_MAZE_FACTORY_Y
