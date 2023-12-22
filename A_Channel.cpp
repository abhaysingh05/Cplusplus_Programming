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
    int n, a, q;
    string s;
    cin >> n >> a >> q >> s;
    int plus1 = a, plus2 = a;
    int flag = 0;
    for (int i = 0; i <= s.size(); i++)
    {
        if (plus1 == n)
        {
            cout << "YES\n";
            return;
        }
        else if (plus2 == n)
            flag = 1;
        if (i == s.size())
            break;
        if (s.at(i) == '+')
        {
            plus1++;
            plus2++;
        }
        else
            plus1--;
    }
    if (flag == 0)
        cout << "NO\n";
    else
        cout << "MAYBE\n";
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