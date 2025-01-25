#ifndef MOVE_COMMAND_H
#define MOVE_COMMAND_H

#include "constraintsolver.h"
#include "graphic.h"
#include "point.h"

class Graphic;
// base class for graphical objects in the graphical editor

class MoveCommand {
public:
  MoveCommand(Graphic *target, const Point &delta);
  void Execute();
  void Unexecute();

private:
  ConstraintSolverMemento *_state;
  Point _delta;
  Graphic *_target;
};
#endif // MOVE_COMMAND_H
