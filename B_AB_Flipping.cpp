#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int first_a = -1;
    int last_b = -1;
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) == 'A')
        {
            first_a = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.at(i) == 'B')
        {
            last_b = i;
            break;
        }
    }
    if (first_a == -1 || last_b == -1)
    {
        cout << 0 << endl;
        return;
    }
    cout << max(0, last_b - first_a) << endl;
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