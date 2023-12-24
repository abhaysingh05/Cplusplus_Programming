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
    int n, c;
    cin >> n;
    vector<int> Elements(n), Count(n);
    rep(i, 0, n) cin >> Elements[i];
    ll sum = accumulate(all(Elements), 0LL);
    rep(i, 0, n)
    {
        if (Elements[i] & 1)
        {
            c = 0;
            while (Elements[i] & 1)
            {
                c++;
                Elements[i] >>= 1;
            }
            Count[i] = c;
        }
        else
        {
            c = 0;
            while (!(Elements[i] & 1))
            {
                c++;
                Elements[i] >>= 1;
            }
            Count[i] = c;
        }
    }
    cout << ((sum & 1) ? *min_element(all(Count)) : 0) << endl;
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