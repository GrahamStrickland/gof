#ifndef DOOR_NEEDING_SPELL_H
#define DOOR_NEEDING_SPELL_H

#include "door.h"

class EnchantedRoom;

class DoorNeedingSpell : public Door {
public:
    DoorNeedingSpell(EnchantedRoom* r1, EnchantedRoom* r2);

private:
    EnchantedRoom* _r1;
    EnchantedRoom* _r2;
};
#endif // DOOR_NEEDING_SPELL_H
