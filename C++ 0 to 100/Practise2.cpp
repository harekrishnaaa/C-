#include <iostream>
using namespace std;
int total;
class Student {

int id[total];
string name[total];

public:
void setName(void);
void setId(void);
void get(void);
void stu(void);
// void ini(void);
};
void Student:: stu(){
        cout<<"Enter the total number of students "<<endl;
        cin>>total;
}
void Student::setName(){
        cout<<"Please enter the name of the student"<<endl;
        for(int i=0; i<total; i++)
        {
                cin>>name[i];
        }

}
void Student::setId(){
        cout<<"Enter the ID "<<endl;
        for(int i=0; i<total; i++) {
                cin>>id[i];
        }
}
void Student::get(){
        cout<<"The name of the Students are "<<endl;
        for(int i=0; i<total; i++) {
                cout<<"The name of the student is "<<name[i]<<" and the ID of the student is "<<id[i]<<endl;
        }

        // for()
}



int main()
{
        Student IIT;
        IIT.stu();
        IIT.setName();
        IIT.setId();
        IIT.get();
        return 0;
}
