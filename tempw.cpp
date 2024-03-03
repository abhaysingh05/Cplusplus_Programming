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
const int INF = 100000;
int32_t leastCoins(int32_t amount, vector<int32_t> &coins, vector<int> &dp) {
    if (amount == 0) return 0;
    if (dp[amount] != -1) return dp[amount];

    int32_t ans = INT32_MAX;
    for (int32_t coin : coins) {
        if (amount - coin < 0) continue;
        ans = min(ans + 0LL, leastCoins(amount - coin, coins, dp) + 1LL);
    }
    return dp[amount] = ans;
}
int32_t coinChange(vector<int32_t> &coins, int32_t amount, vector<int> &dp) {
    int32_t ans = leastCoins(amount, coins, dp);
    return ans == INT32_MAX ? -1 : ans;
}
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";

    vector<int32_t> coins = {1, 3, 6, 10, 16};
    vector<int> dp(INF, -1);
    int32_t amount;
    cin >> amount;
    int ans = coinChange(coins, amount, dp);
    cout << amount / 16 + (dp[16 + amount % 16]) - 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}
//
// 399
// 290
// 158
// 159
// 221
// 161
// 89
// 90
// 335
// 608
// 10 6366 4636 2523 2532 3542 2564 1412 1433 5355 9760