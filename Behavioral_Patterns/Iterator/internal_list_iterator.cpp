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

    PrintNEmployees pa(employees, 10);
    pa.Traverse();
}
