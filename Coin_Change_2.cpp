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
int32_t dp[310][10010];
int32_t noOfWays(int32_t index, int32_t amount, vector<int32_t> &coins) {
    if (amount == 0) return 1;
    if (index < 0) return 0;
    if (dp[index][amount] != -1) return dp[index][amount];

    int32_t ways = 0;
    for (int32_t coinAmount = 0; coinAmount <= amount; coinAmount += coins[index]) {
        ways += noOfWays(index - 1, amount - coinAmount, coins);
    }
    return dp[index][amount] = ways;
}
int32_t change(int amount, vector<int> &coins) {
    memset(dp, -1, sizeof(dp));
    return noOfWays(coins.size() - 1, amount, coins);
}
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";

    int32_t n;
    cin >> n;
    vector<int32_t> coins(n);
    for (auto &e : coins) cin >> e;
    int32_t amount;
    cin >> amount;
    cout << change(amount, coins) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    //     cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}