#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long ll;
#define endl '\n'
#define rep(i, l, r) for (ll i = l; i < (ll)(r); i++)
#define rrep(i, r, l) for (ll i = r; i > (ll)(l); i--)
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
// find_by_order, order_of_key
template <typename T>
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, std::less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
template <typename Key, typename Value>
using ordered_map = __gnu_pbds::tree<Key, Value, std::less<Key>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
#define ff first
#define ss second
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if (a1 == 0 && (a2 != 0 || a3 != 0 || a4 != 0))
    {
        cout << 1 << endl;
        return;
    }
    if (a1 == 0 && a2 == 0 && a3 == 0 && a4 == 0)
    {
        cout << 0 << endl;
        return;
    }
    int ans = a1;
    int l1 = a1 + 1, l2 = a1 + 1;
    int k = min(a2, a3);
    ans += 2 * k;
    a2 -= k;
    a3 -= k;
    if (a2 != 0)
    {
        k = min(a2, l2);
        ans += k;
        l2 -= k;
        l1 += k;
    }
    if (a3 != 0)
    {
        k = min(a3, l1);
        ans += k;
        l1 -= k;
        l2 += k;
    }
    ans += min(min(l1, l2), a4);
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