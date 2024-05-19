#ifndef TEX_COMPOSITOR_H
#define TEX_COMPOSITOR_H

#include "compositor.h"

class TeXCompositor : public Compositor {
public:
    TeXCompositor();

    virutal int Compose(
        Coord natural[], Coord stretch[], Coord shrink[],
        int componentCount, int lineWidth, int breaks[]
    );
    // ...
};
#endif // TEX_COMPOSITOR_H
