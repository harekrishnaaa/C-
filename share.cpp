#include<iostream>
using namespace std;
int main()
{
	int tst;
	cin>>tst;
	double s,a,b;
	int c;
	while(tst--)
	{
	
	cin>>s>>a>>b>>c;
	double n=s+((c*s)/100);
	if(n>=a && n<=b)
	{
	
		cout<<"YES"<<endl;
	}
	else
	{
	
		cout<<"NO"<<endl;
}
}
return 0;
}
