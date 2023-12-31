#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long ll;
#define nline '\n'
#define rep(i, l, r) for (ll i = l; i < (ll)(r); i++)
#define rrep(i, r, l) for (ll i = r; i > (ll)(l); i--)
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
// find_by_order, order_of_key
template <typename T>
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, std::less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
template <typename Key, typename Value>
using ordered_map = __gnu_pbds::tree<Key, Value, std::less<Key>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
using namespace std;

// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> A(n + 1), F(n + 1), copyA;
    rep(i, 1, n + 1) cin >> A[i];
    rep(i, 1, n + 1) cin >> F[i];
    copyA = A;
    sort(A.begin() + 1, A.end(), greater<ll>());
    sort(F.begin() + 1, F.end(), greater<ll>());
    sort(copyA.begin() + 1, copyA.end());
    ll copyk = k;
    rep(i, 1, n + 1)
    {
        if (k > A[i])
        {
            k -= A[i];
            A[i] = 0;
            // cout << "debug k : " << k << endl;
        }
        else
        {
            A[i] -= k;
            k = 0;
            break;
        }
    }
    rep(i, 1, n + 1)
    {
        if (copyk > copyA[i])
        {
            copyk -= copyA[i];
            copyA[i] = 0;
            // cout << "debug k : " << k << endl;
        }
        else
        {
            copyA[i] -= copyk;
            copyk = 0;
            break;
        }
    }
    for (auto &e : A)
        cout << e << ' ';
    cout << endl;
    sort(A.begin() + 1, A.end());
    sort(copyA.begin() + 1, copyA.end());
    ll mx = -1;
    ll copymx = -1;
    rep(i, 1, n + 1)
    {
        mx = max(mx, A[i] * F[i]);
        copymx = max(copymx, copyA[i] * F[i]);
    }
    cout << mx << copymx << nline;
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