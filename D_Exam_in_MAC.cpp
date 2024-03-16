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

    ll n, c;
    cin >> n >> c;
    vector<ll> v(n);
    for (auto &e : v) cin >> e;
    ll N = ((c + 1) * (c + 2)) / 2;
    ll oddCountTill = 0, evenCountTill = 0;
    rep(i, 0, n - 1) {
        N -= 1 + v[i] / 2 + (c - v[i] + 1);
        (v[i] & 1) ? oddCountTill++ : evenCountTill++;
        (v[i] & 1) ? (N += oddCountTill) : (N += evenCountTill);
    }
    cout << N << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}