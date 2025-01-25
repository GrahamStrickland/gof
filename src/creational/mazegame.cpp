#include "mazegame.h"
#include "door.h"
#include "maze.h"
#include "mazefactory.h"
#include "room.h"
#include "wall.h"

Maze *MazeGame::CreateMaze() {
  Maze *aMaze = MakeMaze();
  Room *r1 = MakeRoom(1);
  Room *r2 = MakeRoom(2);
  Door *theDoor = MakeDoor(r1, r2);

  aMaze->AddRoom(r1);
  aMaze->AddRoom(r2);

  r1->SetSide(North, MakeWall());
  r1->SetSide(East, theDoor);
  r1->SetSide(South, MakeWall());
  r1->SetSide(West, MakeWall());

  r2->SetSide(North, MakeWall());
  r2->SetSide(East, MakeWall());
  r2->SetSide(South, MakeWall());
  r2->SetSide(West, theDoor);

  return aMaze;
}
