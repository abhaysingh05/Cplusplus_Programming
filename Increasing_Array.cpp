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

    int n;
    cin >> n;
    int64_t prev;
    int64_t curr;
    int64_t ans = 0;
    cin >> prev;
    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (prev > curr) {
            ans += prev - curr;
            curr = prev;
        }
        prev = curr;
    }
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