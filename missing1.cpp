#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll len;
    ll no;
    ll sum=0;
	cin>>len;
	for(ll i=0;i<len-1;i++)
	{
	cin>>no;
	sum=sum+no;
}
ll noo=(len*(len+1)/2)-sum;
cout<<noo<<endl;
	
	return 0;
}
