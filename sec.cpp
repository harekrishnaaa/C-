#include<iostream>
using namespace std;
int main()
{
    int tst;
    int no;
    int n=0;
    int s;
    cin>>tst;
    while(tst--)
    {
        cin>>no;
        s=0;
        while(no>0)
        {
            s=(s*10)+(no%10);
            no=no/10;
    }
    cout<<s<<endl;
    }
    return 0;
}
