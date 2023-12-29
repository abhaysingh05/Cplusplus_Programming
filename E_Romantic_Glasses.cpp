#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long ll;
#define nline '\n';
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
    int n;
    cin >> n;
    vector<int> v(n + 1);
    rep(i, 1, n + 1)
    {
        cin >> v[i];
    }
    map<ll, ll> m; // Don't use unordered_map Its complexity is O(n)
    vector<ll> a;
    vector<ll> b;
    a.push_back(0);
    b.push_back(0);
    ll suma = 0;
    ll sumb = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 2)
        {
            suma += v[i];
        }
        else
        {
            sumb += v[i];
        }
        a.push_back(suma);
        b.push_back(sumb);
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] - b[i] == 0 || m.find(a[i] - b[i]) != m.end())
        {
            cout << "YES\n";
            return;
        }
        m[a[i] - b[i]] = 1;
    }
    cout << "NO\n";
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