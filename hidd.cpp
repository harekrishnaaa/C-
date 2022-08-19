#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
int a;
int cnt=0;
cin>>a;
if(a%5==0)
{
	
	if(a%10==0)
	{
	
	cout<<1<<endl;
}
else
{
	cout<<0<<endl;
}
}

else{
	cout<<-1<<endl;
}
}
int main()
{
	int tst;
	cin>>tst;
	while(tst--)
	{
		solve();
	}
}
