#include <bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast,no-stack-protector,fast-math",3)
#define all(x) x.begin(),x.end()
#define ll long long
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int x, ans = 0, val;
    cin >> x;
    val = x;
    for (int i = 1; i < 4; i++)
    {
        cin >> x;
        if (x > val) ans++;
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    size_t t;
    cin >> t;
    while(t--)
    {
        Solution();
    }
    return 0;
}