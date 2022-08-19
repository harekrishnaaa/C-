#include <iostream>//standard input output stream
#include <math.h>//using math library
using namespace std;

int main()//main function
{
    int n, first, last, sum, digits, nn, a, b;//initalizing variable

        cout<<"Name-Subham Ghosh\n"<<"UID-21BCS4993"<<endl;//Details

    cout << "\n\n Find the number after swapping the first and last digits:\n";//asking input from user

    cout << "-------------------------------------------------------------\n";

    cout << " Input any number: ";//asking input from user

    cin >> n;//taking input form user
    
    digits = (int)log10(n);//getting the digits of the number

    first = n / pow(10, digits);//getting the first digit of the number
    
    last = n % 10;//getting the last digit of the number

    a = first * (pow(10, digits));//mathematical operation

    b = n % a;//mathematical operation

    n = b / 10;//decreasing the size of the number

    nn = last * (pow(10, digits)) + (n * 10 + first);//calculation to find out the swapped number

    cout << " The number after swaping the first and last digits are: " << nn << endl;//printing the swapped number
}  