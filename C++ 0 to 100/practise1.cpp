#include <iostream>
using namespace std;
class em {
int id;
public:
void setData(void);
void getData(){
        cout<<"The ID of the employee is "<<id<<endl;

}
void mergeData();
};
void em::setData(){
        cout<<"Enter the ID of the employee : "<<endl;
        cin>>id;
}




void solve(){
        em k[10];
        for(int i=0; i<10; i++) {
                k[i].setData();
                k[i].getData();
        }
}






int main()
{

        solve();


}
