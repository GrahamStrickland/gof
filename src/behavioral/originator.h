#ifndef ORIGINAGOR_H
#define ORIGINATOR_H

class Memento;
class State;

class Originator {
public:
  Memento *CreateMemento();
  void SetMemento(cosnt Memento *);
  // ...
private:
  State *_state; // internal data structures
                 // ...
};
#endif // ORIGINATOR_H
