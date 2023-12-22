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
    stack<int> s1, s2, s3;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)   
            s1.push(i + 1);
        else if (x == 2)
            s2.push(i + 1);
        else
            s3.push(i + 1);
    }
    n = min(min(s1.size(), s2.size()), s3.size());
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s1.top() << ' ' << s2.top() << ' ' << s3.top() << endl;
                s1.pop();          s2.pop();          s3.pop();
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