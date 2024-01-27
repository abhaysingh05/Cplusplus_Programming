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
class Solution {
public:
    int32_t dp[10010];
    int32_t leastCoins(int32_t amount, vector<int32_t> &coins) {
        if (amount == 0) return 0;
        if (dp[amount] != -1) return dp[amount];

        int32_t ans = INT32_MAX;
        for (int32_t coin : coins) {
            if (amount - coin < 0) continue;
            ans = min(ans + 0LL, leastCoins(amount - coin, coins) + 1LL);
        }
        return dp[amount] = ans;
    }
    int32_t coinChange(vector<int32_t> &coins, int32_t amount) {
        memset(dp, -1, sizeof(dp));
        int32_t ans = leastCoins(amount, coins);
        return ans == INT32_MAX ? -1 : ans;
    }
};
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";

    int32_t n;
    cin >> n;
    vector<int32_t> coins(n);
    for (auto &e : coins) cin >> e;
    int32_t amount;
    cin >> amount;
    Solution ob;
    int32_t ans = ob.coinChange(coins, amount);
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    //     cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}