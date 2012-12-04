#include "Employee.h"
#include "Iterator.h"
#include "List.h"
#include "ListIterator.h"
#include "ReverseListIterator.h"
#include "SkipList.h"

void PrintEmployees (Iterator<Employee*>& i) {
    for (i.First(); !i.IsDone(); i.Next()) {
        i.CurrentItem()->Print();
    }
}


int main()
{
    // EXAMPLE 1: List

    List<Employee*>* employees;

    employees = new List<Employee*>;
    employees->Append(new Employee);
    employees->Append(new Employee);
    employees->Append(new Employee);

    ListIterator<Employee*> forward(employees);
    ReverseListIterator<Employee*> backward(employees);

    PrintEmployees(forward);
    PrintEmployees(backward);


    // EXAMPLE 2: SkipList

    SkipList<Employee*>* employees2;

    employees2 = new SkipList<Employee*>;
    employees2->Append(new Employee);
    employees2->Append(new Employee);
    employees2->Append(new Employee);

    SkipListIterator<Employee*> iterator(employees2);
    PrintEmployees(iterator);

}
