#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
  int a;
  cin>>a;
  if(a%2==0)
  {
    cout<<"YES"<<endl;

  }
  else{
    cout<<"NO"<<endl;
  }
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tst=1;
  cin>>tst;
  while(tst--){
    solve();
  }
}
