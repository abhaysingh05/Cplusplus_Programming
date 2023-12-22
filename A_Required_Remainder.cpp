#include <bits/stdc++.h>
#define endl '\n'
#define n n
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
#define ll long long
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int x, y, n;
    cin >> x >> y >> n;
    int ans = (n - (n % x)) + y;
    if (ans > n)
        ans -= (abs((int)ceil((ans - n) / (float)x)) * x);
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