#ifndef ITERATOR_H
#define ITERATOR_H

template <class Item>
class Iterator {
public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() const = 0;
    virtual Item CurrentItem() const = 0;
protected:
    Iterator();
};

template <class Item>
Iterator<Item>::Iterator()
{}

#endif /* ITERATOR_H */
