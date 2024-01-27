#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;
vector<int> wt(105), val(105);
vector<vector<int64_t>> dp(105, vector<int64_t>(100005, -1));
// O(N x W)
int64_t maxProfit(int index, int wtLeft) {
    // maxProfit(index, 0)
    if (wtLeft == 0) return 0;
    // maxProfit(-1,wtLeft)
    if (index < 0) return 0;

    if (dp[index][wtLeft] != -1) return dp[index][wtLeft];

    // When not choosing item at index
    int64_t ans = maxProfit(index - 1, wtLeft);
    // When choosing item at index
    if (wtLeft - wt[index] >= 0) ans = max(ans, maxProfit(index - 1, wtLeft - wt[index]) + val[index]);
    return dp[index][wtLeft] = ans;
}
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        cin >> wt[i] >> val[i];
    }
    cout << maxProfit(n - 1, w) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    // cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}