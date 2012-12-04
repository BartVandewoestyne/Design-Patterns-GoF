#ifndef ABSTRACT_LIST_H
#define ABSTRACT_LIST_H

// TODO: make it work with AbstractList.

template <class Item>
class AbstractList {
public:
    virtual Iterator<Item>* CreateIterator() const = 0;
    // ...
};

#endif /* ABSTRACT_LIST_H */
