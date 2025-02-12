#include "expressionnode.h"
#include "codegenerator.h"
#include "listerator.h"

void ExpressionNode::Traverse(CodeGenerator &cg) {
  cg.Visit(this);

  ListIterator<ProgramNode *> i(_children);

  for (i.First(); !i.IsDone(); i.Next()) {
    i.CurrentItem()->Traverse(cg);
  }
}
