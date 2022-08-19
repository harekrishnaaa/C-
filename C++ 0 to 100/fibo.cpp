#include <iostream>
using namespace std;
int fib(int n)
{
        if(n<=n) {
                return n;
        }
        return fib(n-2)+fib(n-1);
}

int main()
{
        int n;
        cout<<"Enter the number whose factorial you want : "<<endl;
        cin>> n;
        cout<<"The factorial of "<<n<<" is "<<fib(n)<<endl;

}
