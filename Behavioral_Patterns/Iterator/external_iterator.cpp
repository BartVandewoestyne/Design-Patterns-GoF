#include "Employee.h"
#include "List.h"
#include "PrintNEmployees.h"

int main()
{
    List<Employee*>* employees;

    employees = new List<Employee*>;
    employees->Append(new Employee);
    employees->Append(new Employee);
    employees->Append(new Employee);


    ListIterator<Employee*> i(employees);
    int count = 0;
    
    for (i.First(); !i.IsDone(); i.Next()) {
        count++;
        i.CurrentItem()->Print();
    
        if (count >= 10) {
            break;
        }
    }

}
