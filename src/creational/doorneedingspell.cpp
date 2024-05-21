#include "doorneedingspell.h"

DoorNeedingSpell::DoorNeedingSpell(EnchantedRoom* r1, EnchantedRoom* r2) :
        _r1(r1), _r2(r2) {
    Door::_isOpen = false;
}
    