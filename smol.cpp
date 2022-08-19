#include<iostream>
using namespace std;
int main()
{
	int tst;
	cin>>tst;
	int n,k;
	while(tst--)
	{
		cin>>n>>k;
		
		do
		{
			n=n-k;
		}
		while(n>=0);
		cout<<n<<endl;
		
	}
	return 0;
}
