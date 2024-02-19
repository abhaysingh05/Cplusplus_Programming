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
<<<<<<< HEAD
int cnt = 0, n;
vector<bool> column;
vector<bool> diag1;
vector<bool> diag2;
void search(int y) {
    if (y == n) {
        cnt++;
        return;
    }
    for (int x = 0; x < n; x++) {
        if (column[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
        column[x] = diag1[x + y] = diag2[x - y + n - 1] = true;
        search(y + 1);
        column[x] = diag1[x + y] = diag2[x - y + n - 1] = false;
    }
}

void run_case(int &testCase) {
    // cout << "#Case " << testCase << ": ";

    cin >> n;
    column.resize(n);
    diag1.resize(2 * n - 1);
    diag2.resize(2 * n - 1);
    fill(all(column), false);
    fill(all(diag1), false);
    fill(all(diag2), false);
    search(0);
    cout << cnt << "\n";
=======

void runCase(int &testCase) {
    // cout << "#Case " << testCase << ": ";

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(m);
    for (auto &e : v) cin >> e.ff >> e.ss;
    rep(i,1,15)
    {
        
    }
>>>>>>> 6064bc1 (temp)
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

<<<<<<< HEAD
    int64_t tests = 1;
    // cin >> tests;

    rep(i, 1, tests) run_case(i);
=======
    ll tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
>>>>>>> 6064bc1 (temp)
}