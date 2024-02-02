#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int countWays(int target) {
    vector<int> dp(target + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= target; ++i) {
        for (int toss = 1; toss <= 2; ++toss) {
            if (i >= toss) {
                dp[i] = (dp[i] + dp[i - toss]) % MOD;
            }
        }
    }

    return dp[target];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int target;
        cin >> target;

        int result = countWays(target);
        cout << result << endl;
    }

    return 0;
}
