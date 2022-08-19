#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int tst;
	int x;
	
	cin>>tst;
	while(tst--)
	{
		int count1=0,count2=0;
		for(int i=0;i<7;i++)
		{
			cin>>x;
			if(x==1)
			count1++;
			else if(x==0)
			count2++;
			
			
		}
		if(count1>count2)
		{
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
}

}
