#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int x1,y1,x2,y2,d;
	cin>>x1>>y1>>x2>>y2>>d;
	int xx=x2*(d);
	int yy=y2*(d);
	if(xx<=x1 && yy<=y1)
	{
	
	cout<<"YES"<<endl;
}
	else
	{
	
	cout<<"NO"<<endl;
}
}
int main()
{
  
  int tst=1;
  cin>>tst;
  while(tst--)
  {
    solve();
  }
  return 0;
}
