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
    vector<pair<int, int>> arr(n);
    for (auto &e : arr) cin >> e.first;
    for (auto &e : arr) cin >> e.second;
    sort(arr.begin(), arr.end());
    for (auto &e : arr) cout << e.first << ' ';
    cout << "\n";
    for (auto &e : arr) cout << e.second << ' ';
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}