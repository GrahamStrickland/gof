#include "collection.h"
#include "itemtype.h"
#include "iterationstate.h"

int main(int argc, char *argv[]) {
  Collection<ItemType *> aCollection;
  IterationState *state;

  state = aCollection.CreateInitialState();

  while (!aCollection.IsDone(state)) {
    aCollection.CurrentItem(state)->Process();
    aCollection.Next(state);
  }
  delete state;

  return EXIT_SUCCESS;
}
