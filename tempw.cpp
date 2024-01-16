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
#include <unordered_map>
using namespace std;
const int64_t N = 510;
const int64_t INF = 1e9+10;

int64_t dist[N][N];

void run_case() 
{
    vector<int64_t> ans;
    for (int64_t i = 0; i < N; ++i)
    {
        for (int64_t j = 0; j < N; ++j)
        {
            dist[i][j] = INF;
        }
    }
    int64_t n;
    cin >> n;
    for (int64_t i = 1; i <= n; ++i)
    {
        for (int64_t j = 1; j <= n; ++j)
        {
            int64_t wt;
            cin >> wt;
            dist[i][j] = wt;
        }
    }
    vector<int64_t> v(n);
    unordered_map<int64_t,int64_t> mp;
    for (int64_t i = n-1; i >= 0; --i)
    {
        cin >> v[i];
    }
    mp[v[0]] = 1;
    for (int64_t k = 0; k < n; ++k)
    {
        mp[v[k]] = 1;
        for(int64_t i = 1;i <= n;++i)
        {
            for(int64_t j = 1; j <= n; ++j)
            {
                dist[i][j] = min(dist[i][j],dist[i][v[k]]+dist[v[k]][j]);
            }
        }
        int64_t sum = 0;
        for(int64_t i = 1;i <= n;++i)
        {
            for(int64_t j = 1; j <= n; ++j)
            {
                if(dist[i][j] == INF || mp.find(i)==mp.end() || mp.find(j)==mp.end()) continue;
                sum += dist[i][j];
                // cout << "(" << v[k] << ") " <<i << "," << j << " - " <<dist[i][j] << endl;
            }
        }
        ans.push_back(sum);
    }
    for (int i = ans.size()-1; i >= 0; --i)
    {
        cout << ans[i] << ' ';
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    // cin >> tests;

    while (tests-- > 0)
        run_case();
}