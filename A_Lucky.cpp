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
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < 3; i++)
    {
        a += s.at(i) - '0';
    }
    for (int i = 3; i < 6; i++)
    {
        b += s.at(i) - '0';
    }
    if (a == b)
        cout << "YES\n";
    else
        cout << "NO\n";
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