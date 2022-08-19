#include<iostream>
using namespace std;
int palindrome(int n)
{
    int b;
    int c=0;
    b=n;
    while(n>0)
    {
    c=(c*10)+n%10;
    n=n/10;
    }
    if(n==b)
    {

        return 1;

    }
    else{
        return 0;
    }


    }
    int main()
    {

        int a;
        cout<<"Please enter a number to check if it is palindrome or not "<<endl;
        cin>>a;
        if(palindrome(a))
            cout<<"Its a palindrome number"<<endl;
        else
            cout<<"Its not a palindrome number"<<endl;
return 0;
    }



