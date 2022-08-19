#include <iostream>
using namespace std;
class Employee {
static int count;
int id;
public:
void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
}
void getData(void){
        cout<<"The id of the employee is "<<id<<" and the number of the employee is "<<count<<endl;
}
};
int Employee:: count=1000;
int main()
{
        Employee Shubham;
        Shubham.setData();
        Shubham.getData();
        Employee Ram;
        Ram.setData();
        Ram.getData();
}
