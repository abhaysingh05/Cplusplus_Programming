#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long ll;
#define nline '\n';
#define rep(i, l, r) for (ll i = l; i < (ll)(r); i++)
#define rrep(i, r, l) for (ll i = r; i > (ll)(l); i--)
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
#define ss second
#define ff first
// find_by_order, order_of_key
template <typename T>
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, std::less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
template <typename Key, typename Value>
using ordered_map = __gnu_pbds::tree<Key, Value, std::less<Key>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
using namespace std;

// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

struct newt
{
    int a;
    int b;
    int l;
};
void Solution()
{
    int n;
    cin >> n;
    vector<newt> v(n);
    rep(i, 0, n)
    {
        cin >> v[i].a >> v[i].b;
        v[i].l = i + 1;
    }
    sort(all(v), [](newt p, newt q)
         { return p.b > q.b; });
    rep(i, 0, n)
    {
        if (v[i].a <= 10)
        {
            cout << v[i].l << endl;
            return;
        }
    }
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