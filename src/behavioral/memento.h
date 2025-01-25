#ifndef MEMENTO_H
#define MEMENTO_H

class Originator;
class State;

class Memento {
public:
  // narrow public interface
  virtual ~Memento();

private:
  // private emembers accessible only to Originator
  friend class Originator;
  Memento();

  void SetState(State *);
  State *GetState();
  // ...
private:
  State *_state;
  // ...
};
#endif // MEMENTO_H
