#include "bytecodestream.h"
#include "compiler.h"
#include "parser.h"
#include "programnodebuilder.h"
#include "risccodegenerator.h"
#include "scanner.h"

void Compiler::Compile(
    std::istream& input, BytecodeStream& output
) {
    Scanner scanner(input);
    ProgramNodeBuilder builder;
    Parser parser;

    parser.Parse(scanner, builder);

    RISCCodeGenerator generator(output);
    ProgramNode* parseTree = builder.GetRootNode();
    parseTree->Traverse(generator);
}

