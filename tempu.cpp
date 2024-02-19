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

class Solution {
public:
    int func(int n, vector<int> &nums, vector<int> &vis,int left,int right) {
        int cost1 = left * nums[n] * right;
        left = 
        vis[n] = 1;
        int mx = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(vis[i] == 1) continue;
            left = 
            int cost = ((i - 1 < 0) ? 1 : nums[i - 1]) * nums[i] * ((i + 1 > nums.size() - 1) ? 1 : nums[i + 1]);
        }
    }
    int maxCoins(vector<int> &nums) {
        vector<int> vis(nums.size(), 0);
        return func(nums.size(), nums, vis,((nums.size() - 1 < 0) ? 1 : nums[nums.size() - 1]),1);
    }
};

void run_case(int64_t &tttt) {
    cout << "#Case " << tttt << ": ";

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &e : v) cin >> e;
    Solution ob;
    cout << ob.maxCoins(v) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}