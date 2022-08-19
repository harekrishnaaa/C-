#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,s;
 int co;
 int x[2000];
 cin>>n;
 cin>>s;
 for(int i=0;i<n;i++)
 {

     cin>>x[i];

    int a=x[i]+x[i+1];
    if(a<=s)
    {
       co++;

    }
    else
        continue;
 }
 cout<<co<<endl;
 return 0;
}
