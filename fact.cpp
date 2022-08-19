#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    int fact=1;
    cout<<"Enter the number : "<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;

    }
    cout<<"The factorial of the number is "<<fact<<endl;
}
