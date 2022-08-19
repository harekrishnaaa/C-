
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d;
	
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Enter third number: ";
	cin>>c;
	cout<<"Enter fourth number: ";
	cin>>d;
	int max1=max(a,b);
	int max2=max(c,d);
	int max_final=max(max1,max2);
	int min1=min(a,b);
	int min2=min(c,d);
	int min_final=min(min1,min2);
	cout<<"The largest number is "<<max_final<<endl;
	cout<<"The smallest number is "<<min_final<<endl;
	return 0;
}



