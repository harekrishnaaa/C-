#include <bits/stdc++.h>
using namespace std;

void upd(long long id, long long v, long long bit[])
{
    while (id <= 100000)
    {
        bit[id] += v;
        id += id & (-id);
    }
}

long long go(long long id, long long bit[])
{
    long long re = 0;
    while (id)
    {
        re += bit[id];
        id -= id & (-id);
    }
    return re;
}

void popBalloons(long long a[], long long bit[],vector<pair<long long, long long>> v[], long long n)
{
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, less<pair<long long, long long>>> pq;
    long long f = 1, re = 0;
    long long i, j, k, m, t;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < v[i].size(); j++)
        {
            pq.push(v[i][j]);
        }
        a[i] -= go(i, bit);
        while (a[i] > 0)
        {
            if (pq.empty())
            {
                f = 0;
                break;
            }
            pair<long long, long long> now = pq.top();
            pq.pop();
            if (now.first < i)
                continue;
            long long mi = min(a[i], now.second);
            re += mi;
            a[i] -= mi, now.second -= mi;
            upd(i, mi, bit);
            upd(now.first + 1, -mi, bit);
            if (now.second > 0)
            {
                pq.push(now);
            }
        }
        if (a[i] > 0)
        {
            f = 0;
            break;
        }
    }
    if (f)
    {
        cout << "YES " << re << "\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // your code goes here
    long long i, j, k, n, m, t;
    cin >> t;
    while (t--)
    {
        long long bit[100005], a[100005];
        memset(bit, 0, sizeof(bit));
        cin >> n >> m;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<pair<long long, long long>> v[n + 1];
        for (i = 0; i < m; i++)
        {
            long long l, r;
            cin >> l >> r >> k;
            v[l].push_back({r, k});
        }
        popBalloons(a, bit, v, n);
    }

    return 0;
}

