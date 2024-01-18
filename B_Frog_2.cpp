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
#include <vector>
using namespace std;
const int N = 1e5+10;
int64_t k;
vector<int64_t> dp(N);
vector<int64_t> h(N);
int64_t cost(int64_t n)
{
	if(n == 1) return dp[n] = 0;
	if(n == 2) return dp[n] = abs(h[n]-h[n-1]);
	if(dp[n] != -1) return dp[n];
	int64_t costs = INT64_MAX;
	for (int i = 1; i <= k; ++i)
	{
		if(n-i > 0)
			costs = min(costs,cost(n-i)+abs(h[n]-h[n-i]));
	}
	return dp[n] = costs;
}

void run_case() 
{
    int64_t n;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
    	cin >> h[i];
    }
    cost(n);
    cout << dp[n] << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    // cin >> tests;

    while (tests-- > 0)
    {
    	fill(dp.begin(),dp.end(),-1);
        run_case();
    }
}