#ifndef CURRENCY_H
#define CURRENCY_H

#include <iostream>

class Currency {
public:
    Currency(int c);
    Currency& operator+=(const Currency& rhs);
};

Currency operator+(const Currency& lhs, const Currency& rhs);

std::ostream& operator<<(std::ostream& out, const Currency& curr);

#endif /* CURRENCY_H */
