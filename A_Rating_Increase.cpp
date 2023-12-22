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
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s.at(i) != '0')
        {
            string s1;
            s1 = s.substr(0, i);
            string s2;
            s2 = s.substr(i, s.size());
            if (stoi(s1) < stoi(s2))
            {
                cout << s1 << ' ' << s2 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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