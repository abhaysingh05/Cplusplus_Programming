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
int query(int x, int y) {
    int val;
    cout << "? " << x << " " << y << "\n";
    cout << flush;
    cin >> val;
    return val;
}
void runCase(int &testCase) {
    // cout << "#Case " << testCase << ": ";
    int n, m;
    cin >> n >> m;
    int q1 = query(1, 1);
    int yq2 = min(m, q1 + 1);
    int xq3 = min(n, q1 + 1);
    int q2 = query(q1 + 2 - yq2, yq2);
    int q3 = query(xq3, q1 + 2 - xq3);
    if (q2 & 1) {
        cout << "! " << xq3 - q3 / 2 << " " << q1 + 2 - xq3 + q3 / 2 << "\n";
        cout << flush;
        return;
    }
    int q4 = query(q1 + 2 - yq2 + q2 / 2, yq2 - q2 / 2);
    if (q4 == 0) {
        cout << "! " << q1 + 2 - yq2 + q2 / 2 << " " << yq2 - q2 / 2 << "\n";
        cout << flush;
        return;
    } else {
        cout << "! " << xq3 - q3 / 2 << " " << q1 + 2 - xq3 + q3 / 2 << "\n";
        cout << flush;
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