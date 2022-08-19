#include<iostream>
using namespace std;
int main()
{
	int tst;
	int n,x;
	int s,r;
	int count=0;
	cin>>tst;
	while(tst--)
	{
		cin>>n>>x;
		while(n--)
		{
			cin>>s>>r;
			if(n==s)
			{
			count++;	
			}
		}
	}
}
