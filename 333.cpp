#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int k,x[10],y[10],a[10],b;
	int c1=0,c2=0;
for(int i=0;i<10;i++)
{
	cin>>x[i];
	for(int j=0;j<10;j++);
	{
		if(i%2==0)
		c1=c1+x[i];
		else
		c2=c2+x[i];
	}
}
	if(c1==c2)
	cout<<0<<"\n";
	if(c1>c2)
	cout<<1<<"\n";
	else
	cout<<2<<"\n";
	}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tst=1;
	cin>>tst;
	while(tst--)
	{
		solve();
	}
	return 0;
}
