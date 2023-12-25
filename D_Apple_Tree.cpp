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
const int N = 2e5 + 10;
vector<vector<int>> tree(N);
vector<bool> vis(N);
vector<int> v(N);
void dfs(int vertex, int parent)
{
    vis[vertex] = true;
    for (auto child : tree[vertex])
    {
        if (vis[child] || child == parent)
            continue;
        if (tree[child].size() == 1)
        {
            v[child] = 1;
        }
        dfs(child, vertex);
        v[vertex] += v[child];
    }
}
void Solution()
{
    int n;
    cin >> n;
    int e = n - 1;
    rep(i, 0, e)
    {
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    dfs(1, 0);
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << 1LL * v[x] * v[y] << endl;
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
        fill(all(tree), vector<int>());
        fill(all(vis), false);
        fill(all(v), 0);
        Solution();
    }
    return 0;
}