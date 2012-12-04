#ifndef FILTERING_LIST_TRAVERSER_H
#define FILTERING_LIST_TRAVERSER_H

template <class Item>
class FilteringListTraverser {
public:
    FilteringListTraverser(List<Item>* aList);
    bool Traverse();
protected:
    virtual bool ProcessItem(const Item&) = 0;
    virtual bool TestItem(const Item&) = 0;
private:
    ListIterator<Item> _iterator;
};

#include "FilteringListTraverser.cpp"

#endif /* FILTERING_LIST_TRAVERSER_H */
