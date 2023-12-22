#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
ll A[N];
ll n, c;
inline bool isSatisfy(ll x)
{
    ll last = -1;
    ll cows = c;
    for (int i = 1; i <= n; i++)
    {
        if (last == -1 || (A[i] - last) >= x)
        {
            cows--;
            last = A[i];
        }
        if (cows == 0)
        {
            break;
        }
    }
    return cows == 0;
}
void Solution()
{
    cin >> n >> c;
    for (size_t i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    sort(A + 1, A + n + 1);
    ll l = 0, r = 1e9 + 10, mid;
    // T T T T F F F F
    while (r - l > 1)
    {
        mid = (l + r) / 2;
        if (isSatisfy(mid))
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (isSatisfy(r))
    {
        cout << r << endl;
    }
    else
    {
        cout << l << endl;
    }
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