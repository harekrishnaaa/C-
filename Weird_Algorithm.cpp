#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b,c,d,e;
	int tst;
	cin>> tst;
	while(tst--)
	{
		cin>>a>>b>>c;
		if(((a+1)*c)>=b)
		{
			cout<<"YES"<<"\n";
		}
		else
		cout<<"NO"<<"\n";
		
	}
}
