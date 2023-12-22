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
    cin >> n;
    string s;
    cin >> s;
    char x = '.';
    vector<int> v(26, 0);
    for (int i = 0; i < n; i++)
    {
        if (x != s.at(i))
        {
            v[(int)(s.at(i) - 'A')]++;
        }
        x = s.at(i);
    }
    for (int i = 0; i < 26; i++)
    {
        if (v.at(i) > 1)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
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