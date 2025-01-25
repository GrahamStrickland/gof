#ifndef ENCHANTED_MAZE_GAME_H
#define ENCHANTED_MAZE_GAME_H

#include "mazegame.h"

class Door;
class Room;
class Spell;

class EnchantedMazeGame : public MazeGame {
public:
  EnchantedMazeGame();

  virtual Room *MakeRoom(int n) const {
    return new EnchantedRoom(n, CastSpell());
  }

  virtual Door *Makedoor(Room *r1, Room *r2) const {
    return new DoorNeedingSpell(r1, r2);
  }

protected:
  Spell *CastSpell() const;
};
#endif // ENCHANTED_MAZE_GAME_H
