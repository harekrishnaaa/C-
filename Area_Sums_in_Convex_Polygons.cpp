#include <bits/stdc++.h>

using namespace std;
template <typename T1, typename T2>
std::istream &operator>>(std::istream &is, std::pair<T1, T2> &m) {
    is >> m.first >> m.second;
    return is;
}
typedef long long int ll;
typedef __int128 el;
typedef pair<el, el> pel;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> plll;
typedef pair<int, int> pii;
typedef vector<vector<ll>> matrix;
vector<el> pre_area;

vector<el> pre_sum_area;
vector<pel> pre_arr;
vector<pll> arr;

el area(int a, int b) {

    el ans = pre_area[b - 1] - (a ? pre_area[a - 1] : 0);
    ans += (arr[b].first * arr[a].second - arr[a].first * arr[b].second);
    return abs(ans);
}

el sum_area(int a, int b) {

    if (b - a < 2)
        return 0;

    el ans = pre_sum_area[b - 1] - (a ? pre_sum_area[a - 1] : 0) -

             (b - a) * (a ? pre_area[a - 1] : 0);

    ans = ans + arr[a].second * (pre_arr[b].first - pre_arr[a].first);

    ans = ans - arr[a].first * (pre_arr[b].second - pre_arr[a].second);

    return abs(ans);
}

int main() {
    std::ios::sync_with_stdio(false), cin.tie(__null), cout.tie(__null);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        arr.resize(2 * n);
        pre_arr.resize(2 * n);
        pre_area.resize(2 * n);
        pre_sum_area.resize(2 * n);

        for (ll i = 0; i < ll(n); i++)
            cin >> arr[i];
        for (ll i = 0; i < ll(n); i++)
            arr[i + n] = arr[i];

        for (ll i = 0; i < ll(2 * n - 1); i++) {
            pre_area[i] = arr[i].first * arr[i + 1].second -
                          arr[i + 1].first * arr[i].second;
        }

        for (ll i = 1; i <= ll(2 * n - 1); i++) {
            pre_area[i] += pre_area[i - 1];
        }

        pre_sum_area[0] = pre_area[0];
        for (ll i = 1; i <= ll(2 * n - 1); i++) {
            pre_sum_area[i] = (pre_sum_area[i - 1] + pre_area[i]);
            // if ((pre_sum_area[i - 1] < 0) ^ (pre_area[i] > 0) &&
            // (pre_sum_area[i] > 0) != (pre_sum_area[i - 1] > 0))
            // exit(2);
        }

        pre_arr[0] = arr[0];
        for (ll i = 1; i <= ll(2 * n - 1); i++) {

            pre_arr[i].first = (pre_arr[i - 1].first + arr[i].first);
            pre_arr[i].second = (pre_arr[i - 1].second + arr[i].second);
        }

        el total_area = area(0, n - 1), ans = 0;

        ll half_cnt = 0;
        for (ll i = 0; i < ll(n); i++) {
            ll l = i + 2, r = i + n - 1, m, e = -1;

            while (l <= r) {
                m = (l + r) / 2;
                if (area(i, m) * 2 <= total_area) {
                    e = m;
                    l = m + 1;
                } else
                    r = m - 1;
            }
            if (e == -1)
                continue;

            ans += sum_area(i, e);

            if (area(i, e) * 2 == total_area)
                half_cnt++;
        }

        ans = (ans - (total_area / 2) * (half_cnt / 2));
        cout << ll((ans) % 998244353ll) << '\n';
    }

    return 0;
}
