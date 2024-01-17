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
const int N = 2e3+10;

vector<int64_t> parent(N);
vector<int64_t> size_set(N);

void Make(int64_t v)
{
    parent[v] = v;
    size_set[v] = 1;
}

int64_t find(int64_t v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

void Union(int64_t a, int64_t b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (size_set[a] < size_set[b])
            swap(a, b);
        parent[b] = a;
        size_set[a] += size_set[b];
    }
}

void run_case() 
{
    
    int64_t n;
    cin >> n;
    vector<pair<int64_t,int64_t>> cities(n+1);
    for (int64_t i = 1; i <= n; ++i)
    {
    	int64_t x,y;
    	cin >> x >> y;
    	cities[i] = {x,y};
    }
    vector<int64_t> c(n+1),k(n+1);
    for (int64_t i = 1; i <= n; ++i)
    {
    	cin >> c[i];
    }
    for (int64_t i = 1; i <= n; ++i)
    {
    	cin >> k[i];
    }
    vector<pair<int64_t,pair<int64_t,int64_t>>> edges;
    for (int64_t i = 1; i <= n; ++i)
    {
    	edges.push_back({c[i],{i,0}});
    }
    for (int64_t i = 1; i <= n; ++i)
    {
    	for (int64_t j = i+1; j <= n; ++j)
    	{
    		int64_t len = abs(cities[i].first - cities[j].first) + abs(cities[i].second - cities[j].second);
    		int64_t cost = len * (k[i]+k[j]);
    		edges.push_back({cost,{i,j}});
    	}
    }
    sort(begin(edges), end(edges));
    for (int i = 0; i <= n; ++i)
    {
    	Make(i);
    }
    int64_t amount = 0;
    vector<int64_t> ans2;
    vector<pair<int64_t,int64_t>> ans3;
    for (auto &edge : edges)
    {
    	int64_t wt = edge.first;
    	int64_t u = edge.second.first;
    	int64_t v = edge.second.second;
    	if(find(u) == find(v)) continue;
    	if(u == 0 || v == 0) ans2.push_back(u^v);
    	else ans3.push_back({u,v});
    	Union(u,v);
    	amount += wt;
    }
    cout << amount << "\n";
    cout << ans2.size() << "\n";
    for(auto &e: ans2) cout << e << ' ';
    cout << "\n";
	cout << ans3.size() << "\n";
	for(auto &e: ans3) cout << e.first << " " << e.second << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    // cin >> tests;

    while (tests-- > 0)
        run_case();
}