#include<iostream>
using namespace std;
#define ll long long
int main()
{
	ll a;
	ll co=0;
	cin>>a;
	for(ll i=1;i<=a;i++)
	{
		if(a%i==0)
		{
		co++;
		}
	}
	cout<<co<<endl;
	return 0;
}
