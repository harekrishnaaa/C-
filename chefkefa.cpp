#include<bits/stdc++.h>
using namespace std;
void solve()
{
	float x1,x2,re,v1,v2;
	cin>>x1>>x2>>re>>v1>>v2;
    float sp2=(x2-re)/v2;
	float sp1=(re-x1)/v1;
	if(sp1<sp2){
		cout<<"Chef"<<endl;
		
	}
	if(sp1>sp2){
		cout<<"Kefa"<<endl;
		
	}
	if(sp1==sp2)
	cout<<"Draw"<<endl;
}
int main()
{
	int tst=1;
	cin>>tst;
	while(tst--){
		solve();
	}
}
