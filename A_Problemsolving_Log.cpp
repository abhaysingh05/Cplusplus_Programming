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
    int n;
    string s;
    cin >> n >> s;
    vector<int> v(26, 0);
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        v[s.at(i) - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] >= i + 1)
        {
            ans++;
        }
    }

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