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
/**************************************************************************************/

void runCase(int &testCase) {
    // cout << "#Case " << testCase << ": ";

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(m);
    for (auto &e : v) cin >> e.ff >> e.ss;
    rep(i,1,15)
    {
        
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}