#include "ListIterator.h"

template <class Item>
SkipListIterator<Item>::SkipListIterator (
    const List<Item>* aList
) : ListIterator<Item>(aList) {
}
