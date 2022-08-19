#include<iostream>
using namespace std;
int product(int a,int b)
{
   return a*b;
}
int main()
{
  int a,b;
  cout<<"Enter the bvalue of a  and b: "<<endl;
  cin>>a>>b;
  cout<<"The product of a nd b is "<<product(a,b)<<endl;
  return 0;
}

