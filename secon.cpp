#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	sort(a,a+n);
    cout<<a[n-2]<<endl;
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
	
}
