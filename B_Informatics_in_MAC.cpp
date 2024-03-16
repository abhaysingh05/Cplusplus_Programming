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

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &e : v) cin >> e;
    set<int> pfm, sfm;
    vector<int> pfms(n), sfms(n);
    int val1 = 0, val2 = 0;
    rep(i, 0, n - 1) {
        pfm.insert(v[i]);
        while (pfm.count(val1)) val1++;
        pfms[i] = val1;
    }
    rrep(i, n - 1, 0) {
        sfm.insert(v[i]);
        while (sfm.count(val2)) val2++;
        sfms[i] = val2;
    }
    rep(i, 0, n - 2) {
        if (pfms[i] == sfms[i + 1]) {
            cout << 2 << "\n"
                 << 1 << " " << i + 1 << "\n"
                 << i + 2 << " " << n << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}