#include<stdio.h>
struct emp
{
    string firstName;
    string lastName;
    double salary;
}
void emp_init(struct emp *e)
{
    e->firstName="";
    e->lastName="";
    e->salary=0.00;
}
void set_salary(struct emp *e, double sal)
{
    e->salary=sal;
}
void emp_display(struct emp *e)
{
    printf("Name of Employee: %s %s.",e->firstName,e->lastName);
    printf("Salary: %lf",e->salary);
}
int main()
{ 
    struct emp emp1;
    struct emp emp2;
    emp1.firstName="Saurabh";
    emp1.lastName="Misal";
    emp1.salary=12000;
    emp2.firstName="kishor";
    emp2.lastName="Patil";
    emp2.salary=22000;
    struct emp *ptr=&emp1;
    printf("Yearly Salary of emp1 is %lf."emp_display(ptr);
    ptr=&emp2;
    emp_display(ptr)
    
    
}