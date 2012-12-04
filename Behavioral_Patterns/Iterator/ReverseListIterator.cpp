template <class Item>
ReverseListIterator<Item>::ReverseListIterator (
    const List<Item>* aList
) : _list(aList), _current(_list->Count() - 1) {
}

template <class Item>
void ReverseListIterator<Item>::First () {
    _current = _list->Count() - 1;
}

template <class Item>
void ReverseListIterator<Item>::Next () {
    _current--;
}

template <class Item>
bool ReverseListIterator<Item>::IsDone () const {
    return _current < 0;
}

template <class Item>
Item ReverseListIterator<Item>::CurrentItem () const {
    if (IsDone()) {
        //throw IteratorOutOfBounds; // TODO
    }
    return _list->Get(_current);
}
