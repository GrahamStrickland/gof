#ifndef ARRAY_COMPOSITOR_H
#define ARRAY_COMPOSITOR_H

#include "compositor.h"

class ArrayCompositor : public Compositor {
public:
  ArrayCompositor(int interval);

  virtual int Compose(Coord natural[], Coord stretch[], Coord shrink[],
                      int componentCount, int lineWidth, int breaks[]);
  // ...
};
#endif // ARRAY_COMPOSITOR_H
