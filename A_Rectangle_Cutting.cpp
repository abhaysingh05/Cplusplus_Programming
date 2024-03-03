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

    ll a, b;
    cin >> a >> b;
    if (!(a & 1) && (b & 1)) {
        cout << ((a / 2 != b || 2 * b != a) ? "YES" : "NO") << "\n";
        return;
    }
    if ((a & 1) && !(b & 1)) {
        swap(a, b);
        cout << ((a / 2 != b || 2 * b != a) ? "YES" : "NO") << "\n";
        return;
    }
    if (!(a & 1) && !(b & 1)) {
        cout << (((a / 2 != b || 2 * b != a) || (2 * a != b || b / 2 != a)) ? "YES" : "NO") << "\n";
        return;
    }
    if ((a & 1) && (b & 1)) {
        cout << "NO"
             << "\n";
        return;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}