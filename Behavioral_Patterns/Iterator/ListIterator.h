#ifndef LIST_ITERATOR_H
#define LIST_ITERATOR_H

#include "Iterator.h"
#include "List.h"

template <class Item>
class ListIterator : public Iterator<Item> {
public:
    ListIterator(const List<Item>* aList);
    virtual void First();
    virtual void Next();
    virtual bool IsDone() const;
    virtual Item CurrentItem() const;

private:
    const List<Item>* _list;
    long _current;
};

#include "ListIterator.cpp"

#endif /* LIST_ITERATOR_H */
