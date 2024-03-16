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
    // cout << "#Case " << testCase << ": \n";

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &e : v) cin >> e;
    vector<int> pfs;
    pfs.pb(0);
    int sum = 0;
    for (auto &e : v) {
        sum += e;
        pfs.pb(sum);
    }
    int q;
    cin >> q;
    while (q--) {
        int l, u;
        cin >> l >> u;
        int r = distance(pfs.begin(), lower_bound(pfs.begin() + 1, pfs.end(), u + pfs[l - 1]));
        if (pfs[r] - u - pfs[l - 1] > u + pfs[l - 1] - pfs[r - 1]) r--;
        r = min(r, n);
        r = max(l, r);
        cout << r << " ";
    }
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