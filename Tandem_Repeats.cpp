#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
// Macros
#define ff first
#define ss second
#define pb push_back
#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)
#define all(x) x.begin(), x.end()

// Typedef
typedef long long ll;
template <class T>
using _set = __gnu_pbds::tree<T, __gnu_pbds::null_type, less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
// X.find_by_order(k) return iterator of kth element. 0 indexed.
// X.order_of_key(k) returns count of elements strictly less than k.

// Constants
const int INF = (int)1e9;
const int mod = INF + 7;
/**************************************************************************************/

void runCase(int &testCase) {
    // cout << "#Case " << testCase << ": ";

    int n;
    string s;
    cin >> s;
    n = s.size();
    int ans = 0;
    for (int len = 1; len * 2 <= n; len++) {
        vector<int> val(n, 0);
        for (int i = 0; i + len < n; i++) {
            val[i] = ((s[i] == s[i + len]) || s[i] == '?' || s[i + len] == '?');
        }
        rep(i, 1, n - 1) {
            val[i] += val[i - 1];
        }
        if (val[len - 1] == len) ans = max(ans, len);
        for (int i = len; i < n; i++) {
            if ((val[i] - val[i - len] == len))
                ans = max(ans, len);
        }
    }
    cout << 2 * ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}