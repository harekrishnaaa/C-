#include<iostream>
using namespace std;
int main()
{
 int t;
 int n,x;
 int a[100];
 int num1;
 int num2;
 cin>>t;
 while(t--)
 {
     cin>>n>>x;

     num1=x;
     num2=x;
     for(int i=0;i<n;i++)
     {



     cin>>a[i];
     num1=num1+a[i];




 if(num1>x)
 {
     num2=num1;

     cout<<num2<<endl;
 }

 }
 }
return 0;

}
