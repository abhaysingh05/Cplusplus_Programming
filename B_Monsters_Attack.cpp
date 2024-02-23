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

    ll n, k;
    cin >> n >> k;
    vector<ll> health(n);
    vector<ll> distance(n);
    for (auto &e : health) cin >> e;
    for (auto &e : distance) cin >> e;
    map<ll, ll> m;
    rep(i, 0, n - 1) {
        ll d = abs(distance[i]);
        m[d] += health[i];
    }
    vector<pair<ll, ll>> pfs(m.size());
    auto it = m.begin();
    pfs[0].first = it->first;
    pfs[0].second = it->second;
    ++it;
    rep(i, 1, pfs.size() - 1) {
        pfs[i].first = it->first;
        pfs[i].second = pfs[i - 1].second + it->second;
        ++it;
    }
    rep(i, 0, pfs.size() - 1) {
        if (pfs[i].second > k * pfs[i].first) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}