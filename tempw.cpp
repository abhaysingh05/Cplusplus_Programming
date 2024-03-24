#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int64_t mxsubarray(vector<int64_t> a) {
    int64_t mx = 0, sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum = (sum + a[i]) % mod; // Updated: Remove unnecessary modulo operation
        if (mx < sum)
            mx = sum;
        if (sum < 0)
            sum = 0;
    }
    return mx;
}

void runCase(int &testCase) {
    int64_t n, k;
    cin >> n >> k;
    vector<int64_t> v(n);
    for (auto &e : v) {
        cin >> e;
    }

    int64_t mx = mxsubarray(v); // Find the maximum subarray sum
    int64_t ans = 0;

    // Calculate the contribution of the maximum subarray sum to the final answer
    ans = (mx * k) % mod;

    // Output the final answer
    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; ++i) {
        // cout << "#Case " << i << ":\n";
        runCase(i);
    }

    return 0;
}
