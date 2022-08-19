#include <iostream>
using namespace std;
class emp {
int id;
int salary;
public:
void setId(void){
        salary=122;
        cout<<"Enter the id of the employee "<<endl;
        cin>>id;

}
void getId(void){
        cout<<"The id of the employee is "<<id<<endl;
}
};



int main()
{
        emp Krishna[5];
        for(int i=0; i<5; i++)
        {
                Krishna[i].setId();
                Krishna[i].getId();
        }
        return 0;

}
