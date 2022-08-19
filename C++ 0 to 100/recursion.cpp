#include <iostream>
using namespace std;
int fact(int n){
        if(n<=1) {
                return 1;
        }
        return n*fact(n-1);
}
int main()
{
        int a;
        cout<<"Enter the number whose factorial you want: "<<endl;
        cin>>a;
        cout<<fact(a)<<endl;
        return 0;
}
