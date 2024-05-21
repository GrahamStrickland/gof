#ifndef MY_STRATEGY_H
#define MY_STRATEGY_H

#include <iostream>

#include "context.h"

class MyStrategy {
public:
    void DoAlgorithm();
};

int main(int argc, char *argv[]) {
    Context<MyStrategy> aContext;

    return EXIT_SUCCESS;
}
#endif // MY_STRATEGY_H
