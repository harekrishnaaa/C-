#include<iostream>//standard input output stream
using namespace std;
int main()//main fucntion
{
int n,c,first=0,second=1,next;//initializing variables

int a[20],i,j=0,count=0;//initializing variables
cout<<"Name-Subham Ghosh\n"<<"UID-21BCS4993"<<endl;//Details
cout<<"Enter the no. of terms of Fibonacci series=";//asking input from userBCS

cin>>n;//taking input from user

cout<<"Terms of Fibonacci series are "<<endl;//asking the terms of fibonacci series

for(c=0;c<n;c++)//running for loop in order to print the fibonacci series

{

if(c<=1)//checking the condition

next=c;//assigning the variable of c

else

{

next=first+second;//assigning the variable of first and second

first=second;//assigning the variable of second in first

second=next;//assigning the variable of next in second

}

cout<<next<<endl;//taking input from user

if(next-first>1)//checking the condition

{

for(i=first+1; i<next; i++)//running for loop

{

a[j]=i;//assigning the value of i in the array

count++;//counting

j++;//counting

}

}

}

cout<<"Missing numbers of the Fibonacci series are:"<<endl;//printing

for(j=0; j<count; j++)//running for loop

cout<<a[j]<<endl;//printing the missing numbers in fibonacci series.

return 0;

}