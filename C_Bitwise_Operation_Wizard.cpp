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
    int mx = 0;
    string s;
    for (int i = 0; i < n; i++) {
        cout << "? " << mx << " " << mx << " " << i << " " << i << "\n";
        cout << flush;
        cin >> s;
        if (s == "<") {
            mx = i;
        }
    }
    vector<int> pos;
    int ind = 0;
    for (int i = 0; i < n; i++) {
        cout << "? " << mx << " " << ind << " " << mx << " " << i << "\n";
        cout << flush;
        cin >> s;
        if (s == "<") {
            pos.clear();
            pos.pb(i);
            ind = i;
        } else if (s == "=") {
            pos.pb(i);
        }
    }
    int mn = pos[0];
    for (int i = 1; i < pos.size(); i++) {
        cout << "? " << mn << " " << mn << " " << pos[i] << " " << pos[i] << "\n";
        cout << flush;
        cin >> s;
        if (s == ">") {
            mn = pos[i];
        }
    }
    cout << "! " << mx << " " << mn << "\n";
    cout << flush;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}