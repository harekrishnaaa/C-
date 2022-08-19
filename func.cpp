#include<bits/stdc++.h>
using namespace std;
int palin(int a)
{
	int p=0;
	while(a>0)
	{
		p=(p*10)+a%10;
		a=a/10;
		
	}
	return p;
}
int pcheck(int a){
	int pp=palin(a);
	if(pp==a)
	{
		return 1;

	}
	else{
		return 0;
	}
}
int main()
{
	int cs;
	cout<<"Please enter ' 1 ' to check if the number is palindrome or not or enter '2' to reverse the number"<<endl;
	cin>>cs;
	switch(cs)
	{
		case 1:
			int a1;
			cout<<"Please enter the number you want to check if it is palindrome or not"<<endl;
			cin>>a1;
			if(pcheck(a1))
			cout<<"Its a palindrome number"<<endl;
			else
			cout<<"Its not a palindrome number"<<endl;
			break;
	    case 2:
		int a2;
		cout<<"Please enter the number you want to reverse"<<endl;
		cin>>a2;
		cout<<"The reverse of the number is "<<palin(a2)<<endl;        		
	}
	
}


