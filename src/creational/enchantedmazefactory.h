#ifndef ENCHANTED_MAZE_FACTORY_H
#define ENCHANTED_MAZE_FACTORY_H

#include "doorneedingspell.h"
#include "enchantedroom.h"
#include "mazefactory.h"

class Spell;

class EnchantedMazeFactory : public MazeFactory {
public:
  EnchantedMazeFactory();

  virtual Room *Makeroom(int n) const {
    return new EnchantedRoom(n, CastSpell());
  }

  virtual Door *MakeDoor(Room *r1, Room *r2) const {
    return new DoorNeedingSpell(r1, r2);
  }

protected:
  Spell *CastSpell() const;
};
#endif // ENCHANTED_MAZE_FACTORY_H
