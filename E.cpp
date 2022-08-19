#include<bits\stdc++.h>
using namespace std;
int main()
{

    int tst;
    int a,b;
    cin>>tst;
    for(int i=0;i<tst;i++)
    {
        int c=0;
        cin>>a;
        while(a>0)
        {

            b=a%10;
            c=c+b;
            a=a/10;


        }
        cout<<c<<endl;

    }
    return 0;
}
