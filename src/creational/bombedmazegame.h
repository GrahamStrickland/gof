#ifndef BOMBED_MAZE_GAME_H
#define BOMBED_MAZE_GAME_H

#include "mazegame.h"

class Room;
class Wall;

class BombedMazeGame : public MazeGame {
public:
  BombedMazeGame();

  virtual Wall *MakeWall() const { return new BombedWall; }

  virtual Room *MakeRoom(int n) const { return new RoomWithABomb(n); }
};
#endif // BOMBED_MAZE_GAME_H
