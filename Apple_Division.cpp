#include <bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
#define ll long long
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> sum;
    ll kl = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        kl++;
    }
    ll s = 0;
    for (ll i = 1; i < (1 << n); i++)
    {
        ll k = i;
        for (ll j = 0; j < n; j++)
        {
            if (k & 1)
                s += v[j];
            k >>= 1;
            kl++;
        }
        sum.push_back(s);
        s = 0;
    }
    ll arrs = accumulate(all(v), 0LL);
    ll ans = abs(sum[0] - (arrs - sum[0]));
    for (ll i = 1; i < (ll)sum.size() / 2 + 1; i++)
    {
        ans = min(ans, abs(sum[i] - (arrs - sum[i])));
        kl++;
    }
    cout << ans << endl;
    cout << kl << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Solution();
    }
    return 0;
}