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
int dp[505][505];
int func(int i, int j, string &s1, string &s2) {
    // s1 exhausted
    if (i < 0) return j + 1;
    // s2 exhausted
    if (j < 0) return i + 1;
    if (dp[i][j] != -1) return dp[i][j];
    // if matches last digit
    if (s1[i] == s2[j])
        return dp[i][j] = func(i - 1, j - 1, s1, s2);
    else { // if does not matches last digit
        // deleting
        int val = func(i - 1, j, s1, s2) + 1;
        // inserting
        val = min(val, func(i, j - 1, s1, s2) + 1);
        // replacing
        val = min(val, func(i - 1, j - 1, s1, s2) + 1);
        return dp[i][j] = val;
    }
}
int minDistance(string word1, string word2) {
    memset(dp, -1, sizeof(dp));
    return func(word1.size() - 1, word2.size() - 1, word1, word2);
}
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";

    string s1, s2;
    cin >> s1 >> s2;
    cout << minDistance(s1, s2) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    // cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}