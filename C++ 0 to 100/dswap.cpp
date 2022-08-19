#include<iostream>
using namespace std;
void swap(int* a,int* b)//call by reference using pointers
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void swapref(int &a,int &b)//call by c++ reference variables
{
  int tem=a;
  a=b;
  b=tem;
}
int main()
{
  int x=2,y=3;
  cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
  swapref(x,y);
  cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
  return 0;
}
