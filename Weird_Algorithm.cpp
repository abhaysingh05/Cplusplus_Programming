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

    int64_t n;
    cin >> n;
    while (n != 1) {
        cout << n << ' ';
        (n & 1) ? (n = 3 * n + 1) : (n = n / 2);
    }
    cout << 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    // cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}