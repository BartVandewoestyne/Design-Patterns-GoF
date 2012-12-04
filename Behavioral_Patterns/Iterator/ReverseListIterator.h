#ifndef REVERSE_LIST_ITERATOR_H
#define REVERSE_LIST_ITERATOR_H

#include "Iterator.h"
#include "List.h"

template <class Item>
class ReverseListIterator : public Iterator<Item> {
public:
    ReverseListIterator(const List<Item>* aList);
    virtual void First();
    virtual void Next();
    virtual bool IsDone() const;
    virtual Item CurrentItem() const;

private:
    const List<Item>* _list;
    long _current;
};

#include "ReverseListIterator.cpp"

#endif /* REVERSE_LIST_ITERATOR_H */
