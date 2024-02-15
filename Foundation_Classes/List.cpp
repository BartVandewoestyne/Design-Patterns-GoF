/**
 * References:
 *
 *   [1] http://st-www.cs.illinois.edu/patterns/dpbook/Source.html
 */

#include <iostream>
#include "ListIterator.h"

// Initializes the list.
// The size parameter is a hint for the initial number of elements.
template<class Item> 
List<Item>::List(long size) : _size(size), _count(0) {
    _items = new Item[size]; 
}

// Overrides the default copy constructor so that member data are initialized properly.
template<class Item>
List<Item>::List(List& other) {
    _size = other._size;
    _count = other._count;

    _items = new Item[_size];

    for (long i = 0; i < _count; ++i) {
        _items[i] = other._items[i];
    }
}

// Frees the list's internal data structures but not the elements in the list. The class is
// not designed for subclassing; therefore the destructor isn't virtual.
template<class Item> 
List<Item>::~List() {
    delete[] _items;
}

// Implements the assignment operation to assign member data properly.
template<class Item>
List<Item>& List<Item>::operator=(const List<Item>& other) {
    if (this != &other) {  // Check for self-assignment
        // Clear the current list
        RemoveAll();

        // Allocate memory for the new list
        _size = other._size;
        _count = other._count;
        _items = new Item[_size];

        // Copy elements from the other list to this list
        for (long i = 0; i < _count; ++i) {
            _items[i] = other._items[i];
        }
    }
    return *this;
}

// Returns the number of objects in the list.
template<class Item> 
long List<Item>::Count() const {
    return _count;
}

// Returns the object at the given index.
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

// Returns the first object in the list.
template<class Item> 
Item& List<Item>::First() const {
    return Get(0);
}

// Returns the last object in the list.
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

// Adds the argument to the list, making it the last element.
template<class Item> 
void List<Item>::Append(const Item& anItem) {
    if (_count <= _size) {
        _items[_count] = anItem;
        _count++;
    }
}

// Adds the argument to the list, making it the first element.
template<class Item> 
void List<Item>::Prepend(const Item& anItem) {
    if (_count <= _size) {
        for (long i = _count-1; i >= 0; i--)
            _items[i+1] = _items[i];
        _items[0] = anItem;
        _count++;
    }
}

// Removes the given element from the list. This operation requires that the type of
// elements in the list supports the == operator for comparison.
template<class Item> 
void List<Item>::Remove(const Item& anItem) {
    for (long i = 0; i < Count(); i++) {
        if (_items[i] == anItem) {
            RemoveAt(i);
        }
    }
}

// Removes the last element from the list.
template<class Item> 
void List<Item>::RemoveLast() {
    RemoveAt(Count()-1);
}

// Removes the first element from the list.
template<class Item> 
void List<Item>::RemoveFirst() {
    RemoveAt(0);
}

// Removes all elements from the list.
template<class Item> 
void List<Item>::RemoveAll() {
    _count = 0;
}

// Returns the top element (when the List is viewed as a stack).
template<class Item> 
Item& List<Item>::Top() const {
    return Last();
}

// Pushes the element onto the stack.
template<class Item> 
void List<Item>::Push(const Item& anItem) {
    Append(anItem);
}

// Pops the top element from the stack.
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
