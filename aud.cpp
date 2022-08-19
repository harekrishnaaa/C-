#include<iostream>
using namespace std;
int main(){
	int a,b;
	int arr[a];
	cout<<"Enter the size of the array: "<<endl;
	cin>>a;
	cout<<"Enter target number: "<<endl;
	cin>>b;
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	if((arr[i]+arr[i+1])==b)
	{
		cout<<i<<" "<<i+1<<endl;
	}
	
	
}
