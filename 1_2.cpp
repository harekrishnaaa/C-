#include <iostream>

#include <math.h>

using namespace std;

int main()

{

int n, first, last, sum, digits, nn, a, b;//initializing variables

   cout <<"\n\n Find the number after swapping the first and last digits:\n"; //asking input from user

   cout <<"-------------------------------------------------------------\n";

   cout <<" Input any number: "; //asking input from user

   cin >> n;//taking input

   digits =(int)log10(n);//

   first = n /pow(10, digits);//getting the first digit

   last = n %10;//getting the last

   a = first *(pow(10, digits));

   b = n % a;

   n = b /10;

   nn = last *(pow(10, digits))+(n *10+ first);

   cout <<" The number after swaping the first and last digits are: "<< nn << endl;

}