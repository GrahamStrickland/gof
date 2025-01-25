#ifndef COLLECTION_H
#define COLLECTION_H

#include "iterationstate.h"

template <class Item> class Collection {
public:
  Collection();

  IterationState *CreateInitialState();
  void Next(IterationState *);
  bool IsDone(const IterationState *) const;
  Item CurrentItem(const IterationState *) const;
  IterationState *Copy(const IterationState *) const;

  void Append(const Item &);
  void Remove(const Item &);
  // ...
};
#endif // COLLECTION_H
