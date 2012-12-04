#include "SkipListIterator.h"

template<class Item>
Iterator<Item>* SkipList<Item>::CreateIterator() const {
  return new SkipListIterator<Item>(this);
}
