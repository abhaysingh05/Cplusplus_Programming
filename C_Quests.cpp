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
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    vector<int> B(n);
    ll ans = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    ll sum = 0;
    ll sum2 = 0;
    int mx = B[0];
    for (int i = 0; i < n; i++)
    {
        if (k >= i + 1)
        {
            sum += A[i];
            sum2 = sum;
            mx = max(B[i], mx);
            sum2 += (k - (i + 1)) * mx;
        }
        ans = max(sum2, ans);
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