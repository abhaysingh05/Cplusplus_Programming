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
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
// X.find_by_order(k) return iterator of kth element. 0 indexed.
// X.order_of_key(k) returns count of elements strictly less than k.

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
    vector<int> ans;
    if (is_sorted(all(nums))) {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        ans.pb(nums[i]);
        if (nums[i] >= 10) {
            int dig1, dig2;
            dig1 = nums[i] % 10;
            dig2 = nums[i] / 10;
            if (dig1 < dig2) {
                continue;
            } else {
                ans.pop_back();
                ans.pb(dig2);
                ans.pb(dig1);
                if (is_sorted(all(ans))) {
                    continue;
                } else {
                    ans.pop_back();
                    ans.pop_back();
                    ans.pb(nums[i]);
                }
            }
        }
    }
    if (is_sorted(all(ans))) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}