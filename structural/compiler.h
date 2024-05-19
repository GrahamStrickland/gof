#ifndef COMPILER_H
#define COMPILER_H

#include <iostream>

class BytecodeStream;

class Compiler {
public:
    Compiler();

    virtual void Compile(std::istream&, BytecodeStream&);
};
#endif // COMPILER_H

