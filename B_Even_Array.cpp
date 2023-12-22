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
    vector<int> v(n);
    int odd_cnt = 0;
    int wrng_pos = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] & 1)
            odd_cnt++;
        if (((v[i] & 1) != (i & 1)))
            wrng_pos++;
    }
    if (odd_cnt != (n / 2))
    {
        cout << -1 << endl;
        return;
    }
    cout << wrng_pos / 2 << endl;
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