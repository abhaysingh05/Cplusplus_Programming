#include <bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
#define ll long long
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int n, k;
    cin >> n >> k;
    k = k - 1;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int str = v[k];
    for (int i = k + 1; i < n; i++)
    {
        if (v[i] != v[k])
        {
            cout << -1 << endl;
            return;
        }
    }
    if (k == 0)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = k - 1; i >= 0; i--)
    {
        if (v.at(i) != v[k])
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Solution();
    }
    return 0;
}
