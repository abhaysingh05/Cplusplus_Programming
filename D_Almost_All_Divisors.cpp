#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e6 + 10;
void Solution()
{
    int n;
    cin >> n;
    vector<ll> v;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int mx;
    int mn;
    mx = *max_element(v.begin(), v.end());
    mn = *min_element(v.begin(), v.end());
    ll ans = mx * 1LL * mn;
    for (int i = 0; i < n; i++)
    {
        if (ans % v[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < ((i % 2) ? ((n / 2) + 1) : n / 2); i++)
    {
        if ((v[i] * 1LL * v[n - i - 1]) != ans)
        {
            cout << -1 << endl;
            return;
        }
    }
    ll cnt = 0;
    for (ll i = 2; i * i <= ans; i++)
    {
        if ((ans % i) == 0)
        {
            if ((ans / i) != i)
            {
                cnt += 2;
            }
            else
            {
                cnt++;
            }
        }
    }
    if (cnt != v.size())
    {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    size_t t;
    cin >> t;
    while (t--)
    {
        Solution();
    }
    return 0;
}