#include <iostream>

using namespace std;

class complex

{

private:

float real;

float imag;

public:



void input()

{

        cout<<"\n enter real and imag part";

        cin>>real>>imag;

}

complex operator - (complex c2)

{

        complex temp;

        temp.real=real-c2.real;

        temp.imag= imag-c2.imag;

        return temp;



}



void output()

{

        if(imag<0)

                cout<<"\n complex no is"<<real<<imag<<"i";

        else

                cout<<"\n output complex no is"<<real<<"+"<<imag<<"i";

}

};



int main()

{



        complex c1,c2,result;

        cout<<"\n enter first complex no";

        c1.input();



        cout<<"\n enter second complex no";

        c2.input();



        result=c1-c2;



        result.output();

        return 0;

}
