#include <iostream>// standard input-output stream

#include <math.h>//include math library
using namespace std;
int main()

{

int n, first, last, sum, digits, nn, a, b;//initializing variables
cout<<"Name-Subham Ghosh\n"<<"UID-21BCS4993"<<endl;//Details

   cout <<"\n\n Find the number after swapping the first and last digits:\n"; //asking input from user

   cout <<"-------------------------------------------------------------\n";

   cout <<" Input any number: "; //asking input from user
   cin >> n;//taking input
   digits =(int)log10(n);//getting the digits of the number
   first = n /pow(10, digits);//getting the first digit
   last = n %10;//getting the last digit 

   a = first *(pow(10, digits));

   b = n % a;//getting the last digit

   n = b /10;//reducing the size of the  number

   nn = last *(pow(10, digits))+(n *10+ first);//calculating the number inorder to get the swapped number

   cout <<" The number after swaping the first and last digits are: "<< nn << endl;//printing the number after swapping

}
