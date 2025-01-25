#ifndef CONSTRAINT_SOLVER_H
#define CONSTRAINT_SOLVER_H

class ConstraintSolverMemento;

class ConstraintSolver {
public:
  static ConstraintSolver *Instance();

  void Solve();
  void AddConstraint(Graphic *startConnection, Graphic *endConnection);
  void RemoveConstraint(Graphic *startConection, Graphic *endConnection;);
  ConstraintSolverMemento *CreateMemento();
  void SetMemento(ConstraintSolverMemento *);

private:
  // nontrivial state and operations for enforcing
  // connectivity semantics
};
#endif // CONSTRAINT_SOLVER_H
