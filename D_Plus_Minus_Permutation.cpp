#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;
void Solution()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll cut = n / ((x * y) / __gcd(x, y));
    ll c1 = n / x - cut;
    ll c2 = n / y - cut;
    cout << (c1 * n + c1 - ((c1 * (c1 + 1)) / 2)) - ((c2 * (c2 + 1)) / 2) << endl;
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