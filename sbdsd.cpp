#include<bits/stdc++.h>
using namespace std;
void solve(){
int a;
cin>>a;
if(a%2==0)
{
	cout<<a/2<<endl;
	
}
else{
	cout<<-a/2+1<<endl;
}
}


int main()
{
	int tst;
	
	cin>>tst;
	while(tst--){
		solve();
	}
}
