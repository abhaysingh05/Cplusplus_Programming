#include <bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
typedef long long ll;
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    int k, t;
    ll ans = -1;
    for (int l = n; l >= 0; l--)
    {
        vector<ll> v;
        t = l;
        for (int i = 1; i <= t; i++)
        {
            v.push_back(1LL * i * i);
        }
        k = t;
        for (int i = n; i > t; i--)
        {
            v.push_back(1LL * (++k) * i);
        }
        ll val = accumulate(all(v), 0LL);
        ll mx = *max_element(all(v));
        ans = max(val - mx, ans);
    }

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        Solution();
    }
    return 0;
}