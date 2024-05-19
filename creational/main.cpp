#include <iostream>

#include "bombedmazefactory.h"
#include "mazegame.h"

int main(int argc, char *argv[]) {
    MazeGame game;
    BombedMazeFactory factory;

    game.CreateMaze(factory);

    return EXIT_SUCCESS;
}

