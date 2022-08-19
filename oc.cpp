#include<bits/stdc++.h>
using namespace std;

 int main()
{
	int a;
	int count=0;;
cout<<"Enter a number to check whether its prime or not: "<<endl;
cin>>a;
for(int i=2;i<a;i++){
	if(a%i==0){
		count++;
	}
}
if(count==2)
cout<<"Its a prime number"<<endl;
else
cout<<"Its not a prime number"<<endl;
	
}




