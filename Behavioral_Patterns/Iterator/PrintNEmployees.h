#ifndef PRINT_N_EMPLOYEES_H
#define PRINT_N_EMPLOYEES_H

#include "ListTraverser.h"

class PrintNEmployees : public ListTraverser<Employee*> {
public:
    PrintNEmployees(List<Employee*>* aList, int n) :
        ListTraverser<Employee*>(aList),
        _total(n), _count(0) { }

protected:
    bool ProcessItem(Employee* const&);
private:
    int _total;
    int _count;
};

bool PrintNEmployees::ProcessItem (Employee* const& e) {
    _count++;
    e->Print();
    return _count < _total;
}

#endif /* PRINT_N_EMPLOYEES_H */
