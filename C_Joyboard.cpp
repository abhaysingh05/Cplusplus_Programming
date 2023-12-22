#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

void Solution()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (k == 1)
        cout << 1 << endl;
    else if (k == 2)
        cout << min(m, (n - 1)) + m / n << endl;
    else if (k == 3)
        cout << max(0, (m - n) - (m / n) + 1) << endl;
    else
        cout << 0 << endl;
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