#include<iostream>
using namespace std;
int main()
{
	int len,tar;
	int no[100];
	cin>>len>>tar;
	for(int i=0;i<len;i++)
{
	cin>>no[i];
	if(no[i]+no[i+1]==tar)
	{
		cout<<"["<<no[i]<<","<<no[i+1]<<"]"<<endl;
	}
}

return 0;
}

