#include<iostream>
using namespace std;
void solve()
{
  int a,b;
  int count;
  cin>>a>>b;
  for(int i=a;i<=b;i++)
  {
    for(int j=1;j<=5000;j++){
    if(i%j==0)
      count++;

  }
    if(count==2)
    {
      cout<<i<<endl;
    }
}
}


int main(){
  int tst=1;
  cin>>tst;
  while(tst--){
    solve();
  }
}
