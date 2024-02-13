#ifndef SCANNER_H
#define SCANNER_H

#include <istream>
using std::istream;

class Token;

class Scanner {
public:
    Scanner(istream&);
    virtual ~Scanner();

    virtual Token& Scan();
private:
    istream& _inputStream;
};

#endif /* SCANNER_H */
