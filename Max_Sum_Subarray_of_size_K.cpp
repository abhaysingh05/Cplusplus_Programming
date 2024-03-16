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

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &e : v) cin >> e;
    int i = 0, j = 0;
    int sum = 0;
    int mx = INT_MIN;
    while (j < n) {
        sum += v[j];
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k) {
            mx = max(mx, sum);
            sum -= v[i];
            i++;
            j++;
        }
    }
    cout << mx << "\n";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}