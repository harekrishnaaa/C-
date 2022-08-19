#include<iostream>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    int no;
    int c=0;
    while(tst--)
    {
        cin>>no;
        while(no>0)
        {
            int di=no%10;
            c=c+di;
            no=no/10;
        }
        cout<<c<<endl;
    }
    return 0;
}
