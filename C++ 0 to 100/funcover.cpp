#include<iostream>
using namespace std;
int sum(int a,int b){
  cout<<"using function witgh 2 arguments"<<endl;
  return a+b;
}
int sum(int a,int b ,int c)
{
  cout<<"Using function with 3 arguments"<<endl;
  return a+b+c;
}
int volume(double r,int h){
  return (3.14*r*r*h);
}
int volume(int a){
  return a*a*a;
}
int volume(int l,int b,int h)
{
  return l*b*h;
}
int main()
{
  cout<<"The sum of 5 and 6 is "<<sum(5,6)<<endl;
  cout<<"The sum of 4 5 and 6 is "<<sum(5,6,4)<<endl;
  cout<<"The volume of cuboid is"<<volume(1,2,3)<<endl;
  cout<<"The volume of the cylinder is "<<volume(15.00,30)<<endl;
  cout<<"The volume of the cube is "<<volume(3)<<endl;
}
