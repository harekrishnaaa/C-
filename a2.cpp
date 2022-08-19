#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tst;
	int a,b,c;
	int d,e,f;
	cin>>tst;
	while(tst--)
	{
	cin>>a>>b>>c;
	cin>>d>>e>>f;
	int marks1=a+b+c;//drag
	int marks2=d+e+f;//sloth
	if(marks1>marks2){
		cout<<"DRAGON"<<endl;
	}
	if(marks1<marks2){
		cout<<"SLOTH"<<endl;
	}
	else if(marks1==marks2)
	{
		if(a>d)
		{
			cout<<"DRAGON"<<endl;
		}
		if(a<d)
		{
			cout<<"SLOTH"<<endl;
		}
		if(a==d)
		{
		    if(b>e)
			{
				cout<<"DRAGON"<<endl;
			}
			if(b<e)
			{
				cout<<"SLOTH"<<endl;
			}
			else
			{
				cout<<"TIE"<<endl;
			}
		}
		}	
	}
	return 0;
}
