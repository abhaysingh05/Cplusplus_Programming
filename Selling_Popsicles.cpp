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
    vector<int> v(n);
    for (auto &e : v) cin >> e;
    int mx = *max_element(v.begin(), v.end());
    cout << max(mx - 10, 0) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}