#include<iostream>
using namespace std;
int main()
{
    int tst;
    int n;
    int co=0;
    long long s;
    cin>>tst>>n;
    while(tst--)
    {

        cin>>s;
        if(s%n==0)
        {

        co++;
        }
    }
    cout<<co<<endl;
    return 0;
}

