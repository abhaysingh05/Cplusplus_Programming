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

int main() {

    int l = 1;
    int r = 1000000;
    int mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        cout << mid << "\n";
        cout << flush;
        string s;
        cin >> s;
        if (s == "<") {
            r = mid - 1;
        } else {
            l = mid;
        }
    }
    cout << r << "\n";
    string s;
    cin >> s;
    if (s == ">=") {
        cout << "! " << r << "\n";
        cout << flush;
    } else {
        cout << "! " << l << "\n";
        cout << flush;
    }
    return 0;
}