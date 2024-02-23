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
inline int func(vector<int> &ch, int val) {
    rep(i, 0, 25) {
        if (val == ch[i]) return i;
    }
}
void runCase(int &testCase) {
    // cout << "#Case " << testCase << ": ";
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> ch(26, 0);
    for (auto &e : arr) cin >> e;
    rep(i, 0, n - 1) {
        int ind = func(ch, arr[i]);
        cout << char('a' + ind);
        ch[ind]++;
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}