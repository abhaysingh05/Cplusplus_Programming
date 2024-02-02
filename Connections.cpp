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
int lcs(int i,int j, vector<int> &v1, vector<int> &v2, vector<vector<int>> &dp)
{
    if(i < 0 || j < 0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = lcs(i-1,j,v1,v2,dp);
    ans = max(ans,lcs(i,j-1,v1,v2,dp));
    ans = max(ans,lcs(i-1,j-1,v1,v2,dp)+ (v1[i] == v2[j]));
    return dp[i][j] = ans;
}
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";

    int x, y;
    cin >> x >> y;
    vector<int> A(x);
    vector<int> B(y);
    for(auto &e: A) cin >> e;
    for(auto &e: B) cin >> e;
    vector<vector<int>> dp(x,vector<int>(y,-1));
    cout << lcs(x-1,y-1,A,B,dp) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}