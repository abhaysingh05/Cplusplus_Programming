#include <bits/stdc++.h>
using namespace std;
// O(N^2)
class Solution {
public:
    int dp[1005];
    int maxProfit(int len, vector<int> &prices) {
        if (len == 0) return 0;
        int maxValue = 0;
        if (dp[len] != -1) return dp[len];
        for (int lenToCut = 1; lenToCut <= prices.size(); lenToCut++) {
            if (len - lenToCut >= 0)
                maxValue = max(maxValue, maxProfit(len - lenToCut, prices) + prices[lenToCut - 1]);
        }
        return dp[len] = maxValue;
    }
    int cutRod(int price[], int n) {
        vector<int> prices(price, price + n);
        memset(dp, -1, sizeof(dp));
        return maxProfit(n, prices);
    }
};
int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}