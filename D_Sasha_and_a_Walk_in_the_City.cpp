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
const ll mod = 998244353;
/**************************************************************************************/

void runCase(int &testCase) {
    // cout << "#Case " << testCase << ": ";

    ll n, ans = 1;
    cin >> n;
    vector<vector<ll>> graph(n + 1);
    vector<ll> dp(n + 1, 0); // will store no of good set taking certain vertex as a subtree
    rep(i, 1, n - 1) {
        int x, y;
        cin >> x >> y;
        graph[x].pb(y);
        graph[y].pb(x);
    }
    function<void(ll, ll)> dfs = [&](ll vertex, ll par) {
        dp[vertex] = 1;

        for (int child : graph[vertex]) {
            if (child == par) continue;
            dfs(child, vertex);
            dp[vertex] = ((dp[vertex] % mod) * (dp[child] % mod)) % mod; // taking no of valid sets of each subtree
        }
        ans = ((ans % mod) + (dp[vertex] % mod)) % mod; // taking all combination of subtree good sets
        dp[vertex]++;                                   // when taking only vertex
    };
    dfs(1, 0);
    cout << ans % mod << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}