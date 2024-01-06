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
    int64_t n;
    cin >> n;
    vector<int64_t> v(n);
    for(auto &e: v) cin >> e;
    int64_t ans = 0;
    int64_t a = INT64_MAX;
    int64_t b = INT64_MAX;
    for(auto &e: v)
    {
    	if(a > b)
    	{
    		swap(a,b);
    	}
    	if(e <= a)
    	{
    		a = e;
    	}
    	else if(e <= b)
    	{
    		b = e;
    	}
    	else
    	{
    		a = e;
    		ans++;
    	}
    	// cout << a << "," << b << "\n";
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