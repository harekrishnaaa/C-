#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int b;
  cin>>b;
  if(b%4==0)
  {
  	cout<<"North"<<endl;
  }
   if(b%4==1){
   	cout<<"East"<<endl;
   	
   }
   if(b%4==2){
   	cout<<"South"<<edl;
   }
   if(b%4==3)
   cout<<"West"<<endl;
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
