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

    ll k, x, a;
    cin >> k >> x >> a;
    ll ans = true;
    ll coins = a;
    rep(i, 1, x) {
        ll betCoins = (a - coins) / (k - 1) + 1; // Wants to recover coins which he lost in previous rounds
        if (coins - betCoins <= 0) {             // he lost all coins
            ans = false;
            break;
        }
        coins -= betCoins;
        if (coins + (k * betCoins) <= a) { // Coins should increase when he wins any round from start
            ans = false;
            break;
        }
    }
    coins = coins * k; // he bet all his coins
    if (coins <= a) {  // if coins still less than initial means can't earn more
        ans = false;
    }
    cout << (ans ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}