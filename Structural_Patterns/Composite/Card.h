#ifndef CARD_H
#define CARD_H

#include "Equipment.h"

class Card : public Equipment {
public:
    Card(const char*);
    virtual ~Card();

    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();
};

#endif /* CARD_H */
