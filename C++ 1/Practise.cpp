#include<bits/stdc++.h>
using namespace std;
int main()
{
vector <int> vec1;
vector <int > vec2;
vector <int > vec3;
	int a,b;
cout<<"Enter two numbers/: "<<endl;
cin>>a>>b;
for(int i=a;i<=200;i=i+a)
{
vec1.push_back(i);
	}
for(int j=b;j<=200;j=j+b)
{
	vec2.push_back(j);
}
for(int aa=0;aa<=20;aa++)
{
	for(int cc=0;cc<=20;cc++)
	{
		if(vec1[aa]==vec2[cc])
	{
	vec3.push_back(vec1[aa]);
	break;
	}
	}

}
cout<<vec3[0]<<endl;
return 0;
}
