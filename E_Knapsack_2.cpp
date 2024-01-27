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

int64_t minWeight(int index, int valLeft) {
    // maxProfit(index, 0)
    if (valLeft == 0) return 0;
    // maxProfit(-1,wtLeft)
    if (index < 0) return 1e15;

    if (dp[index][valLeft] != -1) return dp[index][valLeft];

    // When not choosing item at index
    int64_t ans = minWeight(index - 1, valLeft);
    // When choosing item at index
    if (valLeft - val[index] >= 0) ans = min(ans, minWeight(index - 1, valLeft - val[index]) + wt[index]);
    return dp[index][valLeft] = ans;
}
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        cin >> wt[i] >> val[i];
    }
    int value = 1e5;
    for (int val = value; val >= 0; --val) {
        if (minWeight(n - 1, val) <= w) {
            cout << val << "\n";
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    // cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}