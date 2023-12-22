#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

void Solution()
{
    int m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;
    int c1, ck, ans;
    c1 = m % k;
    if (a1 >= c1)
    {
        a1 -= c1;
        c1 = 0;
    }
    else
    {
        c1 -= a1;
        a1 = 0;
    }
    if (a1 >= k)
    {
        ak += a1 / k;
        a1 = a1 % k;
    }
    ck = (m - (m % k)) / k;
    ans = max(0, ck - ak) + max(0, c1 - a1);
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