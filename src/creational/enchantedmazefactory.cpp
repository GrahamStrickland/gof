#include "enchantedmazefactory.h"
#include "spell.h"

EnchantedMazeFactory::EnchantedMazeFactory() {

}

EnchantedMazeFactory::CastSpell() const {
    return new Spell;
}

