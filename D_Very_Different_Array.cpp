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

void run_case(int64_t &tttt) 
{
    // cout << "#Case " << tttt << ": ";
    
    int64_t n,m;
    cin >> n >> m;
    vector<int64_t> a(n);
    vector<int64_t> b(m);
    for(auto &e: a) cin >> e;
    for(auto &e: b) cin >> e;
    sort(begin(a), end(a));
	sort(begin(b), end(b));
	int64_t ans = 0;
	int as = 0;
	int ae = n-1;
	int bs = 0;
	int be = m-1;
    for(int64_t i = 0; i < n; i++)
    {
    	int64_t val1 = abs(a[as] - b[be]);
    	int64_t val2 = abs(b[bs] - a[ae]);
    	if(val1 > val2)
    	{
    		ans += val1;
    		as++;
    		be--;
    	}
    	else
    	{
    		ans+= val2;
    		bs++;
    		ae--;
    	}
    }
	cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for(int64_t i = 1; i <= tests; i++)
        run_case(i);
}			