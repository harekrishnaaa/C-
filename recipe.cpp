#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int x1,y1,x2,y2,d;
	cin>>x1>>y1>>x2>>y2>>d;
	if((x2*(d/2)<=x1 && (y2*(d/2)<=y1))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
int main()
{
  
  int tst;
  cin>>tst;
  while(tst--)
  {
    solve();
  }
  return 0;
}
