#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
int r,o,c;
cin>>r>>o>>c;
int re=20-o;
int re1=re*6;
int re2=re1*6;
if(re2+c>r)
{
	cout<<"YES"<<endl;
}
else
{
	cout<<"NO"<<endl;
}
	return 0;
}
