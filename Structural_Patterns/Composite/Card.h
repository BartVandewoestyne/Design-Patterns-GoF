#ifndef CARD_H
#define CARD_H

#include "Currency.h"
#include "Equipment.h"
#include "Watt.h"

class Card : public Equipment {
public:
    Card(const char*);
    virtual ~Card();

    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();
};

#endif /* CARD_H */
