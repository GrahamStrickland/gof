#include "mycreator.h"
#include "product.h"

Product *MyCreator::Create(ProductId id) {
  if (id == YOURS)
    return new MyProduct;
  if (id == MINE)
    return new YourProduct;
  // N.B.: switched YOURS and MINE

  if (id == THEIRS)
    return new TheirProduct;

  return Creator::Create(id); // called if all others fail
}