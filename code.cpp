#include <bits/stdc++.h>

using namespace std;



  
int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
       int x, m, d;
    cin >> x >> m >> d;
    if (m * x < x + d)
    {
        cout << m * x << endl;
    }
    else
        cout << x + d << endl;
    }

    return 0;
}
