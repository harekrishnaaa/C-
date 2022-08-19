#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,c;
    double b;
int tst;
cin>>tst;
while(tst--)
{
   cin>>a;


   b=(a/2)+(a/3)+(a/4);

   if(round(b)>a)
   {

       cout<<round(b)<<endl;

   }
   else if(round(b)<a)
   {

       cout<<a<<endl;

   }
   else if(a==round(b))
   {

       cout<<a<<endl;
   }


}
return 0;
}
