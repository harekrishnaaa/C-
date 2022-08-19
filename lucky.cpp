#include<iostream>
using namespace std;
int main()
{
    int tst;
    long long n,no=0,div;

    int co=0;
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        while(n>0)

        {
            div=n%10;
            if(div==4)
            {

                co++;
            }
            else if(div!=4)
            {
                continue;
            }

            n=n/10;
        }
cout<<co<<endl;
    }

    return 0;
}
