#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
    cout<<"---------Welcome to the star pattern program --------"<<endl;
    cout<<"Number of times you want to print the star: "<<endl;
    cin>>a;
    for(int i=a;i>=1;i--)
    {
    	for(int j=i;j>0;j--)
    	{
    cout<<"*";	
	}
	cout<<""<<endl;
}
    return 0;
}
