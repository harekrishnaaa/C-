#include<iostream>
using namespace std;
int main()
{
  struct Employee{
    string name;
    int id;
    int salary;
  };
  Employee i;
  i.name="Shubham";
  i.id=214993;
  i.salary=60000;
  cout<<"The name of the employee is "<<i.name<<endl;
  cout<<"The salary of the employee is "<<i.salary<<endl;
  cout<<"The id of the employee is "<<i.id<<endl;
}
