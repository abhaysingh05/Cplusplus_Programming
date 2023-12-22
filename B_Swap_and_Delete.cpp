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
    int cnt_1 = count(s.begin(), s.end(), '1');
    int cnt_0 = s.size() - cnt_1;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '0')
        {
            cnt_1--;
        }
        else
        {
            cnt_0--;
        }
        if (cnt_0 < 0 || cnt_1 < 0)
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