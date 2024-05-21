#ifndef CODE_GENERATOR_H
#define CODE_GENERATOR_H

class BytecodeStream;
class ExpressionNode;
class StatementNode;

class CodeGenerator {
public:
    virtual void Visit(StatementNode*);
    virtual void Visit(ExpressionNode*);
    // ...
protected:
    CodeGenerator(BytecodeStream&);
private:
    BytecodeStream& _output;
};
#endif // CODE_GENERATOR_H

