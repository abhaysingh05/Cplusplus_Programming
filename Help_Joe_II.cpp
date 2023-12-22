#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> v;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x % m);
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        cin >> x;
        int l = 0;
        int r = n - 1;
        int mid;
        while (r - l > 1)
        {
            mid = (l + r) >> 1;
            if ((v[mid] + x % m) < m)
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        ll ans = max((v[l] + x % m) % m, (v[r] + x % m) % m);
        ans = max(ans, (v[n - 1] + x % m) % m);
        cout << ans << endl;
    }
    return 0;
}