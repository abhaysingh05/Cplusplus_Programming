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
int dp[205][20005];
bool isSumPossible(int index, int sum, vector<int> &nums) {
    if (sum == 0) return true;
    if (index < 0) return false;
    if (dp[index][sum] != -1) return dp[index][sum];
    // not consider element at index
    int isPossible = isSumPossible(index - 1, sum, nums);
    // consider element at index
    if (sum - nums[index] >= 0) isPossible |= isSumPossible(index - 1, sum - nums[index], nums);
    return dp[index][sum] = isPossible;
}
bool canPartition(vector<int> &nums) {
    memset(dp, -1, sizeof(dp));
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if (sum & 1) return false;
    sum /= 2;
    return isSumPossible(nums.size() - 1, sum, nums);
}
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &numbers : nums) cin >> numbers;
    cout << ((canPartition(nums)) ? "true" : "false") << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}