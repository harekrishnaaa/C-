#include <iostream>
using namespace std;
class A {
int marks[5];
int total=0;
public:
void setData(void);
void tot();
void getData(){
        cout<<"The average of 5 subjects is "<<total<<endl;
}
};
void A::setData(void){
        cout<<"Please enter the marks of 5 subjects "<<endl;
        for(int i=0; i<5; i++) {
                cin>>marks[i];
                total=total+marks[i];
        }
        total=total/5;
}
int main()
{
        A shubham;
        shubham.setData();
        shubham.getData();
        A Krishna;
        Krishna.setData();
        Krishna.getData();
        A Ram;
        Ram.setData();
        Ram.getData();
        return 0;
}
