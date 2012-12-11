#ifndef COMPILER_H
#define COMPILER_H

#include <istream>
#include "BytecodeStream.h"
using namespace std;
 
class Compiler {
public:
    Compiler();

    virtual void Compile(istream&, BytecodeStream&);
};

#endif /* COMPILER_H */
