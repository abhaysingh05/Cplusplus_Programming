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
int dp[1005][1005];
int lcs(int i, int j, string &s1, string &s2) {
    if (i < 0 || j < 0) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    // remove 1 char from s1
    int ans = lcs(i - 1, j, s1, s2);
    // remove 1 char from s2
    ans = max(ans, lcs(i, j - 1, s1, s2));
    // remove 1 char from s1 and 1 char from s2
    ans = max(ans, lcs(i - 1, j - 1, s1, s2) + (s1[i] == s2[j]));
    return dp[i][j] = ans;
}
int longestCommonSubsequence(string text1, string text2) {
    memset(dp, -1, sizeof(dp));
    return lcs(text1.size() - 1, text2.size() - 1, text1, text2);
}
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";
    string s1, s2;
    cin >> s1 >> s2;
    cout << longestCommonSubsequence(s1, s2) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}