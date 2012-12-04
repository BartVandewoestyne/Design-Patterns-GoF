#include "Employee.h"
#include "Iterator.h"
#include "List.h"
#include "ListIterator.h"
#include "ReverseListIterator.h"

void PrintEmployees (Iterator<Employee*>& i) {
    for (i.First(); !i.IsDone(); i.Next()) {
        i.CurrentItem()->Print();
    }
}


int main()
{
    List<Employee*>* employees;

    // Add some employees to the List.
    employees = new List<Employee*>;
    employees->Append(new Employee);
    employees->Append(new Employee);
    employees->Append(new Employee);

    ListIterator<Employee*> forward(employees);
    ReverseListIterator<Employee*> backward(employees);

    PrintEmployees(forward);
    PrintEmployees(backward);
}
