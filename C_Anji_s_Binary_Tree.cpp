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
const int N = 3e5 + 10;
vector<char> val;             // Vector to store data at each node
vector<vector<int>> tree;     // tree data stored in form of adjacency list
unordered_map<int, char> bin; // mapped each vertex with left or right child
int change = 0;               // temp storage for change required with each leaf to root
vector<int> ans;              // all changes required for leaf to root
void dfs(int vertex, int parent = 0)
{
    for (auto child : tree[vertex])
    {
        if (child == parent)
            continue;

        if (val[vertex] != bin[child])
        {
            change++;
        }
        dfs(child, vertex);
        if (tree[child].size() == 1)
        {
            ans.push_back(change);
        }
        if (val[vertex] != bin[child])
        {
            change--;
        }
    }
}
void Solution()
{
    int n;
    cin >> n;
    val.resize(n + 1);
    tree.resize(n + 1);
    fill(all(tree), vector<int>());
    bin.clear();
    ans.clear();
    change = 0;
    rep(i, 1, n + 1)
    {
        cin >> val[i];
    }
    rep(i, 1, n + 1)
    {
        int x, y;
        cin >> x >> y;
        if (x != 0)
        {
            tree[i].push_back(x);
            tree[x].push_back(i);
            bin[x] = 'L';
        }
        if (y != 0)
        {
            tree[y].push_back(i);
            tree[i].push_back(y);
            bin[y] = 'R';
        }
    }
    dfs(1);
    cout << *min_element(all(ans)) << endl;
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