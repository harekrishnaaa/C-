#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int tst;
 	int x;
 	long long count=0;
 	long long a,b,c,d,e;
 	cin>>tst;
 	while(tst--)
 	
 	{
 		cin>>a;
 		count=0;
 		for(long long i=0;i<=a;i++)
 		{
 			if(i%2!=0)
 			continue;
		 
		 else
		 count++;
}
 	cout<<count<<endl;
	 }
 }
