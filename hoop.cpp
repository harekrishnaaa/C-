#include<iostream>
using namespace std;
int solve(int no){
	int num=no*10;
for(int i=0;i<num;i++)
{
	if(i%3==0 && i%9!=0)
	{
		cout<<i<<endl;
		return i;
	}
	
}
}
int main()
{
	int tst;
	int no;
	cin>>tst;
	while(tst--)
	{
	cout<<solve(no)<<endl;
}
return 0;

}
