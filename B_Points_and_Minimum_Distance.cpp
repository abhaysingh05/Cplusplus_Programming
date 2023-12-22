#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

void Solution()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (size_t i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), [](int a, int b)
         { return a > b; });
    vector<ll> x_cor, y_cor;
    for (size_t i = 0; i < n; i++)
    {
        x_cor.push_back(v[i]);
        y_cor.push_back(v[i + n]);
    }
    ll ans = 0;
    for (size_t i = 0; i < n - 1; i++)
    {
        ans += x_cor[i] - x_cor[i + 1];
        ans += y_cor[i] - y_cor[i + 1];
    }
    cout << ans << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << x_cor[i] << ' ' << y_cor[i] << endl;
    }
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