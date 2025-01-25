#ifndef CONSTRAINT_SOLVER_MEMENTO_H
#define CONSTRAINT_SOLVER_MEMENTO_H

class ConstraintSolverMemento {
public:
  virtual ~ConstraintSolverMemento();

private:
  friend class ConstraintSolver;
  ConstraintSolverMemento();

  // private constraint solver state
};
#endif // CONSTRAINT_SOLVER_MEMENTO_H
