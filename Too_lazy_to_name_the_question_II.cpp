#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
#define f first
#define s second
// find_by_order, order_of_key
template <typename T>
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, std::less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
template <typename Key, typename Value>
using ordered_map = __gnu_pbds::tree<Key, Value, std::less<Key>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
typedef long long ll;
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    set<pair<int, int>> vs;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].f >> v[i].s;
        vs.insert({v[i].f, v[i].s});
    }
    int mx = INT_MIN;
    int mn = INT_MAX;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i].f == v[j].f || v[i].s == v[j].s)
            {
                continue;
            }
            pair<int, int> p1 = {v[i].f, v[j].s};
            pair<int, int> p2 = {v[j].f, v[i].s};
            if (vs.count(p1) && vs.count(p2))
            {
                flag = true;
                int ar = abs(v[j].f - v[i].f) * abs(v[j].s - v[i].s);
                mx = max(mx, ar);
                mn = min(mn, ar);
            }
        }
    }
    if (flag == false)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << mx - mn << endl;
    }
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