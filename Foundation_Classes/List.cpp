/**
 * References:
 *
 *   [1] http://st-www.cs.illinois.edu/patterns/dpbook/Source.html
 */

#include <iostream>
#include "ListIterator.h"

template<class Item> 
List<Item>::List(long size) : _size(size), _count(0) {
    _items = new Item[size]; 
}

// TODO: Copy constructor.

template<class Item> 
List<Item>::~List() {
    delete[] _items;
}

// TODO: operator=
  

template<class Item> 
long List<Item>::Count() const {
    return _count;
}

// TODO:
//   * solve warning 'control reaches end of non-void function'.
//   * shouldn't the test be if (index < _count) ???
template<class Item> 
Item& List<Item>::Get(long index) const {
    if (_count <= _size) {
      return _items[index];
    } else {
      // throw RangeError exception
    }
}

template<class Item> 
Item& List<Item>::First() const {
    return Get(0);
}

template<class Item> 
Item& List<Item>::Last() const {
  return Get(Count()-1);
}

template<class Item> 
bool List<Item>::Includes(const Item& anItem) const {
    for (long i = 0; i < Count(); i++) {
        if (_items[i] == anItem) {
            return true;
        }
    }
    return false;
}


template<class Item> 
void List<Item>::Append(const Item& anItem) {
    if (_count <= _size) {
        _items[_count] = anItem;
        _count++;
    }
}

template<class Item> 
void List<Item>::Prepend(const Item& anItem) {
    if (_count <= _size) {
        for (long i = _count-1; i >= 0; i--)
            _items[i+1] = _items[i];
        _items[0] = anItem;
        _count++;
    }
}

template<class Item> 
void List<Item>::Remove(const Item& anItem) {
    for (long i = 0; i < Count(); i++) {
        if (_items[i] == anItem) {
            RemoveAt(i);
        }
    }
}

template<class Item> 
void List<Item>::RemoveLast() {
    RemoveAt(Count()-1);
}

template<class Item> 
void List<Item>::RemoveFirst() {
    RemoveAt(0);
}

template<class Item> 
void List<Item>::RemoveAll() {
    _count = 0;
}


template<class Item> 
Item& List<Item>::Top() const {
    return Last();
}

template<class Item> 
void List<Item>::Push(const Item& anItem) {
    Append(anItem);
}

template<class Item> 
Item& List<Item>::Pop()
{
    Item& top = Last();
    RemoveLast();
    return top; 
}


template<class Item> 
void List<Item>::RemoveAt(long index) {
    if (index < 0 || index >= Count())
        std::cout << "Throw RangeException\n";
    for (long i = index; i < Count()-1; i++)
        _items[i] = _items[i+1];
    _count--;
}


template<class Item> 
Iterator<Item>* List<Item>::CreateIterator() const {
  return new ListIterator<Item>(this);
}
