#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int a, b;
    cin >> a >> b;
    int ans = abs(a - b);
    cout << ans / 10 + ((ans % 10) ? 1 : 0) << endl;
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