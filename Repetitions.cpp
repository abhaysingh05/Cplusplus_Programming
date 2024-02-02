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

void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";

    string s;
    cin >> s;
    int n = s.size();
    int currSum = 1;
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (s.at(i) == s.at(i - 1)) {
            currSum++;
        } else {
            ans = max(ans, currSum);
            currSum = 1;
        }
    }
    ans = max(ans, currSum);
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    // cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}