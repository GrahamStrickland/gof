#include "bombedmazefactory.h"
#include "bombedwall.h"
#include "room.h"
#include "roomwithabomb.h"
#include "wall.h"

Wall *BombedMazeFactory::MakeWall() const { return new BombedWall; }

Room *BombedMazeFactory::MakeRoom(int n) const { return new RoomWithABomb(n); }
