#include <iostream>

#include "arraycompositor.h"
#include "composition.h"
#include "simplecompositor.h"
#include "texcompositor.h"

int main(int argc, char *argv[]) {
    Composition* quick = new Composition(new SimpleCompositor);
    Composition* slick = new Composition(new TeXCompositor);
    Composition *iconic = new Composition(new ArrayCompositor(100));

    return EXIT_SUCCESS;
}
