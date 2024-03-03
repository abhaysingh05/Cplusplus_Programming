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

    ll n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    string ans;
    int ind = n - 1;
    for (int i = 0; i < n - 1; i++) {
        if (s1[i + 1] == '1' && s2[i] == '0') {
            ind = i;
            break;
        }
    }
    for (int i = 0; i <= ind; i++) {
        ans.pb(s1[i]);
    }
    for (int i = ind; i < n; i++) {
        ans.pb(s2[i]);
    }
    int r = n - 1, l = 0;
    for (int i = ind; i < n; i++) {
        if (ans[i] != s1[i]) {
            r = i - 1;
            break;
        }
    }
    for (int i = ind; i >= 0; --i) {
        if (ans[i + 1] != s2[i]) {
            l = i + 1;
            break;
        }
    }
    cout << ans << "\n";
    cout << (r - l + 1) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}