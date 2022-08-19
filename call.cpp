#include<bits/stdc++.h>
using namespace std;
int swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
	
}
int main()
{
	int c,d;
	int tst;
	cin>>tst;
	while(tst--)
	{
	
		cin>>c>>d;

	swap(&c,&d);
	cout<<c<<" "<<d<<endl;
}
return 0;
	
}
