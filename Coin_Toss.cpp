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
#include <stack>
#include <vector>
using namespace std;
const int N = 1000000007;
int cont(int n, vector<int> &dp) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (dp[n] != -1) return dp[n];
    int left = (cont(n - 1, dp)) % N;
    int right = (cont(n - 2, dp)) % N;
    return dp[n] = (left + right) % N;
}
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";

    int k;
    cin >> k;
    vector<int> dp(k + 10, -1);
    cout << cont(k, dp) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}