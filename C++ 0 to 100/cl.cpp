#include <iostream>

using namespace std;

class complex

{

int a,b,c;

public:

void getvalue()

{

        cout<<"enter a and b";

        cin>>a>>b;

}



void operator ++()

{

        a=a++;

        b=b++;

}

void operator --()

{

        a=--a;

        b=--b;

}

void display()

{

        cout<<"\n"<< a<<"+"<<b<<"i";

        cout<<endl;

}





};

int main()

{

        complex c1;

        c1.getvalue();

        //c1.operator ++();

        ++c1;

        cout<<"result is";

        c1.display();

        //c1.operator --();

        --c1;

        cout<<"\n updated is\n";

        c1.display();

        return 0;

}
