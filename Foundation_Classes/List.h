#ifndef LIST_H
#define LIST_H

#include "Iterator.h"

const long DEFAULT_LIST_CAPACITY = 200;

template <class Item>
class List {
public:
    List(long size = DEFAULT_LIST_CAPACITY);
    List(List&);
    ~List();
    List& operator=(const List&);

    long Count() const;
    Item& Get(long index) const;
    Item& First() const;
    Item& Last() const;
    bool Includes(const Item&) const;

    void Append(const Item&);
    void Prepend(const Item&);

    void Remove(const Item&);
    void RemoveLast();
    void RemoveFirst();
    void RemoveAll();

    Item& Top() const;
    void Push(const Item&);
    Item& Pop();

    Iterator<Item>* CreateIterator() const;

private:
    void RemoveAt(long index);
  
private:
    Item* _items; 
    long _size; 
    long _count; 
};

#include "List.cpp"

#endif /* LIST_H */
