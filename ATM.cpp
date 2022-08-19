#include<iostream>
using namespace std;
int main()
{
	int tst;
	int k,n;
	int bal[100];
	cin>>tst;
	while(tst--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>bal[i];
			if(bal[i]<=k)
			{
				k=k-bal[i];
				cout<<1;
			}
			else
			{
				cout<<0;
			}
			
		}
		cout<<""<<endl;
		
	}
	return 0;
}
