#include<iostream>
using namespace std;
// // inline int product(int a,int b)
// {
//   //not recommended to use below lines with inline function
//   // static int c=0;//this executes only once
//   // c=c+1;//next time this fucntion is run , the value of c will be returned
//    // return a*b;
// }
float moneyRec(int current, float factor=1.08)
{
  return current*factor;
}
int main()
{
  // int a,b;
  // cout<<"Enter the value of a  and b: "<<endl;
  // cin>>a>>b;
  // cout<<"The product of a nd b is "<<product(a,b)<<endl;
  // cout<<"The product of a nd b is "<<product(a,b)<<endl;
  // cout<<"The product of a nd b is "<<product(a,b)<<endl;
  // cout<<"The product of a nd b is "<<product(a,b)<<endl;
  // cout<<"The product of a nd b is "<<product(a,b)<<endl;
  int money=10000;
cout<<"If you have  "<<money<<"   Rs in your bank accunt you will receive "<<moneyRec(money)<<endl;
cout<<"If you are VIP or a bank employee then you will get Rs"<<moneyRec(money,1.1)<<endl;

  return 0;
}
