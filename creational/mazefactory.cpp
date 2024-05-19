#include <cstdlib>
#include <cstring>

#include "bombedmazefactory.h"
#include "enchantedmazefactory.h"
#include "mazefactory.h"

MazeFactory* MazeFactory::_instance = nullptr;

MazeFactory* MazeFactory::Instance() {
    if (_instance == nullptr) {
        const char* mazeStyle = std::getenv("MAZESTYLE");

        if (std::strcmp(mazeStyle, "bombed") == 0) {
            _instance = new BombedMazeFactory;
        } else if (std::strcmp(mazeStyle, "enchanted") == 0) {
            _instance = new EnchantedMazeFactory;
            // ... other possible subclasses
        } else {    // default
            _instance = new MazeFactory;
        }
    }
    return _instance;
}

