
#include<bits/stdc++.h>

using namespace std;
int main()
{
string c;
	long d;
	int tst;
	int a,b=0;
	cin>>tst;
	for(int i=0;i<tst;i++)
	{
       cin>>c;
	   cin>>d;
	   while(d>0)
	   {
a=d%10;
b=b+a;
d=d/10;

	   }
	   if(b%2==0)
	   {
		   cout<<c<<endl;

	   }


	}
	return 0;
}
