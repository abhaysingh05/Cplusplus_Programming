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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int64_t n, k;
    cin >> n >> k;
    vector<int64_t> heights(n);
    for (auto &e : heights) cin >> e;
    vector<int64_t> dp(n + 1);
    dp[1] = 0;
    for (int64_t i = 2; i <= n; i++) {
        int64_t mn = INT32_MAX;
        for (int64_t j = 1; j <= k; j++) {
            if (i - j - 1 >= 0 && i - j >= 0)
                mn = min(mn, dp[i - j] + abs(heights[i - 1] - heights[i - j - 1]));
        }
        dp[i] = mn;
    }
    cout << dp[n] << "\n";
    return 0;
}