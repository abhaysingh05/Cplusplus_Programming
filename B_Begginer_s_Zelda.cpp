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
    int hsh[2 * (n - 1) + 10] = {0};
    for (int i = 0; i < 2 * (n - 1); i++)
    {
        int x;
        cin >> x;
        hsh[x]++;
    }
    int cnt = count(hsh, hsh + 2 * n + 10, 1);
    int ans;
    if (cnt % 2)
    {
        ans = cnt / 2 + 1;
    }
    else
    {
        ans = cnt / 2;
    }
    cout << ans << endl;
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