#include<iostream>//standard input output stream

using namespace std;

int my_variable = 10; // Global x

int main()//main function

{

 int my_variable = 100; // Local x
cout<<"Name-Subham Ghosh\nUID-21BCS4993"<<endl;
 cout << "Value of global my_variable is " << ::my_variable<<endl;//printing global my_variable

 cout << "Value of local my_variable is " << my_variable<<endl;//printing local my_variable

 return 0;

}