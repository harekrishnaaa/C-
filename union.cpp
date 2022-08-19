
#include<bits/stdc++.h>
using namespace std;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
        union money m1;
        m1.rice = 34;
        m1.car='K';
        cout<<m1.rice;
        return 0;
}
