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
    int n;
    cin >> n;
    cout << (((n / 2) & 1) ? "NO\n" : "YES\n");
    if (!((n / 2) & 1))
    {
        for (int i = 1; i <= n / 2; i++)
        {
            cout << 2 * i << ' ';
        }
        for (int i = 1; i < n / 2; i++)
        {
            cout << 2 * i - 1 << ' ';
        }
        cout << n + (n / 2 - 1) << endl;
    }
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