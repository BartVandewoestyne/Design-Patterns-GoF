#ifndef LIST_TRAVERSER_H
#define LIST_TRAVERSER_H

template <class Item>
class ListTraverser {
public:
    ListTraverser(List<Item>* aList);
    bool Traverse();
protected:
    virtual bool ProcessItem(const Item&) = 0;
private:
    ListIterator<Item> _iterator;
};

#include "ListTraverser.cpp"

#endif /* LIST_TRAVERSER */
