#include<bits/stdc++.h>
using namespace std;
class binary{
  string s;
  void binch(void);

public:
  void binget(void);
  void ones(void);
  void display(void);
};
void binary::binget(void){
  cout<<"Enter a binary number"<<endl;
  cin>>s;
}
void binary::binch(void){
  int count=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='0' || s[i]=='1')
    {
    count=count+1;
    }
  }
  if(s.length()==count)
  {
    cout<<"A binary number"<<endl;
  }
  else{
  cout<<"Not a binary number"<<endl;
exit(0);
}
}
void binary:: ones(void)
{
  binch();
  cout<<"Now changing 1 to 0 and 0 to 1 "<<endl;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='0')
    {
      s[i]='1';
    }
    else
    {
      s[i]='0';
    }
  }
}
void binary::display(void){
    for(int i=0;i<s.length();i++)
    {
      cout<<s[i];

    }
    cout<<endl;
}
int main()
{
  // c++---> Initially with class by djourne stroustroupe
  //classe is an extension of structure
  //structures had limitations---->members are public
  //      --->no methods
  // classes = structures + more
  // classes can have methods and properties
  // classes can make few members as public or few as private
  // structure in c++ are typedefed
  // you can declare object right after class declaration
binary b;
b.binget();
// b.binch();

b.ones();

b.display();
return 0;
}
