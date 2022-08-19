#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int a,int b);
int fact1(int a,int b);
int main()
{
	int a,b;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	cout<<"The largest common divisor are"<<" "<<fact1(a,b)<<endl;
}
int fact(int a,int b){
vector<int> ve;
	int m=max(a,b);
	for(int i=1;i<=m;i++){
		if(a%i==0 && b%i==0){
		ve.push_back(i);
		
		}
	}
		sort(ve.begin(),ve.end());
		int mm=ve.size();
		return ve[mm-1];
		}
int fact1(int a,int b)
{
	int m=max(a,b);
	while(m>0){
		if(a%m==0 && b%m==0)
		{
			return m;
		}
	m--;
	}
}

