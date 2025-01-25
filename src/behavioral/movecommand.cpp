#include "movecommand.h"

void MoveCommand::Execute() {
  ConstraintSolver *solver = ConstraintSolver::Instance();
  _state = solver->CreateMemento(); // create a memento
  _target->Move(_delta);
  solver->Solve();
}

void MoveCommand::Unexecute() {
  ConstraintSolver *solver = ConstraintSolver::Instance();
  _target->Move(-_delta);
  solver->SetMemento(_state); // restore solver state
  solver->Solve();
}
