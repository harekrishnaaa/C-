#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;



int sol(
{
    ll aa, bb, cc;
    ll number;
    cin >> aa >> bb >> cc;

    ll x = __gcd(bb, cc);
    if (x == cc)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        number = (aa / bb) + 1;

        if ((number * bb) % cc == 0)
        {
            number++;

        }
    }
    cout << number * bb << endl;
}

int main()
{

    int tst=1;
    cin >> tst;
    while (tst--)
    {
        sol();
    }

    return 0;
}

