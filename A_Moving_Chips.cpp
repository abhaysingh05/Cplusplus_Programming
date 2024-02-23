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

    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &e : nums) cin >> e;
    int l = -1, r = -1;
    rep(i, 0, n - 1) {
        if (l == -1 && nums.at(i) == 1) {
            l = i;
        }
        if (nums.at(i) == 1) {
            r = i;
        }
    }
    if (l == -1) {
        cout << 0 << "\n";
        return;
    }
    int ans = 0;
    rep(i, l, r) {
        if (nums[i] == 0) ans++;
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