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
    string s;
    cin >> s;
    vector<int> ans(n + 1);
    int l = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s.at(i) == '>')
            ans[i + 1] = ++l;
    }
    ans[0] = ++l;
    for (int i = 0; i < n; i++) {
        if (s.at(i) == '<')
            ans[i + 1] = ++l;
    }
    for (auto &e : ans) cout << e << ' ';
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    // cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}