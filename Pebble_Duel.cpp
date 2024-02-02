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

    int64_t m, n;
    cin >> m >> n;
    int a = m % 3;
    int b = n % 3;
    if (a == 0 && b == 0)
        cout << "tie\n";
    else if (a == 0 && b == 2) {
        cout << "mikasa\n";
    } else if (a == 1 && b == 0) {
        cout << "mikasa\n";
    } else if (a == 2 && b == 0) {
        cout << "armin\n";
    } else if (a == 1 && b == 1) {
        cout << "tie\n";
    } else if (a == 2 && b == 2) {
        cout << "tie\n";
    } else if (a == 1 && b == 2) {
        cout << "armin\n";
    } else if (a == 2 && b == 1) {
        cout << "armin\n";
    } else if (a == 0 && b == 1) {
        cout << "armin\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}