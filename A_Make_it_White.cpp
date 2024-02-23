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
    string s;
    cin >> n >> s;
    int l = -1, r = -1;
    rep(i, 0, n - 1) {
        if (l == -1 && s.at(i) == 'B') {
            l = i;
        }
        if (s.at(i) == 'B') {
            r = i;
        }
    }
    if (l != -1)
        cout << r - l + 1 << "\n";
    else
        cout << 0 << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}