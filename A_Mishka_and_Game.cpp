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
    int m_cnt = 0, c_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
        {
            m_cnt++;
        }
        else if (c > m)
        {
            c_cnt++;
        }
    }
    if (m_cnt > c_cnt)
    {
        cout << "Mishka" << endl;
    }
    else if (c_cnt > m_cnt)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
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