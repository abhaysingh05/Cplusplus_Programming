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
const int N = 1e6 + 10;
vector<bool> Primes(N, true);
vector<int> ans;

void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";
    int n;
    cin >> n;
    cout << ans[n - 1] << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    Primes[0] = Primes[1] = false;
    for (int64_t i = 2; i <= N - 10; i++) {
        for (int64_t j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                Primes[i] = 0;
                break;
            }
        }
    }
    for (int i = 0; i <= N - 10; i++) {
        if (Primes[i]) {
            ans.push_back(i);
        }
    }
    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}