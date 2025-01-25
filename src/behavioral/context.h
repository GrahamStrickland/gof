#ifndef CONTEXT_H
#define CONTEXT_H

template <class AStrategy> class Context {
public:
  void Operation() { theStrategy.DoAlgorithm(); }
  // ...
private:
  AStrategy theStrategy;
};
#endif // CONTEXT_H
