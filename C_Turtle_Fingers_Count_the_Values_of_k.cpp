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
ll mM(ll a, ll b) {
    int res = 1;
    while (b) {
        if (b & 1)
            res = res * a;
        b = b >> 1;
        a = a * a;
    }
    return res;
}
void runCase(int &testCase) {
    // cout << "#Case " << testCase << ": ";

    ll a, b, l;
    cin >> a >> b >> l;
    ll ca = 0, cb = 0;
    ll temp = l;
    while (1) {
        if (temp % a == 0) {
            ca++;
            temp /= a;
        } else
            break;
    }
    temp = l;
    while (1) {
        if (temp % b == 0) {
            cb++;
            temp /= b;
        } else
            break;
    }
    ll x, y;
    set<ll> s;
    for (ll j = 0; j <= cb; j++) {
        y = mM(b, j);
        for (ll i = 0; i <= ca; i++) {
            x = mM(a, i);
            if ((l % (x * y)) == 0)
                s.insert(l / (x * y));
            else
                break;
        }
    }
    cout << s.size() << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}