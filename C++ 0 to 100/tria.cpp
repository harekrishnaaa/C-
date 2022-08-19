#include<iostream>
using namespace std;
class Triangle{
private:
  int b;
  int h;
  int ar;
public:
  void setData(int bb,int hh);
  void area();
  void getData();
  void askinput();
  };
void Triangle::getData(){
        cout<<"The area of the triangle is "<<ar<<endl;
}
void Triangle:: setData(int bb,int hh){
  b=bb;
  h=hh;
}
void Triangle:: area(){
  ar=(0.5)*b*h;
}
void Triangle::askinput(){
  cout<<"Please enter the base and height of the triangle: "<<endl;
  cin>>b>>h;
}
int main()
{
  Triangle t;
  t.setData(20,30);
  t.area();
  t.getData();
}
