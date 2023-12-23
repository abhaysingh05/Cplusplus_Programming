#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
// find_by_order, order_of_key
template <typename T>
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, std::less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
template <typename Key, typename Value>
using ordered_map = __gnu_pbds::tree<Key, Value, std::less<Key>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
typedef long long ll;
#define ff first
#define ss second
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    int U = 0, R = 0, D = 0, L = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x < 0)
        {
            L++;
        }
        if (x > 0)
        {
            R++;
        }
        if (y > 0)
        {
            U++;
        }
        if (y < 0)
        {
            D++;
        }
    }
    if (U && R && D && L)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        cout << "YES\n";
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