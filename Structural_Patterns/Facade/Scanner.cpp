#include "Scanner.h"

#include "Token.h"

Scanner::Scanner(istream& stream)
    : _inputStream(stream)
{}

Scanner::~Scanner()
{}

Token& Scanner::Scan()
{
    // TODO
    static Token dummyToken;
    return dummyToken;
}