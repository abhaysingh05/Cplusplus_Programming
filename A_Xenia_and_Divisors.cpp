#include <bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
typedef long long ll;
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> count(8, 0);
    vector<vector<int>> vec;
    vec = {{1, 2, 4}, {1, 2, 6}, {1, 3, 6}};
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        count[v[i]]++;
    }
    bool flag = false;
    if (count[1] == n / 3)
    {
        if (count[6] - count[3] >= 0)
        {
            if (count[6] - count[3] + count[4] == count[2])
            {
                flag = true;
            }
        }
    }
    if (!flag || count[5] || count[7])
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < count[3]; i++)
    {
        for (auto e : vec[2])
            cout << e << ' ';
        cout << endl;
    }
    for (int i = 0; i < count[6] - count[3]; i++)
    {
        for (auto e : vec[1])
            cout << e << ' ';
        cout << endl;
    }
    for (int i = 0; i < count[2] - count[6] + count[3]; i++)
    {
        for (auto e : vec[0])
            cout << e << ' ';
        cout << endl;
    }
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