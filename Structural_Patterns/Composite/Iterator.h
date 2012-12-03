#ifndef ITERATOR_H
#define ITERATOR_H

class Equipment;

class Iterator {
public:
    Equipment* First(); // TODO: check if this function must return Equipment*
    Equipment* Next();  // TODO: check if this function must return Equipment*
    bool IsDone();
    Equipment* CurrentItem(); // TODO: check if this function must return Equipment*
};

#endif /* ITERATOR_H */
