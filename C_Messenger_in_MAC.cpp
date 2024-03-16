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
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    ordered_set; // .find_by_order(), .order_of_key()

// Constants
const int INF = (int)1e9;
const int mod = INF + 7;
/**************************************************************************************/

void runCase(int &testCase) {
    // cout << "#Case " << testCase << ": ";

    int n, l, ans = -1;
    cin >> n >> l;
    vector<pair<int, int>> v(n);
    for (auto &e : v) cin >> e.ff >> e.ss;
    sort(all(v), [&](pair<int, int> a, pair<int, int> b) { return a.ss < b.ss; });
    rep(i, 0, n - 1) {
        priority_queue<int> pq;
        int time = 0;
        rep(j, i, n - 1) {
            pq.push(v[j].ff);
            time += v[j].ff;
            while (!pq.empty() && time + v[j].ss - v[i].ss > l) {
                time -= pq.top();
                pq.pop();
            }
            ans = max(ans, (int)pq.size());
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}