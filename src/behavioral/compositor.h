#ifndef COMPOSITOR_H
#define COMPOSITOR_H

#include "coord.h"

class Compositor {
public:
    virtual int Compose(
        Coord natural[], Coord stretch[], Coord shrink[],
        int componentCount, int lineWidth, int breaks[]
    ) = 0;
protected:
    Compositor();
};
#endif // COMPOSITOR_H
