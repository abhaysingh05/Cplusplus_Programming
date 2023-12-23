#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#pragma GCC optimize("Ofast,no-stack-protector,fast-math",3)
#define all(x) x.begin(),x.end()
// find_by_order, order_of_key
template<typename T>
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, std::less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
template<typename Key, typename Value>
using ordered_map = __gnu_pbds::tree<Key, Value, std::less<Key>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
typedef long long ll;
#define ff first
#define ss second
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int n, k = 0;
    cin >> n;
    vector<pair<int, int>> v(n);
    vector<int> index(n), ans(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].ff >> v[i].ss;
    iota(all(index), 0);
    sort(all(index), [&](int a, int b) { return (v[a].ff + v[a].ss != v[b].ff + v[b].ss) ? v[a].ff + v[a].ss < v[b].ff + v[b].ss : v[a].ff < v[b].ff; });
    for (auto e : index) ans[e] = k++;
    for (auto e : ans) cout << e << ' ';
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--)
    {
        Solution();
    }
    return 0;
}