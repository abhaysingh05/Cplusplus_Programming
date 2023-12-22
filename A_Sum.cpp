#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    vector<int> v;
    int x;
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if (v[0] + v[1] == v[2])
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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