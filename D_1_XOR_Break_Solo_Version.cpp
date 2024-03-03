#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
// Macros
#define ff first
#define ss second
#define pb push_back
#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define all(x) x.begin(), x.end()

// Typedef
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    ordered_set; // .find_by_order(), .order_of_key()

// Constants
const int INF = (int)1e9;
const int mod = INF + 7;
/**************************************************************************************/

void runCase(int &testCase) {
    // cout << "#Case " << testCase << ": ";

    ll m, n;
    cin >> n >> m;
    vector<ll> ans;
    ans.pb(n);
    for (ll i = 62; i >= 0; --i) {
        ll b1 = (ans.back() >> i) & 1;
        ll b2 = (m >> i) & 1LL;
        if (b1 == 1 && b2 == 0) {
            ll val = (1LL << i);
            for (int j = i - 1; j >= 0; --j) {
                ll _b1 = (ans.back() >> j) & 1LL;
                ll _b2 = (m >> j) & 1LL;
                if (_b1 == 0 && _b2 == 1) {
                    if ((val | (1LL << j)) < ans.back()) val |= (1LL << j);
                }
            }
            ans.pb(ans.back() ^ val);
        }
        if (b1 == 0 && b2 == 1) {
            cout << -1 << "\n";
            return;
        }
    }
    cout << ans.size() - 1 << "\n";
    for (auto &e : ans) cout << e << " ";
    cout << "\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}