#include<iostream>
using namespace std;
int evenodd(int a)
{

    if(a%2==0)
    {

        return 1;
    }
    else
    {

        return 0;
    }

}

int main()
{
    int b;
 cout<<"Welcome to even odd checker "<<endl;
 cin>>b;
 if(evenodd(b))
    cout<<"Its a even number"<<endl;
    else
        cout<<"Its a odd number"<<endl;



    return 0;
}
